#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TLS1_HB_REQUEST		1
#define TLS1_HB_RESPONSE	2
#define TLS1_RT_HEARTBEAT		24

#define n2s(c,s)	((s=(((unsigned int)(c[0]))<< 8)| \
  (((unsigned int) (c[1])))), c += 2)
#define s2n(s,c)	((c[0]=(unsigned char)(((s)>> 8)&0xff), \
  c[1] = (unsigned char) (((s)) & 0xff)), c += 2)
/******************************************************************************/
/* DATA STRUCTURES */

/******************************************************************************/
typedef struct ssl3_record_st
{

	/* r */ int type;
	/* type of record */

	/* rw */ unsigned int length;
	/* How many bytes available */

	/* r */ unsigned int off;
	/* read/write offset into 'buf' */

	/* rw */ unsigned char *data;
	/* pointer to the record data */

	/* rw */ unsigned char *input;
	/* where the decode bytes are */

	/* r */ unsigned char *comp;
	/* only used with decompression - malloc()ed */

	/* r */ unsigned long epoch;
	/* epoch number, needed by DTLS1 */

	/* r */ unsigned char seq_num[8];
	/* sequence number, needed by DTLS1 */
} SSL3_RECORD;

typedef struct ssl3_state_st
{
	SSL3_RECORD rrec;
} SSL3_STATE;

typedef struct ssl_st SSL;
struct ssl_st
{
	int version;
	struct ssl3_state_st *s3;
	void (*msg_callback) (int write_p, int version, int content_type,
						  const void *buf, size_t len, SSL * ssl, void *arg);
	void *msg_callback_arg;
	unsigned int tlsext_hb_pending;	/* Indicates if a HeartbeatRequest is in
									   flight */
	unsigned int tlsext_hb_seq;	/* HeartbeatRequest sequence number */
};


/******************************************************************************/
/* FUNCTIONS */

/******************************************************************************/
int tls1_process_heartbeat(SSL * s)
{
	unsigned char *p = &s->s3->rrec.data[0], *pl;
	unsigned short hbtype;
	unsigned int payload;
	unsigned int padding = 16;	/* Use minimum padding */

	/* Read type and payload length first */
	hbtype = *p++;
	n2s(p, payload);
	pl = p;

	// NOT EXECUTED
	if (s->msg_callback)
		s->msg_callback(0, s->version, TLS1_RT_HEARTBEAT, &s->s3->rrec.data[0],
						s->s3->rrec.length, s, s->msg_callback_arg);
	if (hbtype == TLS1_HB_REQUEST)
	{
		unsigned char *buffer, *bp;
		int r;

		/* Allocate memory for the response, size is 1 bytes message type,
		   plus 2 bytes payload length, plus payload, plus padding */
		// buffer = OPENSSL_malloc(1 + 2 + payload + padding);
		buffer = malloc(1 + 2 + payload + padding);
		bp = buffer;

		/* Enter response type, length and copy payload */
		*bp++ = TLS1_HB_RESPONSE;
		s2n(payload, bp);
		memcpy(bp, pl, payload);
		bp += payload;

		/* Random padding */
		// RAND_pseudo_bytes(bp, padding);
		memset(bp, 1, padding);

		// FIXME
		// r = ssl3_write_bytes(s, TLS1_RT_HEARTBEAT, buffer, 3 + payload +
		// padding);
		r = -1;
		if (r >= 0 && s->msg_callback)
			s->msg_callback(1, s->version, TLS1_RT_HEARTBEAT, buffer,
							3 + payload + padding, s, s->msg_callback_arg);

		// OPENSSL_free(buffer);
		free(buffer);
		if (r < 0)
			return r;
	}
	else if (hbtype == TLS1_HB_RESPONSE)
	{
		unsigned int seq;

		/* We only send sequence numbers (2 bytes unsigned int), and 16 random 
		   bytes, so we just try to read the sequence number */
		n2s(pl, seq);
		if (payload == 18 && seq == s->tlsext_hb_seq)
		{
			s->tlsext_hb_seq++;
			s->tlsext_hb_pending = 0;
		}
	}
	return 0;
}


/******************************************************************************/
/* EXECUTION */
/******************************************************************************/
int main(int argc, char **argv)
{
	printf("#############################################################\n");
	printf("### TEST HB SPA\n");
	printf("#############################################################\n");

#define DATA_LENGTH 10
#define FAKE_DATA_LENGTH 100
	SSL s;
	struct ssl3_state_st *ps3;
	ps3 = malloc(sizeof(SSL3_STATE));
	if (ps3 == NULL)
		return 0;
	s.s3 = ps3;
	unsigned char *prrec_data;
	prrec_data = malloc(DATA_LENGTH + 1 + 2 + 16);
	if (prrec_data == NULL)
		return 0;
	s.s3->rrec.data = prrec_data;
	unsigned char *p = (unsigned char *)s.s3->rrec.data;	// 2 octets
	*p++ = TLS1_HB_REQUEST;
	unsigned int payload = FAKE_DATA_LENGTH;
	s2n(payload, p);

	// Initialise la valeur des data à 0
	memset(p, 0, DATA_LENGTH);
	p += DATA_LENGTH;

	// PADDING
	memset(p, 1, 16);
	s.msg_callback = NULL;
	s.tlsext_hb_seq = 0;
	tls1_process_heartbeat(&s);
	free(s.s3->rrec.data);
	free(s.s3);
	return 0;
}
