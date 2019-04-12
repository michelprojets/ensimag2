
/* gcc -o symmetric_cipher symmetric_cipher.c -lssl -lcrypto */

#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <openssl/evp.h>
#include </usr/include/openssl/rand.h>
#include </usr/include/openssl/err.h>


void fatal_error() { abort(); }

void rc4_test(unsigned char *key, unsigned char* src, int src_len, unsigned char *out_buf, int *out_len)
{
    int ret;
    int len;
    EVP_CIPHER_CTX ctx;
    EVP_CIPHER_CTX_init(&ctx);

    ret = EVP_CipherInit_ex(&ctx, EVP_des_ecb(), NULL, key, NULL, 1);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherUpdate(&ctx, out_buf, &out_len, src, src_len);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherFinal(&ctx, out_buf + *out_len, len);
    if (ret != 1) fatal_error();

    *out_len += len;
    
    EVP_CIPHER_CTX_cleanup(&ctx);
}

void rc4_test_fix_1(unsigned char *key, unsigned char* src, int src_len, unsigned char *out_buf, int *out_len)
{
    int ret;
    int len;
    EVP_CIPHER_CTX ctx;
    EVP_CIPHER_CTX_init(&ctx);
    
    ret = EVP_CipherInit_ex(&ctx, EVP_aes_128_cbc(), NULL, key, NULL, 1);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherUpdate(&ctx, out_buf, out_len, src, src_len);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherFinal(&ctx, out_buf + *out_len, &len);
    if (ret != 1) fatal_error();
    
    *out_len += len;
    
    EVP_CIPHER_CTX_cleanup(&ctx);
}

void rc4_test_fix_2(unsigned char *key, unsigned char* src, int src_len, unsigned char *out_buf, int *out_len)
{
    int ret;
    int len;
    
    EVP_CIPHER_CTX ctx;
    EVP_CIPHER_CTX_init(&ctx);
    
    ret = EVP_CipherInit_ex(&ctx, EVP_aes_128_cbc(), NULL, key, NULL, 1);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherUpdate(&ctx, out_buf, out_len, src, src_len);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherFinal(&ctx, out_buf + *out_len, &len);
    if (ret != 1) fatal_error();
    *out_len += len;
    
    EVP_CIPHER_CTX_cleanup(&ctx);
}

void rc4_test_fix_3(unsigned char *key, unsigned char* src, int src_len, unsigned char *out_buf, int *out_len)
{
    int ret;
    int len;
    EVP_CIPHER_CTX ctx;
    unsigned char iv[EVP_MAX_IV_LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,12, 13, 14, 15, 16};
    
    EVP_CIPHER_CTX_init(&ctx);
    
    ret = EVP_CipherInit_ex(&ctx, EVP_aes_128_cbc(), NULL, key, iv, 1);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherUpdate(&ctx, out_buf, out_len, src, src_len);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherFinal(&ctx, out_buf + *out_len, &len);
    if (ret != 1) fatal_error();
    *out_len += len;

    EVP_CIPHER_CTX_cleanup(&ctx);
}

void rc4_test_fix_4(unsigned char *key, unsigned char* src, int src_len, unsigned char *out_buf, int *out_len)
{
    int ret;
    int len;
    EVP_CIPHER_CTX ctx;
    unsigned char iv[EVP_MAX_IV_LENGTH] = {(unsigned char)((~getpid())&(time(NULL)^rand())),
                                           (unsigned char)((~getpid())&(time(NULL)|rand())),
                                           (rand()%26+97),
                                           'A',
                                           'a'};
    EVP_CIPHER_CTX_init(&ctx);
    
    ret = EVP_CipherInit_ex(&ctx, EVP_aes_128_cbc(), NULL, key, iv, 1);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherUpdate(&ctx, out_buf, out_len, src, src_len);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherFinal(&ctx, out_buf + *out_len, &len);
    if (ret != 1) fatal_error();
    *out_len += len;
    
    EVP_CIPHER_CTX_cleanup(&ctx);
}

void rc4_test_fix_5(unsigned char *key, unsigned char* src, int src_len, unsigned char *out_buf, int *out_len)
{
    int ret;
    int len;
    unsigned char iv[EVP_MAX_IV_LENGTH];

    EVP_CIPHER_CTX ctx;
    EVP_CIPHER_CTX_init(&ctx);
    
    ret = RAND_bytes(iv, EVP_MAX_IV_LENGTH);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherInit_ex(&ctx, EVP_aes_128_cbc(), NULL, key, iv, 1);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherUpdate(&ctx, out_buf, out_len, src, src_len);
    if (ret != 1) fatal_error();
    
    ret = EVP_CipherFinal(&ctx, out_buf + *out_len, &len);
    if (ret != 1) fatal_error();
    *out_len += len;
    
    EVP_CIPHER_CTX_cleanup(&ctx);
}

/*=====================================  Real Example ========================*/
int encrypt_decrypt(unsigned char *inputtext, int inputtext_len,
                    unsigned char *key, unsigned char *iv,
                    unsigned char *outputtext, int encrypt)
{
    EVP_CIPHER_CTX *ctx; 
    int len;
    int outputtext_len;

    /* Create and initialise the context */
    if(!(ctx = EVP_CIPHER_CTX_new())) fatal_error();

    /* Initialise the encryption operation.
     * In this example we are using 256 bit AES (i.e. a 256 bit key). The
     * IV size for *most* modes is the same as the block size. For AES this
     * is 128 bits */
    if(1 != EVP_CipherInit_ex(ctx, EVP_aes_256_ecb(), NULL, key, iv, encrypt))
        fatal_error();

    /* Provide the message to be encrypted, and obtain the encrypted output.
     * EVP_EncryptUpdate can be called multiple times if necessary
     */
    if(1 != EVP_CipherUpdate(ctx, outputtext, &len, inputtext, inputtext_len))
        fatal_error();
    outputtext_len = len;
    
    /* Finalise the encryption. Further outputtext bytes may be written at
     * this stage.
     */
    if(1 != EVP_CipherFinal(ctx, outputtext + len, &len)) fatal_error();
    outputtext_len += len;

    /* Clean up */
    EVP_CIPHER_CTX_free(ctx);
    
    return outputtext_len;
}

int encrypt(unsigned char *plaintext, int plaintext_len,
            unsigned char *key, unsigned char *iv,
            unsigned char *ciphertext)
{
    return encrypt_decrypt(plaintext,plaintext_len,key,iv,ciphertext,1);
}

int decrypt(unsigned char *ciphertext, int ciphertext_len,
            unsigned char *key, unsigned char *iv,
            unsigned char *plaintext)
{
    return encrypt_decrypt(ciphertext,ciphertext_len, key, iv, plaintext, 0);
}

int main (void)
{
    /* hard-coded key and iv */
    unsigned char *key = (unsigned char *)"01234567890123456789012345678901";
    unsigned char *iv = (unsigned char *)"01234567890123456";

    /* Message to be encrypted */
    unsigned char *plaintext = (unsigned char *)"The quick brown fox jumps over the lazard";

    /* Buffer for ciphertext. Ensure the buffer is long enough for the
     * ciphertext which may be longer than the plaintext.
     */
    unsigned char ciphertext[256];
    unsigned char decryptedtext[256];
    int decryptedtext_len, ciphertext_len;

    /* Initialise the library */
    ERR_load_crypto_strings();
    OpenSSL_add_all_algorithms();

    /* Encrypt the plaintext */
    ciphertext_len = encrypt (plaintext, strlen ((char *)plaintext), key, iv, ciphertext);

    /* Do something useful with the ciphertext here */
    printf("Ciphertext is:\n");
    BIO_dump_fp (stdout, (const char *)ciphertext, ciphertext_len);
    
    /* Decrypt the ciphertext */
    decryptedtext_len = decrypt(ciphertext, ciphertext_len, key, iv, decryptedtext);
    
    /* Add a NULL terminator. We are expecting printable text */
    decryptedtext[decryptedtext_len] = '\0';
    
    /* Show the decrypted text */
    printf("Decrypted text is:\n");
    printf("%s\n", decryptedtext);
    
    /* Clean up */
    EVP_cleanup();
    ERR_free_strings();
    
    return 0;
}
