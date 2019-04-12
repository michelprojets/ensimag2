/* ------------------------------------------------------------ *
 * file:        sslconnect.c                                    *
 * purpose:     Example code for building a SSL connection and  *
 *              retrieving the server certificate               *
 * author:      06/12/2012 Frank4DD                             *
 *                                                              *
 * gcc -o website_access website_access.c -lssl -lcrypto        *
 * try                                                          *
 * valgrind --leak-check=full website_access https://www.hp.com *
 * ------------------------------------------------------------ */

#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netdb.h>
#include <resolv.h>
#include <errno.h>
#include <endian.h>

#include <openssl/bio.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/pem.h>
#include <openssl/x509.h>
#include <openssl/x509_vfy.h>

#define RESPONSE_LEN 10 * 1024
#define CHUNK_SIZE 2048
#define BUFF_SIZE 256
#define HTTP_GET_MESSAGE "GET %s HTTP/1.1\r\nHost: %s\r\nUser-Agent: Mozilla/5.0 (X11; Linux x86_64; rv:10.0.1) Gecko/20100101 Firefox/10.0.1\r\nAccept: image/png,image/*;q=0.8,*/*;q=0.5\r\nAccept-Language: en-gb,en;q=0.5\r\nAccept-Encoding: gzip, deflate\r\nDNT: 1\r\nConnection: keep-alive\r\n\r\n"
#define INSTALL_FILEPATH "/tmp/devicemiddleware.deb"

static int hostname_to_ip(char * hostname , char* ip)
{
    struct hostent *he;
    struct in_addr **addr_list;
    int i;

    if ( (he = gethostbyname( hostname ) ) == NULL) 
    {
        printf("gethostbyname error!\n");
        return -1;
    }

    addr_list = (struct in_addr **) he->h_addr_list;

    for(i = 0; addr_list[i] != NULL; i++) 
    {
        strncpy(ip , inet_ntoa(*addr_list[i]), strlen(inet_ntoa(*addr_list[i])) );
        return 0;
    }
    
    return -1;
}

static int DownloadURLFile(char *host, char *path, int port)
{
    FILE *file = NULL;
    struct sockaddr_in server;
    int socket_desc;
    int header_len = 0;
    int total_len = 0;
    int received_len;
    int file_len;
    int header_end;
    char *p;
    char message[CHUNK_SIZE] = {0};
    char http_header[CHUNK_SIZE*2] = {0};
    char server_reply[RESPONSE_LEN] = {0};
    char ip[32];
    
    BIO *certbio = NULL;
    BIO *outbio = NULL;
    X509 *cert = NULL;
    X509_NAME *certname = NULL;
    const SSL_METHOD *method;
    SSL_CTX *ctx;
    SSL *ssl;

    OpenSSL_add_all_algorithms();
    ERR_load_BIO_strings();
    ERR_load_crypto_strings();
    SSL_load_error_strings();
    
    /* ---------------------------------------------------------- *
     * Create the Input/Output BIO's.                             *
     * ---------------------------------------------------------- */
    certbio = BIO_new(BIO_s_file());
    outbio = BIO_new_fp(stdout, BIO_NOCLOSE);
    
    /* ---------------------------------------------------------- *
     * initialize SSL library and register algorithms             *
     * ---------------------------------------------------------- */
    if(SSL_library_init() < 0)
        BIO_printf(outbio, "Could not initialize the OpenSSL library !\n");
    
    /* ---------------------------------------------------------- *
     * Set SSLv2 client hello, also announce SSLv3 and TLSv1 *
     * ---------------------------------------------------------- */
    method = SSLv23_client_method();
    
    /* ---------------------------------------------------------- *
     * Try to create a new SSL context *
     * ---------------------------------------------------------- */
    if ( (ctx = SSL_CTX_new(method)) == NULL)
        BIO_printf(outbio, "Unable to create a new SSL context structure.\n");
    
    /* ---------------------------------------------------------- *
     * Disabling SSLv2 will leave v3 and TSLv1 for negotiation    *
     * ---------------------------------------------------------- */
    SSL_CTX_set_options(ctx, SSL_OP_NO_SSLv2);
    
    /* ---------------------------------------------------------- *
     * Create new SSL connection state object *
     * ---------------------------------------------------------- */
    ssl = SSL_new(ctx);
    
    // Create socket
    socket_desc = socket(AF_INET , SOCK_STREAM , 0);
    if (socket_desc == -1) {
        printf("Could not create socket");
        return -1;
    }

    if(hostname_to_ip(host, ip)) return -1;
    server.sin_addr.s_addr = inet_addr(ip);
    server.sin_family = AF_INET;
    server.sin_port = htons( port );
    
    // Connect to remote server
    printf(">>>>>>>>>> connect start\n");
    if (connect(socket_desc , (struct sockaddr *)&server , sizeof(server)) < 0) {
        printf("connect error");
        return -1;
    }
    printf(">>>>>>>>>> connect end\n");
    
    /* ---------------------------------------------------------- *
     * Attach the SSL session to the socket descriptor *
     * ---------------------------------------------------------- */
    SSL_set_fd(ssl, socket_desc);

    /* ---------------------------------------------------------- *
     * Try to SSL-connect here, returns 1 for success *
     * ---------------------------------------------------------- */
    if ( SSL_connect(ssl) != 1 )
        BIO_printf(outbio, "Error: Could not build a SSL session to: %s.\n", ip);
    else
        BIO_printf(outbio, "Successfully enabled SSL/TLS session to: %s.\n", ip);
    
    /* ---------------------------------------------------------- *
     * Get the remote certificate into the X509 structure *
     * ---------------------------------------------------------- */
    cert = SSL_get_peer_certificate(ssl);
    if (cert == NULL)
        BIO_printf(outbio, "Error: Could not get a certificate from: %s.\n", ip);
    else
        BIO_printf(outbio, "Retrieved the server's certificate from: %s.\n", ip);
    
    /* ---------------------------------------------------------- *
     * extract various certificate information *
     * -----------------------------------------------------------*/
    certname = X509_NAME_new();
    certname = X509_get_subject_name(cert);
    
    /* ---------------------------------------------------------- *
     * display the cert subject here *
     * -----------------------------------------------------------*/
    BIO_printf(outbio, "Displaying the certificate subject data:\n");
    X509_NAME_print_ex(outbio, certname, 0, 0);
    BIO_printf(outbio, "\n");
    
    // Send request
    snprintf(message, CHUNK_SIZE, HTTP_GET_MESSAGE, path, host);
    printf("message=\n%s\n========================\n",message);
    if( SSL_write(ssl, message, strlen(message)) < 0) {
        printf("Send failed");
        return -1;
    }

    remove(INSTALL_FILEPATH);
    file = fopen(INSTALL_FILEPATH, "ab");
    if(file == NULL) {
        printf("File could not opened");
        return -1;
    }
    // Download header
    memset(message, 0, CHUNK_SIZE);
    while(1)
    {
        received_len = SSL_read(ssl , message, CHUNK_SIZE - 1);
        
        if( received_len < 0 ){
            printf("recv failed");
            break;
        }
        
        if( header_len + received_len > CHUNK_SIZE*2) {
            printf("header buffer overflow\n");
            return -1;
        }
        memcpy( &http_header[header_len], message, received_len);
        header_len += received_len;
        p = strstr(http_header, "\r\n\r\n");
        if( p != NULL ) {
            break;
        }
    }
    printf("header received complete.\n"
           "=====================================\n"
           "%s\n"
           "=====================================\n",
           http_header);

    if(strstr(http_header, "404 Not Found") != NULL ) {
        printf("Firmware File Not Found\n");
        return -1;
    }
    header_end = p - http_header + 4;
    p = strstr(http_header, "Content-Length");
    if( p == NULL ) {
        printf("ERROR : Empty Content-Length\n");
        return -1;
    }
    
    p = strtok(strstr(http_header, "Content-Length"), " :\r\n");
    p = strtok(NULL," :\r\n");
    file_len = atoi(p);
    fwrite(&http_header[header_end], (header_len - header_end), 1, file);
    file_len -= (header_len - header_end);
    
    // Download Content
    while (1)
    {
        received_len = SSL_read(ssl, server_reply, sizeof(server_reply));
        if( received_len < 0 ){
            break;
        }
        if( total_len + received_len > file_len ) {
            received_len = file_len - total_len;
        }
        total_len += received_len;
        fwrite(server_reply, received_len, 1, file);
        if( total_len >= file_len ){
            break;
        } 
    }

    printf("filesize: <%d>\nreceived complete!!\n", total_len + (header_len - header_end));
    fclose(file);
    SSL_free(ssl);
    close(socket_desc);
    X509_free(cert);
    SSL_CTX_free(ctx);
    return 0;
}

static void url_to_host(char url_str[], char hostname[], int hostname_s, int *port)
{
    char proto[6] = "";
    /* ---------------------------------------------------------- *
     * Remove the final / from url_str, if there is one           *
     * ---------------------------------------------------------- */
    if(url_str[strlen(url_str)] == '/')
        url_str[strlen(url_str)] = '\0';

    /* ---------------------------------------------------------- *
     * the first : ends the protocol string, i.e. http            *
     * ---------------------------------------------------------- */
    strncpy(proto, url_str, (strchr(url_str, ':')-url_str));
    
    /* ---------------------------------------------------------- *
     * the hostname starts after the "://" part                   *
     * ---------------------------------------------------------- */
    const char *name_position = strstr(url_str, "://");
    if (name_position != NULL)
    {
        name_position += 3;
        const char *port_position = strrchr(name_position, ':');
        if ((port_position != NULL) && (port_position > name_position))
        {
            int name_length = port_position - name_position;
            if (name_length < hostname_s)
                hostname_s = name_length;
            *port = atoi(port_position+1);
        }
        strncpy(hostname, name_position, hostname_s);
    }
}

/* ---------------------------------------------------------- *
 * First we need to make a standard TCP socket connection.    *
 * create_socket() creates a socket & TCP-connects to server. *
 * ---------------------------------------------------------- */

char dest_url[256] = "https://www.hp.com";

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage %s <website>\n", argv[0]);
        fprintf(stderr, "<website> : https://www.hp.com for example\n");
        return 1;
    }
    else
    {
        int port = 443; /* default port */
        char hostname[256] = "";
        snprintf(dest_url, sizeof(dest_url), "%s", argv[1]);
        url_to_host(dest_url, hostname, sizeof(hostname), &port);
        DownloadURLFile(hostname, "", port);
    }
    return(0);
}
