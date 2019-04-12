#define __polyspace_stdout /* variable */
/* fron var stdout */;
typedef signed int __PST__SINT32;
typedef signed char __PST__SINT8;
typedef __PST__SINT8 *__PST__g__12;
typedef struct _IO_marker *__PST__g__19;
typedef struct _IO_FILE *__PST__g__20;
typedef unsigned short __PST__UINT16;
typedef __PST__SINT8 __PST__g__21[1];
typedef void __PST__VOID;
typedef __PST__VOID *__PST__g__11;
typedef signed long long __PST__SINT64;
typedef unsigned int __PST__UINT32;
typedef __PST__SINT8 __PST__g__22[40];
struct _IO_FILE
  {
    __PST__SINT32 _flags;
    __PST__g__12 _IO_read_ptr;
    __PST__g__12 _IO_read_end;
    __PST__g__12 _IO_read_base;
    __PST__g__12 _IO_write_base;
    __PST__g__12 _IO_write_ptr;
    __PST__g__12 _IO_write_end;
    __PST__g__12 _IO_buf_base;
    __PST__g__12 _IO_buf_end;
    __PST__g__12 _IO_save_base;
    __PST__g__12 _IO_backup_base;
    __PST__g__12 _IO_save_end;
    __PST__g__19 _markers;
    __PST__g__20 _chain;
    __PST__SINT32 _fileno;
    __PST__SINT32 _flags2;
    __PST__SINT32 _old_offset;
    __PST__UINT16 _cur_column;
    __PST__SINT8 _vtable_offset;
    __PST__g__21 _shortbuf;
    __PST__g__11 _lock;
    __PST__SINT64 _offset;
    __PST__g__11 __pad1;
    __PST__g__11 __pad2;
    __PST__g__11 __pad3;
    __PST__g__11 __pad4;
    __PST__UINT32 __pad5;
    __PST__SINT32 _mode;
    __PST__g__22 _unused2;
  };
typedef struct _IO_FILE FILE; /* Typedef from user source */
#define PST_FILE_SIZE 148
#define __polyspace_strlen /* function */
#ifndef __polyspace_strlen_ret_t_typedef
#define __polyspace_strlen_ret_t_typedef typedef unsigned int __polyspace_strlen_ret_t;
#endif /* __polyspace_strlen_ret_t_typedef */
#ifndef __polyspace_strlen_return
#define __polyspace_strlen_return(__x) return (__polyspace_strlen_ret_t)(__x)
#endif /* __polyspace_strlen_return */
#define __polyspace_strlen_nb_args 1
#ifndef __polyspace_strlen_arg0_t_typedef
#define __polyspace_strlen_arg0_t_typedef typedef char const *__polyspace_strlen_arg0_t;
#endif /* __polyspace_strlen_arg0_t_typedef */
#define __polyspace_strlen_known_type

#define __polyspace_rand /* function */
#ifndef __polyspace_rand_ret_t_typedef
#define __polyspace_rand_ret_t_typedef typedef int __polyspace_rand_ret_t;
#endif /* __polyspace_rand_ret_t_typedef */
#ifndef __polyspace_rand_return
#define __polyspace_rand_return(__x) return (__polyspace_rand_ret_t)(__x)
#endif /* __polyspace_rand_return */
#define __polyspace_rand_nb_args 0
#define __polyspace_rand_known_type

#define __polyspace_abort /* function */
#ifndef __polyspace_abort_ret_t_typedef
#define __polyspace_abort_ret_t_typedef typedef void __polyspace_abort_ret_t;
#endif /* __polyspace_abort_ret_t_typedef */
#ifndef __polyspace_abort_return
#define __polyspace_abort_return(__x) do { (void)(__x); return; } while(0) 
#endif /* __polyspace_abort_return */
#define __polyspace_abort_nb_args 0
#define __polyspace_abort_known_type

#define __polyspace_time /* function */
typedef __PST__SINT32 time_t; /* Typedef from user source */
#define PST_time_t_SIZE 4
#ifndef __polyspace_time_ret_t_typedef
#define __polyspace_time_ret_t_typedef typedef int __polyspace_time_ret_t;
#endif /* __polyspace_time_ret_t_typedef */
#ifndef __polyspace_time_return
#define __polyspace_time_return(__x) return (__polyspace_time_ret_t)(__x)
#endif /* __polyspace_time_return */
#define __polyspace_time_nb_args 1
#ifndef __polyspace_time_arg0_t_typedef
#define __polyspace_time_arg0_t_typedef typedef int *__polyspace_time_arg0_t;
#endif /* __polyspace_time_arg0_t_typedef */
#define __polyspace_time_known_type

#define __polyspace_printf /* function */
#define __polyspace_printf_has_varargs
#ifndef __polyspace_printf_ret_t_typedef
#define __polyspace_printf_ret_t_typedef typedef int __polyspace_printf_ret_t;
#endif /* __polyspace_printf_ret_t_typedef */
#ifndef __polyspace_printf_return
#define __polyspace_printf_return(__x) return (__polyspace_printf_ret_t)(__x)
#endif /* __polyspace_printf_return */
#define __polyspace_printf_nb_args 1
#ifndef __polyspace_printf_arg0_t_typedef
#define __polyspace_printf_arg0_t_typedef typedef char const *__polyspace_printf_arg0_t;
#endif /* __polyspace_printf_arg0_t_typedef */
#define __polyspace_printf_known_type

#define __polyspace_getpid /* function */
#ifndef __polyspace_getpid_ret_t_typedef
#define __polyspace_getpid_ret_t_typedef typedef int __polyspace_getpid_ret_t;
#endif /* __polyspace_getpid_ret_t_typedef */
#ifndef __polyspace_getpid_return
#define __polyspace_getpid_return(__x) return (__polyspace_getpid_ret_t)(__x)
#endif /* __polyspace_getpid_return */
#define __polyspace_getpid_nb_args 0
#define __polyspace_getpid_known_type

#define __polyspace_BIO_dump_fp /* function */
#ifndef __polyspace_BIO_dump_fp_ret_t_typedef
#define __polyspace_BIO_dump_fp_ret_t_typedef typedef int __polyspace_BIO_dump_fp_ret_t;
#endif /* __polyspace_BIO_dump_fp_ret_t_typedef */
#ifndef __polyspace_BIO_dump_fp_return
#define __polyspace_BIO_dump_fp_return(__x) return (__polyspace_BIO_dump_fp_ret_t)(__x)
#endif /* __polyspace_BIO_dump_fp_return */
#define __polyspace_BIO_dump_fp_nb_args 3
#ifndef __polyspace_BIO_dump_fp_arg0_t_typedef
#define __polyspace_BIO_dump_fp_arg0_t_typedef typedef FILE *__polyspace_BIO_dump_fp_arg0_t;
#endif /* __polyspace_BIO_dump_fp_arg0_t_typedef */
#ifndef __polyspace_BIO_dump_fp_arg1_t_typedef
#define __polyspace_BIO_dump_fp_arg1_t_typedef typedef char const *__polyspace_BIO_dump_fp_arg1_t;
#endif /* __polyspace_BIO_dump_fp_arg1_t_typedef */
#ifndef __polyspace_BIO_dump_fp_arg2_t_typedef
#define __polyspace_BIO_dump_fp_arg2_t_typedef typedef int __polyspace_BIO_dump_fp_arg2_t;
#endif /* __polyspace_BIO_dump_fp_arg2_t_typedef */
#define __polyspace_BIO_dump_fp_known_type

#define __polyspace_EVP_CipherInit_ex /* function */
#ifndef __polyspace_EVP_CipherInit_ex_ret_t_typedef
#define __polyspace_EVP_CipherInit_ex_ret_t_typedef typedef int __polyspace_EVP_CipherInit_ex_ret_t;
#endif /* __polyspace_EVP_CipherInit_ex_ret_t_typedef */
#ifndef __polyspace_EVP_CipherInit_ex_return
#define __polyspace_EVP_CipherInit_ex_return(__x) return (__polyspace_EVP_CipherInit_ex_ret_t)(__x)
#endif /* __polyspace_EVP_CipherInit_ex_return */
#define __polyspace_EVP_CipherInit_ex_nb_args 6
#ifndef __polyspace_EVP_CipherInit_ex_arg0_t_typedef
#define __polyspace_EVP_CipherInit_ex_arg0_t_typedef typedef EVP_CIPHER_CTX *__polyspace_EVP_CipherInit_ex_arg0_t;
#endif /* __polyspace_EVP_CipherInit_ex_arg0_t_typedef */
#ifndef __polyspace_EVP_CipherInit_ex_arg1_t_typedef
#define __polyspace_EVP_CipherInit_ex_arg1_t_typedef typedef EVP_CIPHER const *__polyspace_EVP_CipherInit_ex_arg1_t;
#endif /* __polyspace_EVP_CipherInit_ex_arg1_t_typedef */
#ifndef __polyspace_EVP_CipherInit_ex_arg2_t_typedef
#define __polyspace_EVP_CipherInit_ex_arg2_t_typedef typedef ENGINE *__polyspace_EVP_CipherInit_ex_arg2_t;
#endif /* __polyspace_EVP_CipherInit_ex_arg2_t_typedef */
#ifndef __polyspace_EVP_CipherInit_ex_arg3_t_typedef
#define __polyspace_EVP_CipherInit_ex_arg3_t_typedef typedef unsigned char const *__polyspace_EVP_CipherInit_ex_arg3_t;
#endif /* __polyspace_EVP_CipherInit_ex_arg3_t_typedef */
#ifndef __polyspace_EVP_CipherInit_ex_arg4_t_typedef
#define __polyspace_EVP_CipherInit_ex_arg4_t_typedef typedef unsigned char const *__polyspace_EVP_CipherInit_ex_arg4_t;
#endif /* __polyspace_EVP_CipherInit_ex_arg4_t_typedef */
#ifndef __polyspace_EVP_CipherInit_ex_arg5_t_typedef
#define __polyspace_EVP_CipherInit_ex_arg5_t_typedef typedef int __polyspace_EVP_CipherInit_ex_arg5_t;
#endif /* __polyspace_EVP_CipherInit_ex_arg5_t_typedef */
#define __polyspace_EVP_CipherInit_ex_known_type

#define __polyspace_EVP_CipherUpdate /* function */
#ifndef __polyspace_EVP_CipherUpdate_ret_t_typedef
#define __polyspace_EVP_CipherUpdate_ret_t_typedef typedef int __polyspace_EVP_CipherUpdate_ret_t;
#endif /* __polyspace_EVP_CipherUpdate_ret_t_typedef */
#ifndef __polyspace_EVP_CipherUpdate_return
#define __polyspace_EVP_CipherUpdate_return(__x) return (__polyspace_EVP_CipherUpdate_ret_t)(__x)
#endif /* __polyspace_EVP_CipherUpdate_return */
#define __polyspace_EVP_CipherUpdate_nb_args 5
#ifndef __polyspace_EVP_CipherUpdate_arg0_t_typedef
#define __polyspace_EVP_CipherUpdate_arg0_t_typedef typedef EVP_CIPHER_CTX *__polyspace_EVP_CipherUpdate_arg0_t;
#endif /* __polyspace_EVP_CipherUpdate_arg0_t_typedef */
#ifndef __polyspace_EVP_CipherUpdate_arg1_t_typedef
#define __polyspace_EVP_CipherUpdate_arg1_t_typedef typedef unsigned char *__polyspace_EVP_CipherUpdate_arg1_t;
#endif /* __polyspace_EVP_CipherUpdate_arg1_t_typedef */
#ifndef __polyspace_EVP_CipherUpdate_arg2_t_typedef
#define __polyspace_EVP_CipherUpdate_arg2_t_typedef typedef int *__polyspace_EVP_CipherUpdate_arg2_t;
#endif /* __polyspace_EVP_CipherUpdate_arg2_t_typedef */
#ifndef __polyspace_EVP_CipherUpdate_arg3_t_typedef
#define __polyspace_EVP_CipherUpdate_arg3_t_typedef typedef unsigned char const *__polyspace_EVP_CipherUpdate_arg3_t;
#endif /* __polyspace_EVP_CipherUpdate_arg3_t_typedef */
#ifndef __polyspace_EVP_CipherUpdate_arg4_t_typedef
#define __polyspace_EVP_CipherUpdate_arg4_t_typedef typedef int __polyspace_EVP_CipherUpdate_arg4_t;
#endif /* __polyspace_EVP_CipherUpdate_arg4_t_typedef */
#define __polyspace_EVP_CipherUpdate_known_type

#define __polyspace_EVP_CipherFinal /* function */
#ifndef __polyspace_EVP_CipherFinal_ret_t_typedef
#define __polyspace_EVP_CipherFinal_ret_t_typedef typedef int __polyspace_EVP_CipherFinal_ret_t;
#endif /* __polyspace_EVP_CipherFinal_ret_t_typedef */
#ifndef __polyspace_EVP_CipherFinal_return
#define __polyspace_EVP_CipherFinal_return(__x) return (__polyspace_EVP_CipherFinal_ret_t)(__x)
#endif /* __polyspace_EVP_CipherFinal_return */
#define __polyspace_EVP_CipherFinal_nb_args 3
#ifndef __polyspace_EVP_CipherFinal_arg0_t_typedef
#define __polyspace_EVP_CipherFinal_arg0_t_typedef typedef EVP_CIPHER_CTX *__polyspace_EVP_CipherFinal_arg0_t;
#endif /* __polyspace_EVP_CipherFinal_arg0_t_typedef */
#ifndef __polyspace_EVP_CipherFinal_arg1_t_typedef
#define __polyspace_EVP_CipherFinal_arg1_t_typedef typedef unsigned char *__polyspace_EVP_CipherFinal_arg1_t;
#endif /* __polyspace_EVP_CipherFinal_arg1_t_typedef */
#ifndef __polyspace_EVP_CipherFinal_arg2_t_typedef
#define __polyspace_EVP_CipherFinal_arg2_t_typedef typedef int *__polyspace_EVP_CipherFinal_arg2_t;
#endif /* __polyspace_EVP_CipherFinal_arg2_t_typedef */
#define __polyspace_EVP_CipherFinal_known_type

#define __polyspace_EVP_CIPHER_CTX_init /* function */
#ifndef __polyspace_EVP_CIPHER_CTX_init_ret_t_typedef
#define __polyspace_EVP_CIPHER_CTX_init_ret_t_typedef typedef void __polyspace_EVP_CIPHER_CTX_init_ret_t;
#endif /* __polyspace_EVP_CIPHER_CTX_init_ret_t_typedef */
#ifndef __polyspace_EVP_CIPHER_CTX_init_return
#define __polyspace_EVP_CIPHER_CTX_init_return(__x) do { (void)(__x); return; } while(0) 
#endif /* __polyspace_EVP_CIPHER_CTX_init_return */
#define __polyspace_EVP_CIPHER_CTX_init_nb_args 1
#ifndef __polyspace_EVP_CIPHER_CTX_init_arg0_t_typedef
#define __polyspace_EVP_CIPHER_CTX_init_arg0_t_typedef typedef EVP_CIPHER_CTX *__polyspace_EVP_CIPHER_CTX_init_arg0_t;
#endif /* __polyspace_EVP_CIPHER_CTX_init_arg0_t_typedef */
#define __polyspace_EVP_CIPHER_CTX_init_known_type

#define __polyspace_EVP_CIPHER_CTX_cleanup /* function */
#ifndef __polyspace_EVP_CIPHER_CTX_cleanup_ret_t_typedef
#define __polyspace_EVP_CIPHER_CTX_cleanup_ret_t_typedef typedef int __polyspace_EVP_CIPHER_CTX_cleanup_ret_t;
#endif /* __polyspace_EVP_CIPHER_CTX_cleanup_ret_t_typedef */
#ifndef __polyspace_EVP_CIPHER_CTX_cleanup_return
#define __polyspace_EVP_CIPHER_CTX_cleanup_return(__x) return (__polyspace_EVP_CIPHER_CTX_cleanup_ret_t)(__x)
#endif /* __polyspace_EVP_CIPHER_CTX_cleanup_return */
#define __polyspace_EVP_CIPHER_CTX_cleanup_nb_args 1
#ifndef __polyspace_EVP_CIPHER_CTX_cleanup_arg0_t_typedef
#define __polyspace_EVP_CIPHER_CTX_cleanup_arg0_t_typedef typedef EVP_CIPHER_CTX *__polyspace_EVP_CIPHER_CTX_cleanup_arg0_t;
#endif /* __polyspace_EVP_CIPHER_CTX_cleanup_arg0_t_typedef */
#define __polyspace_EVP_CIPHER_CTX_cleanup_known_type

#define __polyspace_EVP_CIPHER_CTX_new /* function */
#ifndef __polyspace_EVP_CIPHER_CTX_new_ret_t_typedef
#define __polyspace_EVP_CIPHER_CTX_new_ret_t_typedef typedef EVP_CIPHER_CTX *__polyspace_EVP_CIPHER_CTX_new_ret_t;
#endif /* __polyspace_EVP_CIPHER_CTX_new_ret_t_typedef */
#ifndef __polyspace_EVP_CIPHER_CTX_new_return
#define __polyspace_EVP_CIPHER_CTX_new_return(__x) return (__polyspace_EVP_CIPHER_CTX_new_ret_t)(__x)
#endif /* __polyspace_EVP_CIPHER_CTX_new_return */
#define __polyspace_EVP_CIPHER_CTX_new_nb_args 0
#define __polyspace_EVP_CIPHER_CTX_new_known_type

#define __polyspace_EVP_CIPHER_CTX_free /* function */
#ifndef __polyspace_EVP_CIPHER_CTX_free_ret_t_typedef
#define __polyspace_EVP_CIPHER_CTX_free_ret_t_typedef typedef void __polyspace_EVP_CIPHER_CTX_free_ret_t;
#endif /* __polyspace_EVP_CIPHER_CTX_free_ret_t_typedef */
#ifndef __polyspace_EVP_CIPHER_CTX_free_return
#define __polyspace_EVP_CIPHER_CTX_free_return(__x) do { (void)(__x); return; } while(0) 
#endif /* __polyspace_EVP_CIPHER_CTX_free_return */
#define __polyspace_EVP_CIPHER_CTX_free_nb_args 1
#ifndef __polyspace_EVP_CIPHER_CTX_free_arg0_t_typedef
#define __polyspace_EVP_CIPHER_CTX_free_arg0_t_typedef typedef EVP_CIPHER_CTX *__polyspace_EVP_CIPHER_CTX_free_arg0_t;
#endif /* __polyspace_EVP_CIPHER_CTX_free_arg0_t_typedef */
#define __polyspace_EVP_CIPHER_CTX_free_known_type

#define __polyspace_EVP_des_ecb /* function */
#ifndef __polyspace_EVP_des_ecb_ret_t_typedef
#define __polyspace_EVP_des_ecb_ret_t_typedef typedef EVP_CIPHER const *__polyspace_EVP_des_ecb_ret_t;
#endif /* __polyspace_EVP_des_ecb_ret_t_typedef */
#ifndef __polyspace_EVP_des_ecb_return
#define __polyspace_EVP_des_ecb_return(__x) return (__polyspace_EVP_des_ecb_ret_t)(__x)
#endif /* __polyspace_EVP_des_ecb_return */
#define __polyspace_EVP_des_ecb_nb_args 0
#define __polyspace_EVP_des_ecb_known_type

#define __polyspace_EVP_aes_128_cbc /* function */
#ifndef __polyspace_EVP_aes_128_cbc_ret_t_typedef
#define __polyspace_EVP_aes_128_cbc_ret_t_typedef typedef EVP_CIPHER const *__polyspace_EVP_aes_128_cbc_ret_t;
#endif /* __polyspace_EVP_aes_128_cbc_ret_t_typedef */
#ifndef __polyspace_EVP_aes_128_cbc_return
#define __polyspace_EVP_aes_128_cbc_return(__x) return (__polyspace_EVP_aes_128_cbc_ret_t)(__x)
#endif /* __polyspace_EVP_aes_128_cbc_return */
#define __polyspace_EVP_aes_128_cbc_nb_args 0
#define __polyspace_EVP_aes_128_cbc_known_type

#define __polyspace_EVP_aes_256_ecb /* function */
#ifndef __polyspace_EVP_aes_256_ecb_ret_t_typedef
#define __polyspace_EVP_aes_256_ecb_ret_t_typedef typedef EVP_CIPHER const *__polyspace_EVP_aes_256_ecb_ret_t;
#endif /* __polyspace_EVP_aes_256_ecb_ret_t_typedef */
#ifndef __polyspace_EVP_aes_256_ecb_return
#define __polyspace_EVP_aes_256_ecb_return(__x) return (__polyspace_EVP_aes_256_ecb_ret_t)(__x)
#endif /* __polyspace_EVP_aes_256_ecb_return */
#define __polyspace_EVP_aes_256_ecb_nb_args 0
#define __polyspace_EVP_aes_256_ecb_known_type

#define __polyspace_OPENSSL_add_all_algorithms_noconf /* function */
#ifndef __polyspace_OPENSSL_add_all_algorithms_noconf_ret_t_typedef
#define __polyspace_OPENSSL_add_all_algorithms_noconf_ret_t_typedef typedef void __polyspace_OPENSSL_add_all_algorithms_noconf_ret_t;
#endif /* __polyspace_OPENSSL_add_all_algorithms_noconf_ret_t_typedef */
#ifndef __polyspace_OPENSSL_add_all_algorithms_noconf_return
#define __polyspace_OPENSSL_add_all_algorithms_noconf_return(__x) do { (void)(__x); return; } while(0) 
#endif /* __polyspace_OPENSSL_add_all_algorithms_noconf_return */
#define __polyspace_OPENSSL_add_all_algorithms_noconf_nb_args 0
#define __polyspace_OPENSSL_add_all_algorithms_noconf_known_type

#define __polyspace_EVP_cleanup /* function */
#ifndef __polyspace_EVP_cleanup_ret_t_typedef
#define __polyspace_EVP_cleanup_ret_t_typedef typedef void __polyspace_EVP_cleanup_ret_t;
#endif /* __polyspace_EVP_cleanup_ret_t_typedef */
#ifndef __polyspace_EVP_cleanup_return
#define __polyspace_EVP_cleanup_return(__x) do { (void)(__x); return; } while(0) 
#endif /* __polyspace_EVP_cleanup_return */
#define __polyspace_EVP_cleanup_nb_args 0
#define __polyspace_EVP_cleanup_known_type

#define __polyspace_RAND_bytes /* function */
#ifndef __polyspace_RAND_bytes_ret_t_typedef
#define __polyspace_RAND_bytes_ret_t_typedef typedef int __polyspace_RAND_bytes_ret_t;
#endif /* __polyspace_RAND_bytes_ret_t_typedef */
#ifndef __polyspace_RAND_bytes_return
#define __polyspace_RAND_bytes_return(__x) return (__polyspace_RAND_bytes_ret_t)(__x)
#endif /* __polyspace_RAND_bytes_return */
#define __polyspace_RAND_bytes_nb_args 2
#ifndef __polyspace_RAND_bytes_arg0_t_typedef
#define __polyspace_RAND_bytes_arg0_t_typedef typedef unsigned char *__polyspace_RAND_bytes_arg0_t;
#endif /* __polyspace_RAND_bytes_arg0_t_typedef */
#ifndef __polyspace_RAND_bytes_arg1_t_typedef
#define __polyspace_RAND_bytes_arg1_t_typedef typedef int __polyspace_RAND_bytes_arg1_t;
#endif /* __polyspace_RAND_bytes_arg1_t_typedef */
#define __polyspace_RAND_bytes_known_type

#define __polyspace_ERR_load_crypto_strings /* function */
#ifndef __polyspace_ERR_load_crypto_strings_ret_t_typedef
#define __polyspace_ERR_load_crypto_strings_ret_t_typedef typedef void __polyspace_ERR_load_crypto_strings_ret_t;
#endif /* __polyspace_ERR_load_crypto_strings_ret_t_typedef */
#ifndef __polyspace_ERR_load_crypto_strings_return
#define __polyspace_ERR_load_crypto_strings_return(__x) do { (void)(__x); return; } while(0) 
#endif /* __polyspace_ERR_load_crypto_strings_return */
#define __polyspace_ERR_load_crypto_strings_nb_args 0
#define __polyspace_ERR_load_crypto_strings_known_type

#define __polyspace_ERR_free_strings /* function */
#ifndef __polyspace_ERR_free_strings_ret_t_typedef
#define __polyspace_ERR_free_strings_ret_t_typedef typedef void __polyspace_ERR_free_strings_ret_t;
#endif /* __polyspace_ERR_free_strings_ret_t_typedef */
#ifndef __polyspace_ERR_free_strings_return
#define __polyspace_ERR_free_strings_return(__x) do { (void)(__x); return; } while(0) 
#endif /* __polyspace_ERR_free_strings_return */
#define __polyspace_ERR_free_strings_nb_args 0
#define __polyspace_ERR_free_strings_known_type

#undef PST_BUILTIN_TARGET_UCHAR_MAX
#define PST_BUILTIN_TARGET_UCHAR_MAX 255
#define NO_NEED_FUNDAMENTAL_TYPES /* To avoid including fundamental types in stddef.h */
#define __SIZE_TYPE__ unsigned int
#if !defined(__POLYSPACE_NEED_SIZE_T_DONE_) && !defined(_SIZE_T_DEFINED) && !defined(__SIZE_T_defined) && !defined(_size_t) && !defined(__SIZE_T)
#define __POLYSPACE_NEED_SIZE_T_DONE_
typedef unsigned int size_t; /*Customer defined*/ 
#define _SIZE_T_DEFINED
#define __size_t_defined
#define _SIZE_T
#define __SIZE_T
#define __SIZE_TYPE__ unsigned int
#endif /*__POLYSPACE_NEED_SIZE_T_*/
#define SEEK_CUR 1
#define SEEK_SET 0
#define SEEK_END 2
#define _IOLBF 1
#define _IONBF 2
#define BUFSIZ 8192
#define _IOFBF 0
#define L_tmpnam 20
#define RAND_MAX 2147483647
#define MAX_VARARGS 64
#define __PTRDIFF_TYPE__ int
#if !defined(__POLYSPACE_NEED_PTRDIFF_T_DONE_) && !defined(_PTRDIFF_T_DEFINED) && !defined(__PTRDIFF_T_defined) && !defined(_ptrdiff_t) && !defined(__PTRDIFF_T)
#define __POLYSPACE_NEED_PTRDIFF_T_DONE_
typedef int ptrdiff_t; /*Target defined*/ 
#define _PTRDIFF_T_DEFINED
#define __ptrdiff_t_defined
#define _PTRDIFF_T
#define __PTRDIFF_T
#define __PTRDIFF_TYPE__ int
#endif /*__POLYSPACE_NEED_PTRDIFF_T_*/
#ifndef __cplusplus
#define __WCHAR_TYPE__ unsigned int
#if !defined(__POLYSPACE_NEED_WCHAR_T_DONE_) && !defined(_WCHAR_T_DEFINED) && !defined(__WCHAR_T_defined) && !defined(_wchar_t) && !defined(__WCHAR_T)
#define __POLYSPACE_NEED_WCHAR_T_DONE_
typedef unsigned int wchar_t; /*Target defined*/ 
#define _WCHAR_T_DEFINED
#define __wchar_t_defined
#define _WCHAR_T
#define __WCHAR_T
#define __WCHAR_TYPE__ unsigned int
#endif /*__POLYSPACE_NEED_WCHAR_T_*/
#endif /*__cplusplus*/
#define __SSIZE_TYPE__ int
#if !defined(__POLYSPACE_NEED_SSIZE_T_DONE_) && !defined(_SSIZE_T_DEFINED) && !defined(__SSIZE_T_defined) && !defined(_ssize_t) && !defined(__SSIZE_T)
#define __POLYSPACE_NEED_SSIZE_T_DONE_
typedef int ssize_t; /*Target defined*/ 
#define _SSIZE_T_DEFINED
#define __ssize_t_defined
#define _SSIZE_T
#define __SSIZE_T
#define __SSIZE_TYPE__ int
#endif /*__POLYSPACE_NEED_SSIZE_T_*/
/*
 * Copyright 1999-2017 The MathWorks, Inc.
 */

/*
   Polyspace standard stubs.
   __polyspace__stdstubs.c

   Pragma POLYSPACE_POLYMORPHIC indicates that the function have no important
   access to global variables (neither syntactically nor by pointer).
   Such a declaration impacts the precision of the Verifier.
     In fact, we can say that the following functions are polymorphic:
       - the pure functions (POLYSPACE_PURE or functions that only deal will
         basic types)
       - the functions that only read pointers (e.g const pointers)
     The following functions cannot be declared polymorphic:
       - the functions that return a pointer
       - the functions that write in pointers
       - the functions that syntactically access to a global variable.

   We don't model the writes of I/O functions to __iob (for O.S. Solaris) as
   it would create a lot of side-effect and is not important in the RTE analysis

   We always initialize the randoms, although they are volatile. It may allows to
   be a bit more precise on NIVs.

   Defines that this file may understand:
   - all standard stubs may be deactivated with -D POLYSPACE_NO_STANDARD_STUBS
   - the stubs for extensions to ANSI C standard may be deactivated with
     -D POLYSPACE_STRICT_ANSI_STANDARD_STUBS
   - all writes to stream (FILE) may be deactivated with -D POLYSPACE_NO_IO_WRITE
      In this case, the model will not fit to the reality, but it is for scaling
      and precision needs. This can lead to false red errors with macro version
      of functions like feof (macros that access directly to the fields in the FILE)
*/


/* C/8159: #define volatile in -include must not impact this file */
#undef volatile
#undef const
#undef static
#undef extern
#undef assert  /* prevent user redefinition of assert */

/* @DECL_MACRO is a macro taking three parameters that are
 * function return, function name and function args.
 * For instance it can be PST_STUB_C_DEF or PST_STUB_C_DEF_NO_RETURN.
 *
 * @var_args is used to control if function has varargs.
 * It can have value HAS_VARARGS or NO_VARARGS. */
#define HAS_VARARGS ,...
#define NO_VARARGS

/* force stubs type adaptation. Not possible in C++ */
#if defined(__polyspace_adapt_types_for_stubs) && defined(__polyspace_static_types_for_stubs)
    #undef __polyspace_static_types_for_stubs
#endif

#if defined(__cplusplus) && !defined(PST_BUG_FINDER) /* in Cp/c++, do not adapt stubs to customer prototypes */
    #define __polyspace_static_types_for_stubs
#endif

#if defined(__cplusplus) && !defined(PST_BUG_FINDER)
    #define __polyspace_use_customer_include 1
#else
    #define __polyspace_use_customer_include 0
#endif


/* Set NO_INCLUDES to avoid including assert.h and stdargs.h in
   __polyspace__std_decls.h*/
#define NO_INCLUDES
#undef NO_INCLUDES
#if (__GLIBC__ < 2) || ((__GLIBC__ == 2) && (__GLIBC_MINOR__ < 3))
# define __PST_THROW_OLD_LIBC __PST_THROW
# define __PST_THROW_NEW_LIBC
# define __PST_THROW_NEW_LIBC_UNDER_2_13
#else
# define __PST_THROW_OLD_LIBC
# define __PST_THROW_NEW_LIBC __PST_THROW
# if (__GLIBC__ < 2) || ((__GLIBC__ == 2) && (__GLIBC_MINOR__ < 13))
# define __PST_THROW_NEW_LIBC_UNDER_2_13 __PST_THROW
# else
# define __PST_THROW_NEW_LIBC_UNDER_2_13
# endif
#endif

/* Test if number of arguments of stub is matching number of arguments of customer.
 * 1 if test is correct, 0 else. */
#define TEST_NB_ARGS(function, nb_args) (__polyspace_##function##_nb_args == nb_args)

/* Macro used to choose if stub type must be adapted from customer version or not. */
#if defined(__polyspace_static_types_for_stubs)
#define CUSTOM_STUB_TYPE(function, nb_args) 0
#else
#define CUSTOM_STUB_TYPE(function, nb_args)  (defined(__polyspace_##function##_known_type) && \
           TEST_NB_ARGS(function, nb_args))
#endif
/* Macros to define a stub without adapting its type to customer version */

/* Begin a stub for a function with 0 fixed argument - varargs is ignored */
#define PST_STUB_C_STD_TYPE_0(DECL_MACRO, return_std_type, function, varargs, attrs) \
    DECL_MACRO(return_std_type, function, (void)) attrs {

/* Begin a stub for a function with 1 fixed argument */
#define PST_STUB_C_STD_TYPE_1(DECL_MACRO, return_std_type, function, arg0_std_type, arg0, varargs, attrs) \
    DECL_MACRO(return_std_type, function, (arg0_std_type arg0 varargs)) attrs {

/* Begin a stub for a function with 2 fixed argument */
#define PST_STUB_C_STD_TYPE_2(DECL_MACRO, return_std_type, function, arg0_std_type, arg0,  \
                              arg1_std_type, arg1,  \
                              varargs, attrs)       \
DECL_MACRO(return_std_type, function, (arg0_std_type arg0,                            \
                                       arg1_std_type arg1                             \
                                       varargs)) attrs {

/* Begin a stub for a function with 3 fixed argument */
#define PST_STUB_C_STD_TYPE_3(DECL_MACRO, return_std_type, function, arg0_std_type, arg0,  \
                              arg1_std_type, arg1,  \
                              arg2_std_type, arg2,  \
                              varargs, attrs)       \
DECL_MACRO(return_std_type, function, (arg0_std_type arg0,                            \
                                       arg1_std_type arg1,                            \
                                       arg2_std_type arg2                             \
                                       varargs)) attrs {

/* Begin a stub for a function with 4 fixed argument */
#define PST_STUB_C_STD_TYPE_4(DECL_MACRO, return_std_type, function, arg0_std_type, arg0,  \
                              arg1_std_type, arg1,  \
                              arg2_std_type, arg2,  \
                              arg3_std_type, arg3,  \
                              varargs, attrs)       \
DECL_MACRO(return_std_type, function, (arg0_std_type arg0,                            \
                                       arg1_std_type arg1,                            \
                                       arg2_std_type arg2,                            \
                                       arg3_std_type arg3                             \
                                       varargs)) attrs {

/* Begin a stub for a function with 5 fixed argument */
#define PST_STUB_C_STD_TYPE_5(DECL_MACRO, return_std_type, function, arg0_std_type, arg0,  \
                              arg1_std_type, arg1,  \
                              arg2_std_type, arg2,  \
                              arg3_std_type, arg3,  \
                              arg4_std_type, arg4,  \
                              varargs, attrs)       \
DECL_MACRO(return_std_type, function, (arg0_std_type arg0,                            \
                                       arg1_std_type arg1,                            \
                                       arg2_std_type arg2,                            \
                                       arg3_std_type arg3,                            \
                                       arg4_std_type arg4                             \
                                       varargs)) attrs {

/* macros to define stubs that are automatically typed like customer version.
 * INTERNAL macros should not be used directly for stubs. */

/* ------------------------ INTERNAL MACROS --------------------------------- */
/* Instantiate return type and argument type of a function via typedef macro. */
#define INSTANTIATE_RETURN_TYPE(function) __polyspace_##function##_ret_t_typedef
#define INSTANTIATE_ARG_TYPE(function, arg_num) __polyspace_##function##_arg##arg_num##_t_typedef

/* Instantiate all arguments type of a function (having 1 to 5 parameters) */
#define INSTANTIATE_ARGS_TYPE_0(function)

#define INSTANTIATE_ARGS_TYPE_1(function) \
    INSTANTIATE_ARG_TYPE(function, 0)

#define INSTANTIATE_ARGS_TYPE_2(function) \
    INSTANTIATE_ARGS_TYPE_1(function)         \
    INSTANTIATE_ARG_TYPE(function, 1)         \

#define INSTANTIATE_ARGS_TYPE_3(function) \
    INSTANTIATE_ARGS_TYPE_2(function)         \
    INSTANTIATE_ARG_TYPE(function, 2)         \

#define INSTANTIATE_ARGS_TYPE_4(function) \
    INSTANTIATE_ARGS_TYPE_3(function)         \
    INSTANTIATE_ARG_TYPE(function, 3)         \

#define INSTANTIATE_ARGS_TYPE_5(function) \
    INSTANTIATE_ARGS_TYPE_4(function)         \
    INSTANTIATE_ARG_TYPE(function, 4)         \

    /* Instantiate return type and all arguments type of a function */
#define INSTANTIATE_FUNCTION_TYPE(function, nb_arg)   \
    INSTANTIATE_RETURN_TYPE(function)                     \
    INSTANTIATE_ARGS_TYPE_##nb_arg(function)              \

    /* Get return type and argument type of a function.
     * Those types must have been instantiated using INSTANTIATE_FUNCTION_TYPE macro */
    /* function return type */
#define RET_T(function) __polyspace_##function##_ret_t
    /* function type of an argument */
#define ARG_T(function, arg_num) __polyspace_##function##_arg##arg_num##_t

    /* declare a variable named @arg with type @arg_std_type.
     * Variable initial value is the value of argument arg##_ casted to correct type.
     * This macro is used to interface with body of existing stubs that have fixed type. */
#define DECL_ARG_STD_TYPE(arg_std_type, arg)     \
    arg_std_type arg = (arg_std_type) arg##_;

    /* ------------------------- NON INTERNAL MACROS ----------------------------------- */

    /* Begin a stub for a function with 0 fixed argument - varargs is ignored */
#define PST_STUB_C_CUSTOM_TYPE_0(DECL_MACRO, return_std_type, function, varargs, attrs) \
    INSTANTIATE_FUNCTION_TYPE(function, 0)                                        \
    DECL_MACRO(RET_T(function), function, (void)) attrs {

    /* Begin a stub for a function with 1 fixed argument */
#define PST_STUB_C_CUSTOM_TYPE_1(DECL_MACRO, return_std_type, function, arg0_std_type, arg0, varargs, attrs) \
    INSTANTIATE_FUNCTION_TYPE(function, 1)                                                                       \
    DECL_MACRO(RET_T(function), function, (ARG_T(function, 0) arg0##_ varargs)) attrs {                          \
        DECL_ARG_STD_TYPE(arg0_std_type, arg0)

    /* Begin a stub for a function with 2 fixed argument */
#define PST_STUB_C_CUSTOM_TYPE_2(DECL_MACRO, return_std_type, function, arg0_std_type, arg0,  \
                                 arg1_std_type, arg1,  \
                                 varargs, attrs)       \
INSTANTIATE_FUNCTION_TYPE(function, 2)                                                \
DECL_MACRO(RET_T(function), function, (ARG_T(function, 0) arg0##_,                    \
                                       ARG_T(function, 1) arg1##_                     \
                                       varargs)) attrs {                               \
    DECL_ARG_STD_TYPE(arg0_std_type, arg0)                                                \
    DECL_ARG_STD_TYPE(arg1_std_type, arg1)

    /* Begin a stub for a function with 3 fixed argument */
#define PST_STUB_C_CUSTOM_TYPE_3(DECL_MACRO, return_std_type, function, arg0_std_type, arg0,  \
                                 arg1_std_type, arg1,  \
                                 arg2_std_type, arg2,  \
                                 varargs, attrs)       \
INSTANTIATE_FUNCTION_TYPE(function, 3)                                                \
DECL_MACRO(RET_T(function), function, (ARG_T(function, 0) arg0##_,                    \
                                       ARG_T(function, 1) arg1##_,                    \
                                       ARG_T(function, 2) arg2##_                     \
                                       varargs)) attrs {                               \
    DECL_ARG_STD_TYPE(arg0_std_type, arg0)                                                \
    DECL_ARG_STD_TYPE(arg1_std_type, arg1)                                                \
    DECL_ARG_STD_TYPE(arg2_std_type, arg2)

    /* Begin a stub for a function with 4 fixed argument */
#define PST_STUB_C_CUSTOM_TYPE_4(DECL_MACRO, return_std_type, function, arg0_std_type, arg0,  \
                                 arg1_std_type, arg1,  \
                                 arg2_std_type, arg2,  \
                                 arg3_std_type, arg3,  \
                                 varargs, attrs)       \
INSTANTIATE_FUNCTION_TYPE(function, 4)                                                \
DECL_MACRO(RET_T(function), function, (ARG_T(function, 0) arg0##_,                    \
                                       ARG_T(function, 1) arg1##_,                    \
                                       ARG_T(function, 2) arg2##_,                    \
                                       ARG_T(function, 3) arg3##_                     \
                                       varargs)) attrs {                               \
    DECL_ARG_STD_TYPE(arg0_std_type, arg0)                                                \
    DECL_ARG_STD_TYPE(arg1_std_type, arg1)                                                \
    DECL_ARG_STD_TYPE(arg2_std_type, arg2)                                                \
    DECL_ARG_STD_TYPE(arg3_std_type, arg3)

    /* Begin a stub for a function with 5 fixed argument */
#define PST_STUB_C_CUSTOM_TYPE_5(DECL_MACRO, return_std_type, function, arg0_std_type, arg0,  \
                                 arg1_std_type, arg1,  \
                                 arg2_std_type, arg2,  \
                                 arg3_std_type, arg3,  \
                                 arg4_std_type, arg4,  \
                                 varargs, attrs)       \
INSTANTIATE_FUNCTION_TYPE(function, 5)                                                \
DECL_MACRO(RET_T(function), function, (ARG_T(function, 0) arg0##_,                    \
                                       ARG_T(function, 1) arg1##_,                    \
                                       ARG_T(function, 2) arg2##_,                    \
                                       ARG_T(function, 3) arg3##_,                    \
                                       ARG_T(function, 4) arg4##_                     \
                                       varargs)) attrs {                              \
    DECL_ARG_STD_TYPE(arg0_std_type, arg0)                                                \
    DECL_ARG_STD_TYPE(arg1_std_type, arg1)                                                \
    DECL_ARG_STD_TYPE(arg2_std_type, arg2)                                                \
    DECL_ARG_STD_TYPE(arg3_std_type, arg3)                                                \
    DECL_ARG_STD_TYPE(arg4_std_type, arg4)

    /* macro to return from a function with a custom type.
     * Uses macro defined for function */
#define RETURN_CUSTOM_TYPE(function, x) __polyspace_##function##_return(x)

    /* End a stub for a function */
#define PST_STUB_C_DEF_END }


#define APPLY_CONSTRAINT(condition) unchecked_assert(condition)



#ifdef __cplusplus

#ifndef __SIZE_TYPE__
# error Internal error __SIZE_TYPE__  should have been defined
#endif /* !defined(__SIZE_TYPE__) */

#ifndef __PTRDIFF_TYPE__
# error Internal error __PTRDIFF_TYPE__ should have been defined
#endif /* !defined(__PTRDIFF_TYPE__) */

#define PST_LINK_C extern "C"
#define PST_LINK_CXX extern "C++"

#ifdef PST_VISUAL
#  define PST_DECL_C    __cdecl
#  define PST_NO_RETURN __declspec(noreturn)
#else
#  define PST_DECL_C
#  define PST_NO_RETURN
#endif

#ifdef PST_VISUAL
/* copied from stdlib.h */
#  ifdef  _DLL
#    define PST_IMPORT __declspec(dllimport)
#  else   /* ndef _DLL */
#    define PST_IMPORT
#  endif  /* _DLL */
#else
#  define PST_IMPORT
#endif

/* for definition : do not provide __declspec(dllimport/dllexport)
    FE allows if declaration contains __declspec(dllimport) AND definition contains nothing
*/

#define PST_STUB_C_DEF(func_return,func_name,func_args)           \
      extern     func_return PST_DECL_C __pst_profile__##func_name func_args  ;    \
      PST_LINK_C func_return PST_DECL_C                  func_name func_args

#define PST_STUB_CXX_DEF(func_return,func_name,func_args)           \
      extern     func_return PST_DECL_C __pst_profile__##func_name func_args  ;    \
      PST_LINK_CXX func_return PST_DECL_C                  func_name func_args

/* for declaration : provide a __declspec(dllimport) if visual does it
     FE give an error if first declaration does not use dllimport and a later re-declaration use it
 */

#define PST_STUB_C_DECL(func_return,func_name,func_args)                                   \
      extern     PST_IMPORT func_return PST_DECL_C  __pst_profile__##func_name func_args;  \
      PST_LINK_C PST_IMPORT func_return PST_DECL_C func_name                   func_args

/* function that are declared with declspec(noreturn) in visual : abort, exit */

#define PST_STUB_C_DEF_NO_RETURN(func_return,func_name,func_args)                             \
     extern     PST_NO_RETURN func_return PST_DECL_C  __pst_profile__##func_name func_args ;  \
     PST_LINK_C PST_NO_RETURN func_return PST_DECL_C func_name                   func_args

#ifdef PST_EMBEDDED
#undef PST_HAS_NAMESPACE
#undef PST_HAS_EXCEPTION
#endif

/* stdlib.h */

/* define size_t for malloc and Cie */
typedef __SIZE_TYPE__ size_t;

#ifndef POLYSPACE_NO_STANDARD_STUBS
#if __polyspace_use_customer_include
#undef alloca
#undef calloc
#undef realloc
#undef valloc
#undef __builtin_alloca
/* C++ specific : */
/* must be defined with PST_STUB_C_DECL macros in very cases : */
PST_STUB_C_DECL(void *, malloc,  (size_t)) __PST_THROW;
PST_STUB_C_DECL(void *, calloc,  (size_t, size_t)) __PST_THROW;
PST_STUB_C_DECL(void *, realloc, (void *, size_t)) __PST_THROW;
PST_STUB_C_DECL(void *, valloc,  (size_t)) __PST_THROW;
PST_STUB_C_DECL(void *, alloca,  (size_t)) __PST_THROW;
#ifndef PST_GNU
  PST_STUB_C_DECL(void *,__builtin_alloca, (size_t)) __PST_THROW;
#endif
#endif /* __polyspace_use_customer_include */
#endif /* ifndef POLYSPACE_NO_STANDARD_STUBS */

#if ((defined(PST_HAS_SYS_CDEFS)|| defined (PST_BUG_FINDER)) && ((__GNUC__ > 2) || (__GNUC__ == 2 && __GNUC_MINOR__ >= 8))) && (! defined(POLYSPACE_LIBC_NO_THROW))
# define __PST_THROW throw ()
#else
# define __PST_THROW
#endif

#if defined(PST_VISUAL) && (_MSC_VER >= 1400)
# define __PST_CRTNOALIAS __declspec(noalias)
#else
# define __PST_CRTNOALIAS
#endif

/* extern "C" is taken into account in PST_STUB_C_DECL */


#else /* __cplusplus */
//Some C definition
#define PST_STUB_C_DEF(func_return,func_name,func_args) func_return func_name func_args
#define __PST_THROW

#endif /* __cplusplus */


    /* *** KEIL & IAR Stubs ******************************** */
#if !defined(NO_EXTEND) && ( (defined(__PST_KEIL_COMPILER__) && !defined(__PST_NO_KEIL_STUBS__)) \
        || (defined(__PST_IAR_COMPILER__) && !defined(__PST_NO_IAR_STUBS__)) )
#include <__polyspace__keil_iar_stubs.c>
#endif

    /* ***************************************************** */
    /* ***** Stubs for strict ANSI C standard includes ***** */
    /* ***************************************************** */
    /* includes stubbed:
     * - assert.h
     * - ctype.h
     * - errno.h is partially stubbed. Some math functions for which Polyspace
     *           Verifier uses builtin code do no set errno but generate a red
     *           error when a range error or a domain error occurs.
     * - locale.h
     * - math.h
     * - setjmp.h is stubbed with some functional limitations. See the implementation
     *            of the 'setjmp' and 'longjmp' functions for more informations.
     * - signal.h is stubbed with some functional limitations. See the implementation
     *            of the 'signal' and 'raise' functions for more informations.
     * - stdio.h
     * - stdarg.h
     * - stdlib.h
     * - string.h
     * - time.h
     */
    /*********************************************************************** stdarg.h */

    int _polyspace_vararg_position;
    volatile int _polyspace_vararg_p0;

#ifdef __cplusplus
    extern "C" {
#endif
#if defined(__polyspace_isalnum_nb_args) && !TEST_NB_ARGS(isalnum,1)
#define __polyspace_no_isalnum
#endif /* !TEST_NB_ARGS(isalnum,1) */
#if defined(__polyspace_isalpha_nb_args) && !TEST_NB_ARGS(isalpha,1)
#define __polyspace_no_isalpha
#endif /* !TEST_NB_ARGS(isalpha,1) */
#if defined(__polyspace_iscntrl_nb_args) && !TEST_NB_ARGS(iscntrl,1)
#define __polyspace_no_iscntrl
#endif /* !TEST_NB_ARGS(iscntrl,1) */
#if defined(__polyspace_isdigit_nb_args) && !TEST_NB_ARGS(isdigit,1)
#define __polyspace_no_isdigit
#endif /* !TEST_NB_ARGS(isdigit,1) */
#if defined(__polyspace_isgraph_nb_args) && !TEST_NB_ARGS(isgraph,1)
#define __polyspace_no_isgraph
#endif /* !TEST_NB_ARGS(isgraph,1) */
#if defined(__polyspace_islower_nb_args) && !TEST_NB_ARGS(islower,1)
#define __polyspace_no_islower
#endif /* !TEST_NB_ARGS(islower,1) */
#if defined(__polyspace_isprint_nb_args) && !TEST_NB_ARGS(isprint,1)
#define __polyspace_no_isprint
#endif /* !TEST_NB_ARGS(isprint,1) */
#if defined(__polyspace_ispunct_nb_args) && !TEST_NB_ARGS(ispunct,1)
#define __polyspace_no_ispunct
#endif /* !TEST_NB_ARGS(ispunct,1) */
#if defined(__polyspace_isspace_nb_args) && !TEST_NB_ARGS(isspace,1)
#define __polyspace_no_isspace
#endif /* !TEST_NB_ARGS(isspace,1) */
#if defined(__polyspace_isupper_nb_args) && !TEST_NB_ARGS(isupper,1)
#define __polyspace_no_isupper
#endif /* !TEST_NB_ARGS(isupper,1) */
#if defined(__polyspace_isxdigit_nb_args) && !TEST_NB_ARGS(isxdigit,1)
#define __polyspace_no_isxdigit
#endif /* !TEST_NB_ARGS(isxdigit,1) */
#if defined(__polyspace_tolower_nb_args) && !TEST_NB_ARGS(tolower,1)
#define __polyspace_no_tolower
#endif /* !TEST_NB_ARGS(tolower,1) */
#if defined(__polyspace_toupper_nb_args) && !TEST_NB_ARGS(toupper,1)
#define __polyspace_no_toupper
#endif /* !TEST_NB_ARGS(toupper,1) */
#if defined(__polyspace_setlocale_nb_args) && !TEST_NB_ARGS(setlocale,2)
#define __polyspace_no_setlocale
#endif /* !TEST_NB_ARGS(setlocale,2) */
#if defined(__polyspace_localeconv_nb_args) && !TEST_NB_ARGS(localeconv,0)
#define __polyspace_no_localeconv
#endif /* !TEST_NB_ARGS(localeconv,0) */
#if defined(__polyspace_frexp_nb_args) && !TEST_NB_ARGS(frexp,2)
#define __polyspace_no_frexp
#endif /* !TEST_NB_ARGS(frexp,2) */
#if defined(__polyspace_ldexp_nb_args) && !TEST_NB_ARGS(ldexp,2)
#define __polyspace_no_ldexp
#endif /* !TEST_NB_ARGS(ldexp,2) */
#if defined(__polyspace_modf_nb_args) && !TEST_NB_ARGS(modf,2)
#define __polyspace_no_modf
#endif /* !TEST_NB_ARGS(modf,2) */
#if defined(__polyspace_ceil_nb_args) && !TEST_NB_ARGS(ceil,1)
#define __polyspace_no_ceil
#endif /* !TEST_NB_ARGS(ceil,1) */
#if defined(__polyspace_trunc_nb_args) && !TEST_NB_ARGS(trunc,1)
#define __polyspace_no_trunc
#endif /* !TEST_NB_ARGS(trunc,1) */
#if defined(__polyspace_round_nb_args) && !TEST_NB_ARGS(round,1)
#define __polyspace_no_round
#endif /* !TEST_NB_ARGS(round,1) */
#if defined(__polyspace_fdim_nb_args) && !TEST_NB_ARGS(fdim,2)
#define __polyspace_no_fdim
#endif /* !TEST_NB_ARGS(fdim,2) */
#if defined(__polyspace_fma_nb_args) && !TEST_NB_ARGS(fma,3)
#define __polyspace_no_fma
#endif /* !TEST_NB_ARGS(fma,3) */
#if defined(__polyspace_fmax_nb_args) && !TEST_NB_ARGS(fmax,2)
#define __polyspace_no_fmax
#endif /* !TEST_NB_ARGS(fmax,2) */
#if defined(__polyspace_fmin_nb_args) && !TEST_NB_ARGS(fmin,2)
#define __polyspace_no_fmin
#endif /* !TEST_NB_ARGS(fmin,2) */
#if defined(__polyspace_fabs_nb_args) && !TEST_NB_ARGS(fabs,1)
#define __polyspace_no_fabs
#endif /* !TEST_NB_ARGS(fabs,1) */
#if defined(__polyspace_floor_nb_args) && !TEST_NB_ARGS(floor,1)
#define __polyspace_no_floor
#endif /* !TEST_NB_ARGS(floor,1) */
#if defined(__polyspace_fmod_nb_args) && !TEST_NB_ARGS(fmod,2)
#define __polyspace_no_fmod
#endif /* !TEST_NB_ARGS(fmod,2) */
#if defined(__polyspace_sqrt_nb_args) && !TEST_NB_ARGS(sqrt,1)
#define __polyspace_no_sqrt
#endif /* !TEST_NB_ARGS(sqrt,1) */
#if defined(__polyspace_cbrt_nb_args) && !TEST_NB_ARGS(cbrt,1)
#define __polyspace_no_cbrt
#endif /* !TEST_NB_ARGS(cbrt,1) */
#if defined(__polyspace_pow_nb_args) && !TEST_NB_ARGS(pow,2)
#define __polyspace_no_pow
#endif /* !TEST_NB_ARGS(pow,2) */
#if defined(__polyspace_exp_nb_args) && !TEST_NB_ARGS(exp,1)
#define __polyspace_no_exp
#endif /* !TEST_NB_ARGS(exp,1) */
#if defined(__polyspace_exp2_nb_args) && !TEST_NB_ARGS(exp2,1)
#define __polyspace_no_exp2
#endif /* !TEST_NB_ARGS(exp2,1) */
#if defined(__polyspace_expm1_nb_args) && !TEST_NB_ARGS(expm1,1)
#define __polyspace_no_expm1
#endif /* !TEST_NB_ARGS(expm1,1) */
#if defined(__polyspace_log_nb_args) && !TEST_NB_ARGS(log,1)
#define __polyspace_no_log
#endif /* !TEST_NB_ARGS(log,1) */
#if defined(__polyspace_logb_nb_args) && !TEST_NB_ARGS(logb,1)
#define __polyspace_no_logb
#endif /* !TEST_NB_ARGS(logb,1) */
#if defined(__polyspace_log10_nb_args) && !TEST_NB_ARGS(log10,1)
#define __polyspace_no_log10
#endif /* !TEST_NB_ARGS(log10,1) */
#if defined(__polyspace_log1p_nb_args) && !TEST_NB_ARGS(log1p,1)
#define __polyspace_no_log1p
#endif /* !TEST_NB_ARGS(log1p,1) */
#if defined(__polyspace_nexttoward_nb_args) && !TEST_NB_ARGS(nexttoward,2)
#define __polyspace_no_nexttoward
#endif /* !TEST_NB_ARGS(nexttoward,2) */
#if defined(__polyspace_nextafter_nb_args) && !TEST_NB_ARGS(nextafter,2)
#define __polyspace_no_nextafter
#endif /* !TEST_NB_ARGS(nextafter,2) */
#if defined(__polyspace_cos_nb_args) && !TEST_NB_ARGS(cos,1)
#define __polyspace_no_cos
#endif /* !TEST_NB_ARGS(cos,1) */
#if defined(__polyspace_sin_nb_args) && !TEST_NB_ARGS(sin,1)
#define __polyspace_no_sin
#endif /* !TEST_NB_ARGS(sin,1) */
#if defined(__polyspace_tan_nb_args) && !TEST_NB_ARGS(tan,1)
#define __polyspace_no_tan
#endif /* !TEST_NB_ARGS(tan,1) */
#if defined(__polyspace_acos_nb_args) && !TEST_NB_ARGS(acos,1)
#define __polyspace_no_acos
#endif /* !TEST_NB_ARGS(acos,1) */
#if defined(__polyspace_asin_nb_args) && !TEST_NB_ARGS(asin,1)
#define __polyspace_no_asin
#endif /* !TEST_NB_ARGS(asin,1) */
#if defined(__polyspace_atan_nb_args) && !TEST_NB_ARGS(atan,1)
#define __polyspace_no_atan
#endif /* !TEST_NB_ARGS(atan,1) */
#if defined(__polyspace_atan2_nb_args) && !TEST_NB_ARGS(atan2,2)
#define __polyspace_no_atan2
#endif /* !TEST_NB_ARGS(atan2,2) */
#if defined(__polyspace_cosh_nb_args) && !TEST_NB_ARGS(cosh,1)
#define __polyspace_no_cosh
#endif /* !TEST_NB_ARGS(cosh,1) */
#if defined(__polyspace_sinh_nb_args) && !TEST_NB_ARGS(sinh,1)
#define __polyspace_no_sinh
#endif /* !TEST_NB_ARGS(sinh,1) */
#if defined(__polyspace_tanh_nb_args) && !TEST_NB_ARGS(tanh,1)
#define __polyspace_no_tanh
#endif /* !TEST_NB_ARGS(tanh,1) */
#if defined(__polyspace_acosh_nb_args) && !TEST_NB_ARGS(acosh,1)
#define __polyspace_no_acosh
#endif /* !TEST_NB_ARGS(acosh,1) */
#if defined(__polyspace_asinh_nb_args) && !TEST_NB_ARGS(asinh,1)
#define __polyspace_no_asinh
#endif /* !TEST_NB_ARGS(asinh,1) */
#if defined(__polyspace_atanh_nb_args) && !TEST_NB_ARGS(atanh,1)
#define __polyspace_no_atanh
#endif /* !TEST_NB_ARGS(atanh,1) */
#if defined(__polyspace_longjmp_nb_args) && !TEST_NB_ARGS(longjmp,2)
#define __polyspace_no_longjmp
#endif /* !TEST_NB_ARGS(longjmp,2) */
#if defined(__polyspace_remove_nb_args) && !TEST_NB_ARGS(remove,1)
#define __polyspace_no_remove
#endif /* !TEST_NB_ARGS(remove,1) */
#if defined(__polyspace_rename_nb_args) && !TEST_NB_ARGS(rename,2)
#define __polyspace_no_rename
#endif /* !TEST_NB_ARGS(rename,2) */
#if defined(__polyspace_tmpnam_nb_args) && !TEST_NB_ARGS(tmpnam,1)
#define __polyspace_no_tmpnam
#endif /* !TEST_NB_ARGS(tmpnam,1) */
#if defined(__polyspace_fclose_nb_args) && !TEST_NB_ARGS(fclose,1)
#define __polyspace_no_fclose
#endif /* !TEST_NB_ARGS(fclose,1) */
#if defined(__polyspace_fflush_nb_args) && !TEST_NB_ARGS(fflush,1)
#define __polyspace_no_fflush
#endif /* !TEST_NB_ARGS(fflush,1) */
#if defined(__polyspace_tmpfile_nb_args) && !TEST_NB_ARGS(tmpfile,0)
#define __polyspace_no_tmpfile
#endif /* !TEST_NB_ARGS(tmpfile,0) */
#if defined(__polyspace_fopen_nb_args) && !TEST_NB_ARGS(fopen,2)
#define __polyspace_no_fopen
#endif /* !TEST_NB_ARGS(fopen,2) */
#if defined(__polyspace_freopen_nb_args) && !TEST_NB_ARGS(freopen,3)
#define __polyspace_no_freopen
#endif /* !TEST_NB_ARGS(freopen,3) */
#if defined(__polyspace_setbuf_nb_args) && !TEST_NB_ARGS(setbuf,2)
#define __polyspace_no_setbuf
#endif /* !TEST_NB_ARGS(setbuf,2) */
#if defined(__polyspace_setvbuf_nb_args) && !TEST_NB_ARGS(setvbuf,4)
#define __polyspace_no_setvbuf
#endif /* !TEST_NB_ARGS(setvbuf,4) */
#if defined(__polyspace_vfprintf_nb_args) && !TEST_NB_ARGS(vfprintf,3)
#define __polyspace_no_vfprintf
#endif /* !TEST_NB_ARGS(vfprintf,3) */
#if defined(__polyspace_vprintf_nb_args) && !TEST_NB_ARGS(vprintf,2)
#define __polyspace_no_vprintf
#endif /* !TEST_NB_ARGS(vprintf,2) */
#if defined(__polyspace_vsprintf_nb_args) && !TEST_NB_ARGS(vsprintf,3)
#define __polyspace_no_vsprintf
#endif /* !TEST_NB_ARGS(vsprintf,3) */
#if defined(__polyspace_fprintf_nb_args) && !TEST_NB_ARGS(fprintf,2)
#define __polyspace_no_fprintf
#endif /* !TEST_NB_ARGS(fprintf,2) */
#if defined(__polyspace_fscanf_nb_args) && !TEST_NB_ARGS(fscanf,2)
#define __polyspace_no_fscanf
#endif /* !TEST_NB_ARGS(fscanf,2) */
#if defined(__polyspace_printf_nb_args) && !TEST_NB_ARGS(printf,1)
#define __polyspace_no_printf
#endif /* !TEST_NB_ARGS(printf,1) */
#if defined(__polyspace_scanf_nb_args) && !TEST_NB_ARGS(scanf,1)
#define __polyspace_no_scanf
#endif /* !TEST_NB_ARGS(scanf,1) */
#if defined(__polyspace_sprintf_nb_args) && !TEST_NB_ARGS(sprintf,2)
#define __polyspace_no_sprintf
#endif /* !TEST_NB_ARGS(sprintf,2) */
#if defined(__polyspace_sscanf_nb_args) && !TEST_NB_ARGS(sscanf,2)
#define __polyspace_no_sscanf
#endif /* !TEST_NB_ARGS(sscanf,2) */
#if defined(__polyspace_fgetc_nb_args) && !TEST_NB_ARGS(fgetc,1)
#define __polyspace_no_fgetc
#endif /* !TEST_NB_ARGS(fgetc,1) */
#if defined(__polyspace_fgets_nb_args) && !TEST_NB_ARGS(fgets,3)
#define __polyspace_no_fgets
#endif /* !TEST_NB_ARGS(fgets,3) */
#if defined(__polyspace_fputc_nb_args) && !TEST_NB_ARGS(fputc,2)
#define __polyspace_no_fputc
#endif /* !TEST_NB_ARGS(fputc,2) */
#if defined(__polyspace_fputs_nb_args) && !TEST_NB_ARGS(fputs,2)
#define __polyspace_no_fputs
#endif /* !TEST_NB_ARGS(fputs,2) */
#if defined(__polyspace__IO_getc_nb_args) && !TEST_NB_ARGS(_IO_getc,1)
#define __polyspace_no__IO_getc
#endif /* !TEST_NB_ARGS(_IO_getc,1) */
#if defined(__polyspace__filbuf_nb_args) && !TEST_NB_ARGS(_filbuf,1)
#define __polyspace_no__filbuf
#endif /* !TEST_NB_ARGS(_filbuf,1) */
#if defined(__polyspace___filbuf_nb_args) && !TEST_NB_ARGS(__filbuf,1)
#define __polyspace_no___filbuf
#endif /* !TEST_NB_ARGS(__filbuf,1) */
#if defined(__polyspace_getc_nb_args) && !TEST_NB_ARGS(getc,1)
#define __polyspace_no_getc
#endif /* !TEST_NB_ARGS(getc,1) */
#if defined(__polyspace_getchar_nb_args) && !TEST_NB_ARGS(getchar,0)
#define __polyspace_no_getchar
#endif /* !TEST_NB_ARGS(getchar,0) */
#if defined(__polyspace_gets_nb_args) && !TEST_NB_ARGS(gets,1)
#define __polyspace_no_gets
#endif /* !TEST_NB_ARGS(gets,1) */
#if defined(__polyspace__IO_putc_nb_args) && !TEST_NB_ARGS(_IO_putc,2)
#define __polyspace_no__IO_putc
#endif /* !TEST_NB_ARGS(_IO_putc,2) */
#if defined(__polyspace__flsbuf_nb_args) && !TEST_NB_ARGS(_flsbuf,2)
#define __polyspace_no__flsbuf
#endif /* !TEST_NB_ARGS(_flsbuf,2) */
#if defined(__polyspace___flsbuf_nb_args) && !TEST_NB_ARGS(__flsbuf,2)
#define __polyspace_no___flsbuf
#endif /* !TEST_NB_ARGS(__flsbuf,2) */
#if defined(__polyspace_putc_nb_args) && !TEST_NB_ARGS(putc,2)
#define __polyspace_no_putc
#endif /* !TEST_NB_ARGS(putc,2) */
#if defined(__polyspace_putchar_nb_args) && !TEST_NB_ARGS(putchar,1)
#define __polyspace_no_putchar
#endif /* !TEST_NB_ARGS(putchar,1) */
#if defined(__polyspace_puts_nb_args) && !TEST_NB_ARGS(puts,1)
#define __polyspace_no_puts
#endif /* !TEST_NB_ARGS(puts,1) */
#if defined(__polyspace_ungetc_nb_args) && !TEST_NB_ARGS(ungetc,2)
#define __polyspace_no_ungetc
#endif /* !TEST_NB_ARGS(ungetc,2) */
#if defined(__polyspace_fread_nb_args) && !TEST_NB_ARGS(fread,4)
#define __polyspace_no_fread
#endif /* !TEST_NB_ARGS(fread,4) */
#if defined(__polyspace_fwrite_nb_args) && !TEST_NB_ARGS(fwrite,4)
#define __polyspace_no_fwrite
#endif /* !TEST_NB_ARGS(fwrite,4) */
#if defined(__polyspace_fgetpos_nb_args) && !TEST_NB_ARGS(fgetpos,2)
#define __polyspace_no_fgetpos
#endif /* !TEST_NB_ARGS(fgetpos,2) */
#if defined(__polyspace_fseek_nb_args) && !TEST_NB_ARGS(fseek,3)
#define __polyspace_no_fseek
#endif /* !TEST_NB_ARGS(fseek,3) */
#if defined(__polyspace_fsetpos_nb_args) && !TEST_NB_ARGS(fsetpos,2)
#define __polyspace_no_fsetpos
#endif /* !TEST_NB_ARGS(fsetpos,2) */
#if defined(__polyspace_ftell_nb_args) && !TEST_NB_ARGS(ftell,1)
#define __polyspace_no_ftell
#endif /* !TEST_NB_ARGS(ftell,1) */
#if defined(__polyspace_rewind_nb_args) && !TEST_NB_ARGS(rewind,1)
#define __polyspace_no_rewind
#endif /* !TEST_NB_ARGS(rewind,1) */
#if defined(__polyspace_clearerr_nb_args) && !TEST_NB_ARGS(clearerr,1)
#define __polyspace_no_clearerr
#endif /* !TEST_NB_ARGS(clearerr,1) */
#if defined(__polyspace_feof_nb_args) && !TEST_NB_ARGS(feof,1)
#define __polyspace_no_feof
#endif /* !TEST_NB_ARGS(feof,1) */
#if defined(__polyspace_ferror_nb_args) && !TEST_NB_ARGS(ferror,1)
#define __polyspace_no_ferror
#endif /* !TEST_NB_ARGS(ferror,1) */
#if defined(__polyspace_perror_nb_args) && !TEST_NB_ARGS(perror,1)
#define __polyspace_no_perror
#endif /* !TEST_NB_ARGS(perror,1) */
#if defined(__polyspace_fileno_nb_args) && !TEST_NB_ARGS(fileno,1)
#define __polyspace_no_fileno
#endif /* !TEST_NB_ARGS(fileno,1) */
#if defined(__polyspace_atof_nb_args) && !TEST_NB_ARGS(atof,1)
#define __polyspace_no_atof
#endif /* !TEST_NB_ARGS(atof,1) */
#if defined(__polyspace_atoi_nb_args) && !TEST_NB_ARGS(atoi,1)
#define __polyspace_no_atoi
#endif /* !TEST_NB_ARGS(atoi,1) */
#if defined(__polyspace_atol_nb_args) && !TEST_NB_ARGS(atol,1)
#define __polyspace_no_atol
#endif /* !TEST_NB_ARGS(atol,1) */
#if defined(__polyspace_strtod_nb_args) && !TEST_NB_ARGS(strtod,2)
#define __polyspace_no_strtod
#endif /* !TEST_NB_ARGS(strtod,2) */
#if defined(__polyspace_strtol_nb_args) && !TEST_NB_ARGS(strtol,3)
#define __polyspace_no_strtol
#endif /* !TEST_NB_ARGS(strtol,3) */
#if defined(__polyspace_strtoul_nb_args) && !TEST_NB_ARGS(strtoul,3)
#define __polyspace_no_strtoul
#endif /* !TEST_NB_ARGS(strtoul,3) */
#if defined(__polyspace_rand_nb_args) && !TEST_NB_ARGS(rand,0)
#define __polyspace_no_rand
#endif /* !TEST_NB_ARGS(rand,0) */
#if defined(__polyspace_srand_nb_args) && !TEST_NB_ARGS(srand,1)
#define __polyspace_no_srand
#endif /* !TEST_NB_ARGS(srand,1) */
#if defined(__polyspace_abort_nb_args) && !TEST_NB_ARGS(abort,0)
#define __polyspace_no_abort
#endif /* !TEST_NB_ARGS(abort,0) */
#if defined(__polyspace_atexit_nb_args) && !TEST_NB_ARGS(atexit,1)
#define __polyspace_no_atexit
#endif /* !TEST_NB_ARGS(atexit,1) */
#if defined(__polyspace_exit_nb_args) && !TEST_NB_ARGS(exit,1)
#define __polyspace_no_exit
#endif /* !TEST_NB_ARGS(exit,1) */
#if defined(__polyspace_at_quick_exit_nb_args) && !TEST_NB_ARGS(at_quick_exit,1)
#define __polyspace_no_at_quick_exit
#endif /* !TEST_NB_ARGS(at_quick_exit,1) */
#if defined(__polyspace_quick_exit_nb_args) && !TEST_NB_ARGS(quick_exit,1)
#define __polyspace_no_quick_exit
#endif /* !TEST_NB_ARGS(quick_exit,1) */
#if defined(__polyspace__Exit_nb_args) && !TEST_NB_ARGS(_Exit,1)
#define __polyspace_no__Exit
#endif /* !TEST_NB_ARGS(_Exit,1) */
#if defined(__polyspace_getenv_nb_args) && !TEST_NB_ARGS(getenv,1)
#define __polyspace_no_getenv
#endif /* !TEST_NB_ARGS(getenv,1) */
#if defined(__polyspace_system_nb_args) && !TEST_NB_ARGS(system,1)
#define __polyspace_no_system
#endif /* !TEST_NB_ARGS(system,1) */
#if defined(__polyspace_bsearch_nb_args) && !TEST_NB_ARGS(bsearch,5)
#define __polyspace_no_bsearch
#endif /* !TEST_NB_ARGS(bsearch,5) */
#if defined(__polyspace_qsort_nb_args) && !TEST_NB_ARGS(qsort,4)
#define __polyspace_no_qsort
#endif /* !TEST_NB_ARGS(qsort,4) */
#if defined(__polyspace_abs_nb_args) && !TEST_NB_ARGS(abs,1)
#define __polyspace_no_abs
#endif /* !TEST_NB_ARGS(abs,1) */
#if defined(__polyspace_div_nb_args) && !TEST_NB_ARGS(div,2)
#define __polyspace_no_div
#endif /* !TEST_NB_ARGS(div,2) */
#if defined(__polyspace_labs_nb_args) && !TEST_NB_ARGS(labs,1)
#define __polyspace_no_labs
#endif /* !TEST_NB_ARGS(labs,1) */
#if defined(__polyspace_ldiv_nb_args) && !TEST_NB_ARGS(ldiv,2)
#define __polyspace_no_ldiv
#endif /* !TEST_NB_ARGS(ldiv,2) */
#if defined(__polyspace_lldiv_nb_args) && !TEST_NB_ARGS(lldiv,2)
#define __polyspace_no_lldiv
#endif /* !TEST_NB_ARGS(lldiv,2) */
#if defined(__polyspace_mblen_nb_args) && !TEST_NB_ARGS(mblen,2)
#define __polyspace_no_mblen
#endif /* !TEST_NB_ARGS(mblen,2) */
#if defined(__polyspace_mbtowc_nb_args) && !TEST_NB_ARGS(mbtowc,3)
#define __polyspace_no_mbtowc
#endif /* !TEST_NB_ARGS(mbtowc,3) */
#if defined(__polyspace_wctomb_nb_args) && !TEST_NB_ARGS(wctomb,2)
#define __polyspace_no_wctomb
#endif /* !TEST_NB_ARGS(wctomb,2) */
#if defined(__polyspace_mbstowcs_nb_args) && !TEST_NB_ARGS(mbstowcs,3)
#define __polyspace_no_mbstowcs
#endif /* !TEST_NB_ARGS(mbstowcs,3) */
#if defined(__polyspace_wcstombs_nb_args) && !TEST_NB_ARGS(wcstombs,3)
#define __polyspace_no_wcstombs
#endif /* !TEST_NB_ARGS(wcstombs,3) */
#if defined(__polyspace_free_nb_args) && !TEST_NB_ARGS(free,1)
#define __polyspace_no_free
#endif /* !TEST_NB_ARGS(free,1) */
#if defined(__polyspace_memalign_nb_args) && !TEST_NB_ARGS(memalign,2)
#define __polyspace_no_memalign
#endif /* !TEST_NB_ARGS(memalign,2) */
#if defined(__polyspace__alloca_nb_args) && !TEST_NB_ARGS(_alloca,1)
#define __polyspace_no__alloca
#endif /* !TEST_NB_ARGS(_alloca,1) */
#if defined(__polyspace_realloc_nb_args) && !TEST_NB_ARGS(realloc,2)
#define __polyspace_no_realloc
#endif /* !TEST_NB_ARGS(realloc,2) */
#if defined(__polyspace_strlen_nb_args) && !TEST_NB_ARGS(strlen,1)
#define __polyspace_no_strlen
#endif /* !TEST_NB_ARGS(strlen,1) */
#if defined(__polyspace_strcpy_nb_args) && !TEST_NB_ARGS(strcpy,2)
#define __polyspace_no_strcpy
#endif /* !TEST_NB_ARGS(strcpy,2) */
#if defined(__polyspace_strncpy_nb_args) && !TEST_NB_ARGS(strncpy,3)
#define __polyspace_no_strncpy
#endif /* !TEST_NB_ARGS(strncpy,3) */
#if defined(__polyspace_strcat_nb_args) && !TEST_NB_ARGS(strcat,2)
#define __polyspace_no_strcat
#endif /* !TEST_NB_ARGS(strcat,2) */
#if defined(__polyspace_strncat_nb_args) && !TEST_NB_ARGS(strncat,3)
#define __polyspace_no_strncat
#endif /* !TEST_NB_ARGS(strncat,3) */
#if defined(__polyspace_memcmp_nb_args) && !TEST_NB_ARGS(memcmp,3)
#define __polyspace_no_memcmp
#endif /* !TEST_NB_ARGS(memcmp,3) */
#if defined(__polyspace_strcmp_nb_args) && !TEST_NB_ARGS(strcmp,2)
#define __polyspace_no_strcmp
#endif /* !TEST_NB_ARGS(strcmp,2) */
#if defined(__polyspace_strcoll_nb_args) && !TEST_NB_ARGS(strcoll,2)
#define __polyspace_no_strcoll
#endif /* !TEST_NB_ARGS(strcoll,2) */
#if defined(__polyspace_strncmp_nb_args) && !TEST_NB_ARGS(strncmp,3)
#define __polyspace_no_strncmp
#endif /* !TEST_NB_ARGS(strncmp,3) */
#if defined(__polyspace_strxfrm_nb_args) && !TEST_NB_ARGS(strxfrm,3)
#define __polyspace_no_strxfrm
#endif /* !TEST_NB_ARGS(strxfrm,3) */
#if defined(__polyspace_memchr_nb_args) && !TEST_NB_ARGS(memchr,3)
#define __polyspace_no_memchr
#endif /* !TEST_NB_ARGS(memchr,3) */
#if defined(__polyspace_strchr_nb_args) && !TEST_NB_ARGS(strchr,2)
#define __polyspace_no_strchr
#endif /* !TEST_NB_ARGS(strchr,2) */
#if defined(__polyspace_strcspn_nb_args) && !TEST_NB_ARGS(strcspn,2)
#define __polyspace_no_strcspn
#endif /* !TEST_NB_ARGS(strcspn,2) */
#if defined(__polyspace_strpbrk_nb_args) && !TEST_NB_ARGS(strpbrk,2)
#define __polyspace_no_strpbrk
#endif /* !TEST_NB_ARGS(strpbrk,2) */
#if defined(__polyspace_strrchr_nb_args) && !TEST_NB_ARGS(strrchr,2)
#define __polyspace_no_strrchr
#endif /* !TEST_NB_ARGS(strrchr,2) */
#if defined(__polyspace_strspn_nb_args) && !TEST_NB_ARGS(strspn,2)
#define __polyspace_no_strspn
#endif /* !TEST_NB_ARGS(strspn,2) */
#if defined(__polyspace_strstr_nb_args) && !TEST_NB_ARGS(strstr,2)
#define __polyspace_no_strstr
#endif /* !TEST_NB_ARGS(strstr,2) */
#if defined(__polyspace_strtok_nb_args) && !TEST_NB_ARGS(strtok,2)
#define __polyspace_no_strtok
#endif /* !TEST_NB_ARGS(strtok,2) */
#if defined(__polyspace_strerror_nb_args) && !TEST_NB_ARGS(strerror,1)
#define __polyspace_no_strerror
#endif /* !TEST_NB_ARGS(strerror,1) */
#if defined(__polyspace_strdup_nb_args) && !TEST_NB_ARGS(strdup,1)
#define __polyspace_no_strdup
#endif /* !TEST_NB_ARGS(strdup,1) */
#if defined(__polyspace_strndup_nb_args) && !TEST_NB_ARGS(strndup,2)
#define __polyspace_no_strndup
#endif /* !TEST_NB_ARGS(strndup,2) */
#if defined(__polyspace_clock_nb_args) && !TEST_NB_ARGS(clock,0)
#define __polyspace_no_clock
#endif /* !TEST_NB_ARGS(clock,0) */
#if defined(__polyspace_difftime_nb_args) && !TEST_NB_ARGS(difftime,2)
#define __polyspace_no_difftime
#endif /* !TEST_NB_ARGS(difftime,2) */
#if defined(__polyspace_mktime_nb_args) && !TEST_NB_ARGS(mktime,1)
#define __polyspace_no_mktime
#endif /* !TEST_NB_ARGS(mktime,1) */
#if defined(__polyspace_time_nb_args) && !TEST_NB_ARGS(time,1)
#define __polyspace_no_time
#endif /* !TEST_NB_ARGS(time,1) */
#if defined(__polyspace_asctime_nb_args) && !TEST_NB_ARGS(asctime,1)
#define __polyspace_no_asctime
#endif /* !TEST_NB_ARGS(asctime,1) */
#if defined(__polyspace_ctime_nb_args) && !TEST_NB_ARGS(ctime,1)
#define __polyspace_no_ctime
#endif /* !TEST_NB_ARGS(ctime,1) */
#if defined(__polyspace_gmtime_nb_args) && !TEST_NB_ARGS(gmtime,1)
#define __polyspace_no_gmtime
#endif /* !TEST_NB_ARGS(gmtime,1) */
#if defined(__polyspace_localtime_nb_args) && !TEST_NB_ARGS(localtime,1)
#define __polyspace_no_localtime
#endif /* !TEST_NB_ARGS(localtime,1) */
#if defined(__polyspace_strftime_nb_args) && !TEST_NB_ARGS(strftime,4)
#define __polyspace_no_strftime
#endif /* !TEST_NB_ARGS(strftime,4) */
#if defined(__polyspace_bcmp_nb_args) && !TEST_NB_ARGS(bcmp,3)
#define __polyspace_no_bcmp
#endif /* !TEST_NB_ARGS(bcmp,3) */
#if defined(__polyspace_setgid_nb_args) && !TEST_NB_ARGS(setgid,1)
#define __polyspace_no_setgid
#endif /* !TEST_NB_ARGS(setgid,1) */
#if defined(__polyspace_chdir_nb_args) && !TEST_NB_ARGS(chdir,1)
#define __polyspace_no_chdir
#endif /* !TEST_NB_ARGS(chdir,1) */
#if defined(__polyspace_chown_nb_args) && !TEST_NB_ARGS(chown,3)
#define __polyspace_no_chown
#endif /* !TEST_NB_ARGS(chown,3) */
#if defined(__polyspace_close_nb_args) && !TEST_NB_ARGS(close,1)
#define __polyspace_no_close
#endif /* !TEST_NB_ARGS(close,1) */
#if defined(__polyspace_fchdir_nb_args) && !TEST_NB_ARGS(fchdir,1)
#define __polyspace_no_fchdir
#endif /* !TEST_NB_ARGS(fchdir,1) */
#if defined(__polyspace_fchown_nb_args) && !TEST_NB_ARGS(fchown,3)
#define __polyspace_no_fchown
#endif /* !TEST_NB_ARGS(fchown,3) */
#if defined(__polyspace_fork_nb_args) && !TEST_NB_ARGS(fork,0)
#define __polyspace_no_fork
#endif /* !TEST_NB_ARGS(fork,0) */
#if defined(__polyspace_fsync_nb_args) && !TEST_NB_ARGS(fsync,1)
#define __polyspace_no_fsync
#endif /* !TEST_NB_ARGS(fsync,1) */
#if defined(__polyspace_gethostid_nb_args) && !TEST_NB_ARGS(gethostid,0)
#define __polyspace_no_gethostid
#endif /* !TEST_NB_ARGS(gethostid,0) */
#if defined(__polyspace_getlogin_nb_args) && !TEST_NB_ARGS(getlogin,0)
#define __polyspace_no_getlogin
#endif /* !TEST_NB_ARGS(getlogin,0) */
#if defined(__polyspace_getuid_nb_args) && !TEST_NB_ARGS(getuid,0)
#define __polyspace_no_getuid
#endif /* !TEST_NB_ARGS(getuid,0) */
#if defined(__polyspace_geteuid_nb_args) && !TEST_NB_ARGS(geteuid,0)
#define __polyspace_no_geteuid
#endif /* !TEST_NB_ARGS(geteuid,0) */
#if defined(__polyspace_getgid_nb_args) && !TEST_NB_ARGS(getgid,0)
#define __polyspace_no_getgid
#endif /* !TEST_NB_ARGS(getgid,0) */
#if defined(__polyspace_getegid_nb_args) && !TEST_NB_ARGS(getegid,0)
#define __polyspace_no_getegid
#endif /* !TEST_NB_ARGS(getegid,0) */
#if defined(__polyspace_lchown_nb_args) && !TEST_NB_ARGS(lchown,3)
#define __polyspace_no_lchown
#endif /* !TEST_NB_ARGS(lchown,3) */
#if defined(__polyspace_link_nb_args) && !TEST_NB_ARGS(link,2)
#define __polyspace_no_link
#endif /* !TEST_NB_ARGS(link,2) */
#if defined(__polyspace_pause_nb_args) && !TEST_NB_ARGS(pause,0)
#define __polyspace_no_pause
#endif /* !TEST_NB_ARGS(pause,0) */
#if defined(__polyspace_pipe_nb_args) && !TEST_NB_ARGS(pipe,1)
#define __polyspace_no_pipe
#endif /* !TEST_NB_ARGS(pipe,1) */
#if defined(__polyspace_read_nb_args) && !TEST_NB_ARGS(read,3)
#define __polyspace_no_read
#endif /* !TEST_NB_ARGS(read,3) */
#if defined(__polyspace_pread_nb_args) && !TEST_NB_ARGS(pread,4)
#define __polyspace_no_pread
#endif /* !TEST_NB_ARGS(pread,4) */
#if defined(__polyspace_resolvepath_nb_args) && !TEST_NB_ARGS(resolvepath,3)
#define __polyspace_no_resolvepath
#endif /* !TEST_NB_ARGS(resolvepath,3) */
#if defined(__polyspace_setuid_nb_args) && !TEST_NB_ARGS(setuid,1)
#define __polyspace_no_setuid
#endif /* !TEST_NB_ARGS(setuid,1) */
#if defined(__polyspace_setegid_nb_args) && !TEST_NB_ARGS(setegid,1)
#define __polyspace_no_setegid
#endif /* !TEST_NB_ARGS(setegid,1) */
#if defined(__polyspace_seteuid_nb_args) && !TEST_NB_ARGS(seteuid,1)
#define __polyspace_no_seteuid
#endif /* !TEST_NB_ARGS(seteuid,1) */
#if defined(__polyspace_sleep_nb_args) && !TEST_NB_ARGS(sleep,1)
#define __polyspace_no_sleep
#endif /* !TEST_NB_ARGS(sleep,1) */
#if defined(__polyspace_sync_nb_args) && !TEST_NB_ARGS(sync,0)
#define __polyspace_no_sync
#endif /* !TEST_NB_ARGS(sync,0) */
#if defined(__polyspace_symlink_nb_args) && !TEST_NB_ARGS(symlink,2)
#define __polyspace_no_symlink
#endif /* !TEST_NB_ARGS(symlink,2) */
#if defined(__polyspace_ttyname_nb_args) && !TEST_NB_ARGS(ttyname,1)
#define __polyspace_no_ttyname
#endif /* !TEST_NB_ARGS(ttyname,1) */
#if defined(__polyspace_unlink_nb_args) && !TEST_NB_ARGS(unlink,1)
#define __polyspace_no_unlink
#endif /* !TEST_NB_ARGS(unlink,1) */
#if defined(__polyspace_vfork_nb_args) && !TEST_NB_ARGS(vfork,0)
#define __polyspace_no_vfork
#endif /* !TEST_NB_ARGS(vfork,0) */
#if defined(__polyspace_write_nb_args) && !TEST_NB_ARGS(write,3)
#define __polyspace_no_write
#endif /* !TEST_NB_ARGS(write,3) */
#if defined(__polyspace_pwrite_nb_args) && !TEST_NB_ARGS(pwrite,4)
#define __polyspace_no_pwrite
#endif /* !TEST_NB_ARGS(pwrite,4) */
#if defined(__polyspace_creat_nb_args) && !TEST_NB_ARGS(creat,2)
#define __polyspace_no_creat
#endif /* !TEST_NB_ARGS(creat,2) */
#if defined(__polyspace_sigsetjmp_nb_args) && !TEST_NB_ARGS(sigsetjmp,2)
#define __polyspace_no_sigsetjmp
#endif /* !TEST_NB_ARGS(sigsetjmp,2) */
#if defined(__polyspace___sigsetjmp_nb_args) && !TEST_NB_ARGS(__sigsetjmp,2)
#define __polyspace_no___sigsetjmp
#endif /* !TEST_NB_ARGS(__sigsetjmp,2) */
#if defined(__polyspace_siglongjmp_nb_args) && !TEST_NB_ARGS(siglongjmp,2)
#define __polyspace_no_siglongjmp
#endif /* !TEST_NB_ARGS(siglongjmp,2) */
#if defined(__polyspace_signal_nb_args) && !TEST_NB_ARGS(signal,2)
#define __polyspace_no_signal
#endif /* !TEST_NB_ARGS(signal,2) */
#if defined(__polyspace_raise_nb_args) && !TEST_NB_ARGS(raise,1)
#define __polyspace_no_raise
#endif /* !TEST_NB_ARGS(raise,1) */

      /* open can take 3 or 2 parameters */
#if defined(__polyspace_open_nb_args) && !(TEST_NB_ARGS(open,2) || TEST_NB_ARGS(open,3))
#define __polyspace_no_open
#endif /* !TEST_NB_ARGS(open,3) */

#if defined(__polyspace___polyspace_va_arg_incr) && !defined(__polyspace_no___polyspace_va_arg_incr) 
#ifndef MAX_VARARGS
#define MAX_VARARGS 64
#endif
    va_list __polyspace_va_arg_incr(va_list *ap) { /* returns the content of a cell; i.e an address on the original argument */

        assert(_polyspace_vararg_position < MAX_VARARGS && _polyspace_vararg_position >= 0);
        return ap[_polyspace_vararg_position++];




    }
#endif /* __polyspace_polyspace_va_arg_incr */

#if defined(__polyspace___polyspace_va_arg_start) && !defined(__polyspace_no___polyspace_va_arg_start)
    void __polyspace_va_arg_start(void) {} ;
#endif /* __polyspace_polyspace_va_arg_start */

#if defined(__polyspace___polyspace_va_arg_copy) && !defined(__polyspace_no___polyspace_va_arg_copy)
    void __polyspace_va_arg_copy(va_list ap) {} ;
#endif /* __polyspace_polyspace_va_arg_copy */

#if defined(__polyspace___polyspace_va_arg_end) && !defined(__polyspace_no___polyspace_va_arg_end)
      void __polyspace_va_arg_end(va_list ap) {} ;
#endif /* __polyspace_polyspace_va_arg_end */

#ifdef __cplusplus
    }
#endif

#ifndef POLYSPACE_NO_STANDARD_STUBS

#if __polyspace_use_customer_include
    /* for size_t definition */
#include "__polyspace__stddef.h"
    #endif

#ifndef EOF
    #define EOF -1
#endif

    /* limits.h */
#ifndef UCHAR_MAX
    /* __SCHAR_MAX__ defined by C++ FE */
    #ifdef __SCHAR_MAX__
        #define UCHAR_MAX (__SCHAR_MAX__* 2u + 1u)
    #else
        #ifdef PST_BUILTIN_TARGET_UCHAR_MAX
            #define UCHAR_MAX PST_BUILTIN_TARGET_UCHAR_MAX
        #else
            #define UCHAR_MAX ((unsigned char)~0U)
        #endif
    #endif
#endif

    /* stdlib.h */

    /* When standard stubs are activated, macro for errno is deactivated. Declare it as a simple integer. */
#undef errno

#ifdef __cplusplus
    extern "C" int errno = 0;
#else
    #if !defined(POLYSPACE_INSTRUMENT)
        int errno;
    #else
        extern int errno;
    #endif
#endif /* !__cplusplus */

#ifndef ERANGE
    #define ERANGE _polyspace_random_int()
#endif
#ifndef EDOM
    #define EDOM _polyspace_random_int()
#endif

#ifdef __cplusplus
    extern "C" {
#endif

#if !defined(POLYSPACE_INSTRUMENT)
    static char _polyspace_random_char()
    {
        static volatile char random;
        return random;
    }
#endif

#if !defined(POLYSPACE_INSTRUMENT)
    static unsigned char _polyspace_random_uchar()
    {
        static volatile unsigned char random;
        return random;
    }
#endif

#if !defined(POLYSPACE_INSTRUMENT)
    static int _polyspace_random_int()
    {
        static volatile int random;
        return random;
    }
#endif

#if !defined(POLYSPACE_INSTRUMENT)
    static long _polyspace_random_long()
    {
        static volatile long random;
        return random;
    }
#endif

#if !defined(POLYSPACE_INSTRUMENT)
    static unsigned long _polyspace_random_ulong()
    {
        static volatile unsigned long random;
        return random;
    }
#endif

    static double _polyspace_random_double()
    {
        static volatile double random;
        return random;
    }

#if defined(__polyspace_fclose) || defined(__polyspace_fflush) || defined(__polyspace_tmpfile) || \
    defined(__polyspace_fopen) || defined(__polyspace_freopen) || defined(__polyspace_vfprintf) || \
    defined(__polyspace_fprintf) || defined(__polyspace_fscanf) || defined(__polyspace_fgetc) || \
    defined(__polyspace_fgets) || defined(__polyspace_fputc) || defined(__polyspace_fputs) || \
    defined(__polyspace_getc) || defined(__polyspace_putc) || defined(__polyspace_ungetc) || \
    defined(__polyspace_fread) || defined(__polyspace_fwrite) || defined(__polyspace_fgetpos) || \
    defined(__polyspace_fseek) || defined(__polyspace_fsetpos) || defined(__polyspace_ftell) || \
    defined(__polyspace_rewind) || defined(__polyspace_clearerr) || defined(__polyspace__filbuf) || \
    defined(__polyspace___filbuf) || defined(__polyspace__IO_getc) || defined(__polyspace___flsbuf) || \
    defined(__polyspace__flsbuf) || defined(__polyspace__IO_putc) || defined(__polyspace_stdout) || \
    defined(__polyspace_stdin) || defined(__polyspace_stderr) || defined(__polyspace__iob) || \
    defined(__polyspace___iob) ||  defined (__polyspace__lastbuf) ||  defined (__polyspace_ferror) || \
    defined(__polyspace_setvbuf) || defined(__polyspace_setbuf) || defined(__polyspace_feof) || \
    defined(__polyspace_fileno)
#if !defined(POLYSPACE_INSTRUMENT)

#if defined(PST_HAS_STDIO_H) && !defined(PST_STDIO_IS_ALREADY_INCLUDED) && __polyspace_use_customer_include
#include <stdio.h> //For FILE
#define PST_STDIO_IS_ALREADY_INCLUDED
#endif

    static FILE _polyspace_random_FILE()
    {
        static volatile FILE random;
    #ifdef __cplusplus
        return *(FILE*) &random; /* REM : C++ need a cast */
    #else
        return random;
    #endif
    }
#endif
#endif

#if defined(__polyspace_setvbuf) || defined(__polyspace_fgets) || \
    defined(__polyspace_fread) || defined(__polyspace_fwrite) || \
    defined(__polyspace_bsearch) || defined(__polyspace_qsort) || \
    defined(__polyspace_mblen) || defined(__polyspace_mbtowc) || \
    defined(__polyspace_wctomb) || defined(__polyspace_mbstowcs) || \
    defined(__polyspace_wcstombs) || defined(__polyspace_realloc) || \
    defined(__polyspace_strxfrm) || defined(__polyspace_strcspn) || \
    defined(__polyspace_strspn) || defined(__polyspace_strftime) || \
    defined(__polyspace_pwrite) || defined(__polyspace_write) || \
    defined(__polyspace_resolvepath)
#if !defined(POLYSPACE_INSTRUMENT)

    static size_t _polyspace_random_size_t() {
        static volatile size_t random;
        return random;
    }
#endif
#endif

#ifdef __cplusplus
    } /* extern "C" */
#endif


#if defined(__polyspace_setbuf) ||  defined(__polyspace_setvbuf)
    static char *__polyspace_file_buffer[32];
#define SET_ASSOCIATED_FILE_BUFFER(X) \
    {__polyspace_file_buffer[_polyspace_random_uchar() % 32]=(X);}

#define WRITE_ASSOCIATED_FILE_BUFFER() \
    {if (__polyspace_file_buffer[_polyspace_random_uchar() % 32]) \
            __polyspace_file_buffer[_polyspace_random_uchar() % 32][_polyspace_random_int()] \
                = _polyspace_random_char();\
    }
#else
#define SET_ASSOCIATED_FILE_BUFFER(X)
#define WRITE_ASSOCIATED_FILE_BUFFER()
#endif

/* Macros used to generate assertions on the stubbed functions parameters. */
#define ASSERT_IS_WRITABLE_POINTER(type, ptr)       \
  __ps_builtin_dereference_check(ptr, sizeof(type))

#define ASSERT_IS_READABLE_POINTER(type, ptr)          \
  {                                                    \
    __ps_builtin_dereference_check(ptr, sizeof(type)); \
    __ps_builtin_data_table_read_ptr(ptr) ;            \
  }

#define ASSERT_IS_WRITABLE_ARRAY(type, ptr, size)               \
  {                                                             \
    __ps_builtin_dereference_check(ptr, sizeof(type) * (size)); \
  }

#define ASSERT_IS_READABLE_ARRAY(type, ptr, size)               \
  {                                                             \
    __ps_builtin_dereference_check(ptr, sizeof(type) * (size)); \
    __ps_builtin_data_table_read_ptr(ptr) ;                     \
  }

#define ASSERT_IS_WRITABLE_ARRAY_EXCEPT_ZERO(type, ptr, size)           \
  {                                                                     \
    type __one_byte__;                                                  \
    const void *__s0__ = (size) == 0 ? &__one_byte__ : (ptr);           \
    unsigned long __n0__ = (size) == 0 ? 1 : (size);                    \
    __ps_builtin_dereference_check(__s0__, sizeof(type) * __n0__);      \
  }

#define ASSERT_IS_READABLE_ARRAY_EXCEPT_ZERO(type, ptr, size)           \
  {         \
    type __one_byte__;                                                  \
    const void *__s0__ = (size) == 0 ? &__one_byte__ : (ptr);           \
    unsigned long __n0__ = (size) == 0 ? 1 : (size);                    \
    __ps_builtin_dereference_check(__s0__, sizeof(type) * __n0__); \
    __ps_builtin_data_table_read_ptr(__s0__);                           \
  }

#define ASSERT_IS_VALID_STRING(str)             \
  {                                             \
    __ps_builtin_assert_is_valid_string(str);   \
    __ps_builtin_data_table_read_ptr(str);      \
  }
#define ASSERT_IS_BOUNDED_VALID_STRING(str, bound)             \
  {                                                            \
    __ps_builtin_assert_is_bounded_valid_string(str, bound);   \
    __ps_builtin_data_table_read_ptr(str);                     \
  }

#define ASSERT_IS_VALID_CONDITION(condition) assert(condition)

    /* C/4992 : return err and set errno if fatal error */
#define RET_ERROR_AND_SET_ERRNO(ERR) \
    {if (_polyspace_random_int()) { \
            int tmp = _polyspace_random_int(); \
            APPLY_CONSTRAINT(tmp>0); \
            errno=tmp; RETURN(ERR); } \
    }

#define expected_range_message(ARG, STR)          \
    (ARG " is within expected range: " STR,   \
     ARG " may not be within expected range: " STR,  \
     ARG " is not within expected range: " STR)

#define expected_range_or_single_value_message(ARG, STR, V)  \
    (ARG " is within either expected range: " STR " or " V,  \
     ARG " may not be within either expected range: " STR " or " V, \
     ARG " is not within either expected range: " STR " or " V)

#define expected_value_message(ARG, STR)          \
    (ARG " is an expected value: " STR,    \
     ARG " may not be an expected value: " STR,   \
     ARG " is not an expected value: " STR)

#define valid_string_message(ARG)      \
    (ARG " is a valid string",         \
     ARG " may not be a valid string", \
     ARG " is not a valid string")

#define null_or_valid_string_message(ARG)                 \
    (ARG " is a null pointer or a valid string",          \
     ARG " may not be a valid string",                    \
     ARG " is neither a null pointer nor a valid string")

#define bounded_valid_string_message(STR_ARG, SIZE_ARG)                      \
    (STR_ARG " is null-terminated or initialized up to " SIZE_ARG,         \
     STR_ARG " may not be null-terminated or initialized up to " SIZE_ARG, \
     STR_ARG " is not null-terminated or initialized up to " SIZE_ARG)

#define writable_pointer_message(ARG)                        \
    (ARG " is a writable pointer",         \
     ARG " may not be a writable pointer", \
     ARG " is not a writable pointer")

#define writable_array_message(ARG)                        \
    (ARG " is a writable pointer with the given size",         \
     ARG " may not be a writable pointer with the given size", \
     ARG " is not a writable pointer with the given size")

#define readable_pointer_message(ARG)             \
    (ARG " is a readable pointer",                  \
     ARG " may not be a readable pointer",          \
     ARG " is not a readable pointer")

#define non_null_pointer_message(ARG)             \
    (ARG " is not a null pointer",                  \
     ARG " may be a null pointer",    \
     ARG " is a null pointer")

#define returned_value_numeric                              \
    ("value returned fits in range of returned type",         \
     "value returned may not fit in range of returned type",  \
     "value returned does not fit in range of returned type")

#define green_orange_red_message(G, O, R)   \
    (G, O, R)

#define arg_green_orange_red_message(ARG, G, O, R, SUFF) \
    (ARG " " G SUFF, ARG " " O SUFF, ARG " " R SUFF)

#define STD_LIB_type(type)                      \
    (type)

#define valid_condition_message(CND)              \
    (CND)

#define INT_PART(X) ((double)(int)X)

#if !defined(NO_POLYSPACE_COMPLEX) && defined(POLYSPACE_COMPLEX)
#include "__polyspace__c99_complex.c"
#endif /* NO_POLYSPACE_COMPLEX */

    /*********************************************************************** ctype.h */
#if defined(__polyspace_isalnum)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_isalnum)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_isalnum)
    #pragma POLYSPACE_INLINE_CHECKS "isalnum"
#endif /* !NO_CHECKS_INLINING */
#undef isalnum


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(isalnum, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(isalnum, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif //CUSTOM_STUB_TYPE(isalnum, 1)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, isalnum, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "isalnum"
#else
#pragma POLYSPACE_NO_INSTRUMENT "isalnum"
#endif // POLYSPACE_INSTRUMENT
#endif /* __polyspace_isalnum */

#if defined(__polyspace_isalpha)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_isalpha)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_isalpha)
    #pragma POLYSPACE_INLINE_CHECKS "isalpha"
#endif /* !NO_CHECKS_INLINING */
#undef isalpha


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(isalpha, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(isalpha, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, isalpha, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "isalpha"
#else
#pragma POLYSPACE_NO_INSTRUMENT "isalpha"
#endif
#endif /* __polyspace_isalpha */

#if defined(__polyspace_iscntrl)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_iscntrl)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_iscntrl)
    #pragma POLYSPACE_INLINE_CHECKS "iscntrl"
#endif /* !NO_CHECKS_INLINING */
#undef iscntrl


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(iscntrl, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(iscntrl, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, iscntrl, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "iscntrl"
#else
#pragma POLYSPACE_NO_INSTRUMENT "iscntrl"
#endif
#endif /* __polyspace_iscntrl */

#if defined(__polyspace_isdigit)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_isdigit)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_isdigit)
    #pragma POLYSPACE_INLINE_CHECKS "isdigit"
#endif /* !NO_CHECKS_INLINING */
#undef isdigit


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(isdigit, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(isdigit, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, isdigit, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "isdigit"
#else
#pragma POLYSPACE_NO_INSTRUMENT "isdigit"
#endif
#endif /* __polyspace_isdigit */

#if defined(__polyspace_isgraph)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_isgraph)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_isgraph)
    #pragma POLYSPACE_INLINE_CHECKS "isgraph"
#endif /* !NO_CHECKS_INLINING */
#undef isgraph


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(isgraph, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(isgraph, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, isgraph, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "isgraph"
#else
#pragma POLYSPACE_NO_INSTRUMENT "isgraph"
#endif
#endif /* __polyspace_isgraph */

#if defined(__polyspace_islower)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_islower)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_islower)
    #pragma POLYSPACE_INLINE_CHECKS "islower"
#endif /* !NO_CHECKS_INLINING */
#undef islower


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(islower, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(islower, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, islower, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "islower"
#else
#pragma POLYSPACE_NO_INSTRUMENT "islower"
#endif
#endif /* __polyspace_islower */

// Note: isblank is C99
#if defined(__polyspace_isblank)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_isblank)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_isblank)
    #pragma POLYSPACE_INLINE_CHECKS "isblank"
#endif /* !NO_CHECKS_INLINING */
#undef isblank


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(isblank, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(isblank, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, isblank, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 1999

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "isblank"
#else
#pragma POLYSPACE_NO_INSTRUMENT "isblank"
#endif
#endif /* __polyspace_isblank */

#if defined(__polyspace_isprint)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_isprint)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_isprint)
    #pragma POLYSPACE_INLINE_CHECKS "isprint"
#endif /* !NO_CHECKS_INLINING */
#undef isprint


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(isprint, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(isprint, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, isprint, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "isprint"
#else
#pragma POLYSPACE_NO_INSTRUMENT "isprint"
#endif
#endif /* __polyspace_isprint */

#if defined(__polyspace_ispunct)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_ispunct)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_ispunct)
    #pragma POLYSPACE_INLINE_CHECKS "ispunct"
#endif /* !NO_CHECKS_INLINING */
#undef ispunct


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(ispunct, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(ispunct, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, ispunct, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "ispunct"
#else
#pragma POLYSPACE_NO_INSTRUMENT "ispunct"
#endif
#endif /* __polyspace_ispunct */

#if defined(__polyspace_isspace)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_isspace)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_isspace)
    #pragma POLYSPACE_INLINE_CHECKS "isspace"
#endif /* !NO_CHECKS_INLINING */
#undef isspace


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(isspace, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(isspace, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, isspace, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "isspace"
#else
#pragma POLYSPACE_NO_INSTRUMENT "isspace"
#endif
#endif /* __polyspace_isspace */

#if defined(__polyspace_isupper)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_isupper)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_isupper)
    #pragma POLYSPACE_INLINE_CHECKS "isupper"
#endif /* !NO_CHECKS_INLINING */
#undef isupper


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(isupper, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(isupper, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, isupper, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "isupper"
#else
#pragma POLYSPACE_NO_INSTRUMENT "isupper"
#endif
#endif /* __polyspace_isupper */

#if defined(__polyspace_isxdigit)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_isxdigit)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_isxdigit)
    #pragma POLYSPACE_INLINE_CHECKS "isxdigit"
#endif /* !NO_CHECKS_INLINING */
#undef isxdigit


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(isxdigit, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(isxdigit, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, isxdigit, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "isxdigit"
#else
#pragma POLYSPACE_NO_INSTRUMENT "isxdigit"
#endif
#endif /* __polyspace_isxdigit */

#if defined(__polyspace_tolower)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_tolower)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_tolower)
    #pragma POLYSPACE_INLINE_CHECKS "tolower"
#endif /* !NO_CHECKS_INLINING */
#undef tolower


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(tolower, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(tolower, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, tolower, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "tolower"
#else
#pragma POLYSPACE_NO_INSTRUMENT "tolower"
#endif
#endif /* __polyspace_tolower */

#if defined(__polyspace_toupper)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_toupper)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_toupper)
    #pragma POLYSPACE_INLINE_CHECKS "toupper"
#endif /* !NO_CHECKS_INLINING */
#undef toupper


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(toupper, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(toupper, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, toupper, int, c, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.3 Character handling <ctype.h> (page 102)

           In all cases the argument is an int, the value of which shall be representable
           as an 'unsigned char' or shall equal the value of the macro 'EOF'. If the
           argument has any other value, the behaviour is undefined.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point c
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_or_single_value_message("argument", "[0..UCHAR_MAX]", "EOF")
        ASSERT_IS_VALID_CONDITION((c >= 0 && c <= UCHAR_MAX) || c == EOF);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "toupper"
#else
#pragma POLYSPACE_NO_INSTRUMENT "toupper"
#endif
#endif /* __polyspace_toupper */


    /*********************************************************************** locale.h */
#if (defined(__polyspace_setlocale) && !defined(__polyspace_no_setlocale)) || (defined(__polyspace_localeconv) && !defined(__polyspace_no_localeconv))
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_setlocale)
    #pragma POLYSPACE_INLINE_CHECKS "setlocale"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <locale.h>
#endif
#ifdef __OS_VXWORKS
    extern lconv _locale;
#else
    static lconv _polyspace_locale;
#endif


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(setlocale, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(setlocale, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char*, setlocale, int, category, const char*, locale, NO_VARARGS, __PST_THROW)
    {
        char *ret;
        int i, len;
        volatile lconv random_locale;
        /*
           If 'locale' is not null and is not a valid string, the behaviour is
           undefined.

           If a pointer to a string is given for 'locale' and the selection can be
           honored, the 'setlocale' function returns a pointer to the string
           associated with the specified 'category' for the new locale. If the
           selection cannot be honored, the 'setlocale' function returns a null
           pointer and the program's locale is not changed.

           A null pointer for 'locale' causes the 'setlocale' function to return
           a pointer to the string associated with the 'category' for the program's
           current locale: the program's locale is not changed.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point locale
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info null_or_valid_string_message("second argument")
        if (locale != (char *) 0) ASSERT_IS_VALID_STRING(locale);
#pragma polyspace_check_info

        RET_ERROR_AND_SET_ERRNO((char *)0);

        if (locale != (char *) 0) {
        #ifdef __OS_VXWORKS
            /*
              VxWorks defines 'localeconv' as a macro which returns _locale. So, it is
              necessary to model that this variable is modified by 'setlocale'.
            */
        #ifdef __cplusplus
            _locale = *(lconv*)&random_locale; /* C++ need cast to suppress volatile */
        #else
            _locale = random_locale;
        #endif
        #else /* __OS_VXWORKS */
        #ifdef __cplusplus
            _polyspace_locale = *(lconv*)&random_locale; /* C++ need cast to suppress volatile */
        #else
            _polyspace_locale = random_locale;
        #endif
        #endif /* __OS_VXWORKS */
        }
        ret = (char*)__ps_builtin_random_string();
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#ifndef __OS_VXWORKS
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_localeconv)
    #pragma POLYSPACE_INLINE_CHECKS "localeconv"
#endif /* !NO_CHECKS_INLINING */


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(localeconv, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(localeconv, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, lconv*, localeconv, NO_VARARGS, __PST_THROW)
    {
        volatile lconv random_locale;
        /*
          The 'localeconv' function sets the components of an object with type
          'lconv' with values appropriate for the formatting of numeric
          quantities (monetary and otherwise) according to the rules of the
          current locale.
        */
    #ifdef __cplusplus
        _polyspace_locale = *(lconv*)&random_locale;
    #else
        _polyspace_locale = random_locale;
    #endif
        /*
          The 'localeconv' function returns a pointer to the filled-in object.
        */
        RETURN(&_polyspace_locale);
    }
    PST_STUB_C_DEF_END
#endif /* __OS_VXWORKS */

#else
#pragma POLYSPACE_NO_INSTRUMENT "setlocale"
#pragma POLYSPACE_NO_INSTRUMENT "localeconv"
#endif
#endif /* __polyspace_setlocale || __polyspace_localeconv */

    /*********************************************************************** math.h */
#if defined(__polyspace_frexp)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_frexp)
#else
#pragma POLYSPACE_NO_INSTRUMENT "frexp"
#endif
#endif /* __polyspace_frexp */

#if defined(__polyspace_ldexp)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_ldexp)
#else
#pragma POLYSPACE_NO_INSTRUMENT "ldexp"
#endif
#endif /* __polyspace_ldexp */

#if defined(__polyspace_modf)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_modf)
#else
#pragma POLYSPACE_NO_INSTRUMENT "modf"
#endif
#endif /* __polyspace_modf */

#if defined(__polyspace_ceil) && !defined(__polyspace_no_ceil)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "ceil"
#endif
#endif /* __polyspace_ceil */

#if defined(__polyspace_trunc) && !defined(__polyspace_no_trunc)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "trunc"
#endif
#endif /* __polyspace_trunc */

#if defined(__polyspace_round) && !defined(__polyspace_no_round)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "round"
#endif
#endif /* __polyspace_round */

#if defined(__polyspace_fdim) && !defined(__polyspace_no_fdim)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "fdim"
#endif
#endif /* __polyspace_fdim */

#if defined(__polyspace_fma) && !defined(__polyspace_no_fma)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "fma"
#endif
#endif /* __polyspace_fma */

#if defined(__polyspace_fmax) && !defined(__polyspace_no_fmax)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "fmax"
#endif
#endif /* __polyspace_fmax */

#if defined(__polyspace_fmin) && !defined(__polyspace_no_fmin)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "fmin"
#endif
#endif /* __polyspace_fmin */

#if defined(__polyspace_fabs) && !defined(__polyspace_no_fabs)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "fabs"
#endif
#endif /* __polyspace_fabs */

#if defined(__polyspace_floor) && !defined(__polyspace_no_floor)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "floor"
#endif
#endif /* __polyspace_floor */

#if defined(__polyspace_fmod) && !defined(__polyspace_no_fmod)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "fmod"
#endif
#endif /* __polyspace_fmod */

#if defined(__polyspace_sqrt) && !defined(__polyspace_no_sqrt)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "sqrt"
#endif
#endif /* __polyspace_sqrt */

#if defined(__polyspace_cbrt) && !defined(__polyspace_no_cbrt)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "cbrt"
#endif
#endif /* __polyspace_cbrt */

#if defined(__polyspace_pow) && !defined(__polyspace_no_pow)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "pow"
#endif
#endif /* __polyspace_pow */

#if defined(__polyspace_exp) && !defined(__polyspace_no_exp)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "exp"
#endif
#endif /* __polyspace_exp */

#if defined(__polyspace_exp2) && !defined(__polyspace_no_exp2)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "exp2"
#endif
#endif /* __polyspace_exp2 */

#if defined(__polyspace_expm1) && !defined(__polyspace_no_expm1)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "expm1"
#endif
#endif /* __polyspace_expm1 */

#if defined(__polyspace_log) && !defined(__polyspace_no_log)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "log"
#endif
#endif /* __polyspace_log */

#if defined(__polyspace_logb) && !defined(__polyspace_no_logb)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "logb"
#endif
#endif /* __polyspace_logb */

#if defined(__polyspace_log10) && !defined(__polyspace_no_log10)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "log10"
#endif
#endif /* __polyspace_log10 */

#if defined(__polyspace_log1p) && !defined(__polyspace_no_log1p)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "log1p"
#endif
#endif /* __polyspace_log1p */

#if defined(__polyspace_nexttoward) && !defined(__polyspace_no_nexttoward)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "nexttoward"
#endif
#endif /* __polyspace_nexttoward */

#if defined(__polyspace_nextafter) && !defined(__polyspace_no_nextafter)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "nextafter"
#endif
#endif /* __polyspace_nextafter */

#ifdef M_PI
    #define PI M_PI
#else
    #define PI 3.14159265358979323846
#endif

#ifdef M_PI_2
    #define PI_2 M_PI_2
#else
    #define PI_2 1.57079632679489661923
#endif

#if defined(__polyspace_cos) && !defined(__polyspace_no_cos)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "cos"
#endif
#endif /* __polyspace_cos */

#if defined(__polyspace_sin) && !defined(__polyspace_no_sin)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "sin"
#endif
#endif /* __polyspace_sin */

#if defined(__polyspace_tan) && !defined(__polyspace_no_tan)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "tan"
#endif
#endif /* __polyspace_tan */

#if defined(__polyspace_acos) && !defined(__polyspace_no_acos)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "acos"
#endif
#endif /* __polyspace_acos */

#if defined(__polyspace_asin) && !defined(__polyspace_no_asin)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "asin"
#endif
#endif /* __polyspace_asin */

#if defined(__polyspace_atan) && !defined(__polyspace_no_atan)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "atan"
#endif
#endif /* __polyspace_atan */

#if defined(__polyspace_atan2) && !defined(__polyspace_no_atan2)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "atan2"
#endif
#endif /* __polyspace_atan2 */

#if defined(__polyspace_cosh) && !defined(__polyspace_no_cosh)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "cosh"
#endif
#endif /* __polyspace_cosh */

#if defined(__polyspace_sinh) && !defined(__polyspace_no_sinh)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "sinh"
#endif
#endif /* __polyspace_sinh */

#if defined(__polyspace_tanh) && !defined(__polyspace_no_tanh)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "tanh"
#endif
#endif /* __polyspace_tanh */

#if defined(__polyspace_acosh) && !defined(__polyspace_no_acosh)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "acosh"
#endif
#endif /* __polyspace_acosh */

#if defined(__polyspace_asinh) && !defined(__polyspace_no_asinh)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "asinh"
#endif
#endif /* __polyspace_asinh */

#if defined(__polyspace_atanh) && !defined(__polyspace_no_atanh)
#if !defined(POLYSPACE_INSTRUMENT)
#else
#pragma POLYSPACE_NO_INSTRUMENT "atanh"
#endif
#endif /* __polyspace_atanh */

    /* C++/5818 : visual - specific setjmp is macro-ized in visual include as _setjmp */
#if defined(__polyspace__setjmp) && !defined(__polyspace_no__setjmp)
#if __polyspace_use_customer_include
    #include <setjmp.h>
#endif
#undef setjmp


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
#define RETURN(x) return (x)
    /*#endif*/
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, _setjmp, jmp_buf, env, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.6.1.1 The 'setjmp' macro (page 118)

           The 'setjmp' macro saves its calling environment in its 'jmp_buf'
           argument for later use by the 'longjmp' function.
        */
        /*
          If the return is from a direct invocation, the 'setjmp' macro
          returns the value zero.

          If the return is from a call to the 'longjmp' function, the 'setjmp'
          macro returns a nonzero value.
        */

#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "argument (context/environment buffer)"
#pragma Inspection_Point env
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info writable_pointer_message("argument (context/environment buffer)")
        ASSERT_IS_WRITABLE_POINTER(jmp_buf, env);
#pragma polyspace_check_info

    #ifdef PST_BUG_FINDER
        RETURN(_polyspace_random_int());
    #else
        /*
          Caution : 'setjmp' and 'longjmp' are not fully supported. The
          model assumes that 'setjmp' always returns 0 and that
          'longjmp' never returns. This makes it possible to analyze
          properly the nominal behaviour of an application, when
          the 'longjmp' calls are not reached, considering that
          reaching a 'longjmp' call is an error case.
        */
        RETURN(0);
    #endif
    }
    PST_STUB_C_DEF_END
#endif /* __polyspace__setjmp */

#if (defined(__polyspace_setjmp) && !defined(__polyspace_no_setjmp))
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_setjmp)
    #if (defined(__polyspace_setjmp) && !defined(__polyspace_no_setjmp))
        #pragma POLYSPACE_INLINE_CHECKS "setjmp"
    #else
        #pragma POLYSPACE_INLINE_CHECKS "_setjmp"
    #endif
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <setjmp.h>
#endif
#if (defined(__polyspace_setjmp) && !defined(__polyspace_no_setjmp))
    #undef setjmp
#endif


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN

#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
#define RETURN(x) return (x)
    /*#endif*/
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, setjmp, jmp_buf, env, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.6.1.1 The 'setjmp' macro (page 118)

           The 'setjmp' macro saves its calling environment in its 'jmp_buf'
           argument for later use by the 'longjmp' function.
        */
        /*
          If the return is from a direct invocation, the 'setjmp' macro
          returns the value zero.

          If the return is from a call to the 'longjmp' function, the 'setjmp'
          macro returns a nonzero value.
        */

#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "argument (context/environment buffer)"
#pragma Inspection_Point env
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info writable_pointer_message("argument (context/environment buffer)")
        ASSERT_IS_WRITABLE_POINTER(jmp_buf, env);
#pragma polyspace_check_info

    #ifdef PST_BUG_FINDER
        RETURN(_polyspace_random_int());
    #else
        /*
          Caution : 'setjmp' and 'longjmp' are not fully supported. The
          model assumes that 'setjmp' always returns 0 and that
          'longjmp' never returns. This makes it possible to analyze
          properly the nominal behaviour of an application, when
          the 'longjmp' calls are not reached, considering that
          reaching a 'longjmp' call is an error case.
        */
        RETURN(0);
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "setjmp"
#endif
#endif /* __polyspace_setjmp */

#if defined(__polyspace_longjmp) && !defined(__polyspace_no_longjmp)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_longjmp)
    #pragma POLYSPACE_INLINE_CHECKS "longjmp"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <setjmp.h>
#endif
#undef longjmp


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
    /* Do not adapt type.
#if CUSTOM_STUB_TYPE(longjmp, 2)
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
#define RETURN(x) RETURN_CUSTOM_TYPE(longjmp, x)
#else*/
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
#define RETURN(x) return (x)
    /*#endif*/
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, longjmp, jmp_buf, env, int, val, NO_VARARGS, __PST_THROW)
    {
        jmp_buf dummy;
        /*
           ISO/IEC 9899:1990 (E) : 7.6.2.1 The 'longjmp' function (page 119)

           The 'longjmp' macro restores the environment saved by the most
           recent invocation of the 'setjmp' macro in the same invocation of
           the program, with the corresponding 'jmp_buf' argument. If there
           has been no such invocation, or if the function containing the
           invocation of the 'setjmp' macro has terminated execution in the
           interim, the behaviour is undefined.

           Caution : 'setjmp' and 'longjmp' are not fully supported. The
           model assumes that 'setjmp' always returns 0 and that
           'longjmp' never returns. This makes it possible to analyze
           properly the nominal behaviour of an application, when
           the 'longjmp' calls are not reached, considering that
           reaching a 'longjmp' call is an error case.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (context/environment buffer)"
#pragma Inspection_Point env
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info readable_pointer_message("first argument (context/environment buffer)")
        *dummy = *env;
#pragma polyspace_check_info
        for(;;);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "longjmp"
#endif
#endif /* __polyspace_longjmp */


    /*********************************************************************** stdio.h */
    void **__polyspace_vararg;  /* just there to avoid compiling errors with varargs stubs */
    int __polyspace_nb_varargs; /* idem */

#if defined(__polyspace_remove)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_remove)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_remove)
    #pragma POLYSPACE_INLINE_CHECKS "remove"
#endif /* !NO_CHECKS_INLINING */
#undef remove


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(remove, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(remove, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, remove, const char*, filename, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'remove' function causes the file whose name is the string pointed
          to by 'filename' to be no longer accessible by that name.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (filename)"
#pragma Inspection_Point filename
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info valid_string_message("argument (filename)")
        ASSERT_IS_VALID_STRING(filename);
#pragma polyspace_check_info
        /*
          The 'remove' function returns zero if the operation succeeds, -1 if
          it fails.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "remove"
#else
#pragma POLYSPACE_NO_INSTRUMENT "remove"
#endif
#endif  /* __polyspace_remove */

#if defined(__polyspace_rename)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_rename)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_rename)
    #pragma POLYSPACE_INLINE_CHECKS "rename"
#endif /* !NO_CHECKS_INLINING */
#undef rename


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(rename, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(rename, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, rename, const char*, old, const char*, new_name, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'rename' function causes the file whose name is the string pointed
          to by 'old' to be henceforth known by the name given by the string
          pointed to by 'new'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (old name)"
#pragma Inspection_Point old
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (new name)"
#pragma Inspection_Point new_name
        ;
#pragma polyspace_value_info
      
#pragma polyspace_check_info valid_string_message("first argument (old name)")
        ASSERT_IS_VALID_STRING(old);
#pragma polyspace_check_info
#pragma polyspace_check_info valid_string_message("second argument (new name)")
        ASSERT_IS_VALID_STRING(new_name);
#pragma polyspace_check_info
        /*
          The 'rename' function returns zero if the operation succeeds, -1
          if it fails.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "rename"
#else
#pragma POLYSPACE_NO_INSTRUMENT "rename"
#endif
#endif  /* __polyspace_rename */

#if defined(__polyspace_tmpnam)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_tmpnam)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_tmpnam)
    #pragma POLYSPACE_INLINE_CHECKS "tmpnam"
#endif /* !NO_CHECKS_INLINING */
#undef tmpnam


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(tmpnam, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(tmpnam, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char*, tmpnam, char*, s, NO_VARARGS, __PST_THROW)
    {
        static char *_polyspace_tmp_name;
        int i, len;
        /*
           ISO/IEC 9899:1990 (E) : 7.9.4.4 The 'tmpnam' function (page 128)

           The 'tmpnam' function generates a string that is a valid file name and
           that is not the same as the name of an existing file.

           If the argument is a null pointer, the 'tmpnam' function leaves its result
           in an internal static object and returns a pointer to that object.
        */
#ifndef L_tmpnam
#define L_tmpnam 20
#endif
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
#pragma polyspace_check_info arg_green_orange_red_message("argument", "is a null pointer or a writable string", "may not be a writable string", "is neither a null pointer nor a writable string", "")
        if (s != (char *) 0) ASSERT_IS_WRITABLE_ARRAY(char, s, L_tmpnam);
#pragma polyspace_check_info

        if (_polyspace_random_int())
            RETURN((char *) 0);

        if (s == (char *) 0) {
            _polyspace_tmp_name = (char*)__ps_builtin_random_string();
            RETURN(_polyspace_tmp_name);
        } else {
            /*
              If the argument is not a null pointer, it is assumed to point to an array
              of at least 'L_tmpnam' 'char's; the 'tmpnam' function writes its result
              in that array and returns the argument as its value.
            */
            len = _polyspace_random_int();
            APPLY_CONSTRAINT(len >= 0 && len <= L_tmpnam);
            for (i = 0; i < len; i++) {
                s[i] = _polyspace_random_char();
            }
            s[len] = 0;
            RETURN(s);
        }
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "tmpnam"
#endif
#endif /* __polyspace_tmpnam */

#if defined(__polyspace_fclose)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fclose)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fclose)
    #pragma POLYSPACE_INLINE_CHECKS "fclose"
#endif /* !NO_CHECKS_INLINING */
#undef fclose


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fclose, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(fclose, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fclose, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'fclose' function causes the stream pointed to by 'stream' to be
          flushed and the associated file to be closed.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
#ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */
    #endif

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

        /*
          The 'fclose' function returns zero if the stream was successfully closed
          or EOF if any errors were detected.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "fclose"
#else
#pragma POLYSPACE_NO_INSTRUMENT "fclose"
#endif
#endif /* __polyspace_fclose */

#if defined(__polyspace_fflush)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fflush)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fflush)
    #pragma POLYSPACE_INLINE_CHECKS "fflush"
#endif /* !NO_CHECKS_INLINING */
#undef fflush


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fflush, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(fflush, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fflush, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          If 'stream' points to an output stream or an update stream in which the
          most recent operation was not input, the 'fflush' function causes any
          unwritten data for that stream to be delivered to the host environment
          to be written to the file;
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info arg_green_orange_red_message("argument", "is a null pointer or a valid stream", "may not be a valid stream", "is neither a null pointer nor a valid stream", "")
        if (stream != (FILE*)0) {
            ASSERT_IS_READABLE_POINTER(FILE, stream);
        #ifndef POLYSPACE_NO_IO_WRITE
        #ifdef FILE_IO_WRITE
            FILE_IO_WRITE(stream);
        #else
            *stream = _polyspace_random_FILE();
        #endif /* POLYSPACE_NO_IO_WRITE */

        #endif
        }
#pragma polyspace_check_info

        /*
          write user associated IO buffer via setbuf /setvbuf
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          If 'stream' is a null pointer, the 'fflush' function performs this
          flushing action on all streams for which the behaviour is defined above.

          The 'fflush' function returns EOF if a write error occurs, otherwise zero.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "fflush"
#else
#pragma POLYSPACE_NO_INSTRUMENT "fflush"
#endif
#endif /* __polyspace_fflush */

    /* Functions of stdio that may have concurrent access to a global variable.
     * Those functions need to be stubbed differently for each target OS.
     *
     * Solaris uses a global table: __iob to store the FILEs. We must stub to show the accesses to __iob.
     * Linux does not use any global table. stdin, stdout and stderr are global variables but cannot be accessed by fopen and Cie.
     */

#if defined(__polyspace_tmpfile)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_tmpfile)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_tmpfile)
    #pragma POLYSPACE_INLINE_CHECKS "tmpfile"
#endif /* !NO_CHECKS_INLINING */
#undef tmpfile
    static FILE* _polyspace_store_tmpfile;

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(tmpfile, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(tmpfile, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, FILE*, tmpfile, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'tmpfile' function creates a temporary binary file that will
          automatically be removed when it is closed or at program termination.

          The 'tmpfile' function returns a pointer to the stream of the file that
          is created. If the file cannot be created, the 'tmpfile' function
          returns a NULL pointer.
        */
        FILE* volatile random_file;
        FILE* ret;
        RET_ERROR_AND_SET_ERRNO((FILE*) 0);

        ret = random_file;
        #ifdef FILE_IO_WRITE
            FILE_IO_WRITE(ret);
        #else
            *ret = _polyspace_random_FILE();
        #endif /* POLYSPACE_NO_IO_WRITE */
        _polyspace_store_tmpfile = ret;
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "tmpfile"
#endif
#endif /* __polyspace_tmpfile */

#if defined(__polyspace_fopen)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fopen)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fopen)
    #pragma POLYSPACE_INLINE_CHECKS "fopen"
#endif /* !NO_CHECKS_INLINING */
#undef fopen

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fopen, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(fopen, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, FILE*, fopen, const char *, filename, const char *, mode, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        FILE* volatile random_file;
        FILE* ret;
        /*
          The 'fopen' function opens the file whose name is the string pointed to
          by 'filename', and associates a stream with it.

          The argument 'mode' points to a string.

          The 'fopen' function returns a pointer to the object controlling the
          stream. If the open operation fails, 'fopen' returns a null pointer.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (filename)"
#pragma Inspection_Point filename
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "second argument (mode)"
#pragma Inspection_Point mode
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (filename)")

        ASSERT_IS_VALID_STRING(filename);
#pragma polyspace_check_info
#pragma polyspace_check_info valid_string_message("second argument (mode)")
        ASSERT_IS_VALID_STRING(mode);
#pragma polyspace_check_info
        RET_ERROR_AND_SET_ERRNO((FILE*)0);

        ret = random_file;
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(ret);
    #else
        *ret = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "fopen"
#endif
#endif /* __polyspace_fopen */

#if defined(__polyspace_freopen)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_freopen)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_freopen)
    #pragma POLYSPACE_INLINE_CHECKS "freopen"
#endif /* !NO_CHECKS_INLINING */
#undef freopen


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(freopen, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(freopen, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, FILE*, freopen, const char *, filename, const char *, mode, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
           The 'freopen' function opens the file whose name is the string pointed
           to by 'filename' and associates the stream pointed to by 'stream' with
           it. The 'mode' argument is used just as in the 'fopen' function.
        */

#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (filename)"
#pragma Inspection_Point filename
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "second argument (mode)"
#pragma Inspection_Point mode
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "third argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

/* filename can be NULL - it means we simply change the mode */
        if (filename != 0) {
#pragma polyspace_check_info valid_string_message("first argument (filename)")
            ASSERT_IS_VALID_STRING(filename);
#pragma polyspace_check_info
        }
#pragma polyspace_check_info valid_string_message("second argument (mode)")
        ASSERT_IS_VALID_STRING(mode);
#pragma polyspace_check_info

#pragma polyspace_check_info readable_pointer_message("third argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          The 'freopen' function returns a null pointer if the open operation fails.
          Otherwise, 'freopen' returns the value of 'stream'.
        */
        RET_ERROR_AND_SET_ERRNO((FILE*)0); /* may return NULL */
        RETURN(stream);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "freopen"
#endif
#endif /* __polyspace_freopen */

    /* End of functions of stdio that have concurrent access */

#if defined(__polyspace_setbuf)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_setbuf)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_setbuf)
    #pragma POLYSPACE_INLINE_CHECKS "setbuf"
#endif /* !NO_CHECKS_INLINING */
#undef setbuf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(setbuf, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(setbuf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
#ifndef BUFSIZ
    #define BUFSIZ  512
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, setbuf, FILE*, stream, char *, buf, NO_VARARGS, __PST_THROW)
    {
        /*
          Except that it returns no value, the 'setbuf' function is equivalent
          to the 'setvbuf' function invoked with the values _IOFBF for 'mode' and
          'BUFSIZ' for 'size', or (if 'buf' is a null pointer), with the value
          _IONBF for 'mode'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument (string buffer)"
#pragma Inspection_Point buf
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("first argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
        if (buf) {
            /*
              Caution : 'setbuf' and 'setvbuf' are not fully supported. The
              model assumes that 'setbuf' and 'setvbuf' may access the
              array pointed to by buf but that the buffer will not then
              be modified by other I/O functions.
              This may lead to undetected accesses to the buffer if it is
              used in the application after the call to 'setbuf' or 'setvbuf'
            */
#pragma polyspace_check_info writable_array_message("second argument (string buffer)")
            ASSERT_IS_WRITABLE_ARRAY(char, buf, BUFSIZ);
#pragma polyspace_check_info

            /*
              Associate IO buffer (instead if default) for IO routines
            */
            SET_ASSOCIATED_FILE_BUFFER(buf);
        }
    }
    PST_STUB_C_DEF_END
#else
#ifndef BUFSIZ
    #define BUFSIZ  512
#endif


    int __pst_bufsiz = BUFSIZ;
#pragma POLYSPACE_NO_INSTRUMENT "setbuf"
#endif
#endif /* __polyspace_setbuf */

#if defined(__polyspace_setvbuf) && !defined(__polyspace_no_setvbuf)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_setvbuf)
    #pragma POLYSPACE_INLINE_CHECKS "setvbuf"
#endif /* !NO_CHECKS_INLINING */


#undef setvbuf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(setvbuf, 4)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_4
    #define RETURN(x) RETURN_CUSTOM_TYPE(setvbuf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_4
    #define RETURN(x) return (x)
#endif


#ifndef _IOFBF
#define _IOFBF 0  /* Fully buffered.  */
#endif
#ifndef _IOLBF
#define _IOLBF 1  /* Line buffered.  */
#endif
#ifndef _IONBF
#define _IONBF 2  /* No buffering.  */
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, setvbuf, FILE*, stream, char *, buf, int, mode, size_t, size, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'setvbuf' function may be used only after the stream pointed to
          by 'stream' has been associated with an open file and before any other
          operation is performed on the stream.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument (string buffer)"
#pragma Inspection_Point buf
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (mode)"
#pragma Inspection_Point mode
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("first argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
        /*
          If 'buf' is not a null pointer, the array it points to may be used
          instead of a buffer allocated by the 'setvbuf' function. The argument
          'size' specifies the size of the array. The contents of the array at
          any time are indeterminate.
        */
        if (buf != (void *) 0) {
            /*
              Caution : 'setbuf' and 'setvbuf' are not fully supported. The
              model assumes that 'setbuf' and 'setvbuf' may access the
              array pointed to by buf but that the buffer will not then
              be modified by other I/O functions.
              This may lead to undetected accesses to the buffer if it is
              used in the application after the call to 'setbuf' or 'setvbuf'
            */
#pragma polyspace_check_info writable_array_message("second argument (string buffer)")
            ASSERT_IS_WRITABLE_ARRAY(char, buf, size);
#pragma polyspace_check_info

            /*
              Associate IO buffer (instead if default) for IO routines
            */
            SET_ASSOCIATED_FILE_BUFFER(buf);
        }

        /* Check the validity of the input mode */
#pragma polyspace_check_info expected_value_message("third argument (mode)", "(expected values are _IONBF, _IOLBF, _IOFBF)")
        ASSERT_IS_VALID_CONDITION(mode == _IONBF || mode == _IOLBF || mode == _IOFBF);
#pragma polyspace_check_info

        /*
          The 'setvbuf' function returns zero on success, or nonzero if an invalid
          value is given for 'mode' or if the request cannot be honored.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "setvbuf"
#endif
#endif /* __polyspace_setvbuf */

#if defined(__polyspace_vfprintf) && !defined(__polyspace_no_vfprintf)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_vfprintf)
    #pragma POLYSPACE_INLINE_CHECKS "vfprintf"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <stdarg.h>
#endif
#undef vfprintf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(vfprintf, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(vfprintf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, vfprintf, FILE*, stream, const char *, format, va_list, ap, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'vfprintf' function is equivalent to 'fprintf', with the variable
          argument list replaced by 'arg', which shall have been initialized by
          the 'va_start' macro (and possibly subsequent 'va_arg' calls).
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("first argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
#pragma polyspace_check_info valid_string_message("second argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "vfprintf"
#endif
#endif /* __polyspace_vfprintf */

#if defined(__polyspace_vprintf) && !defined(__polyspace_no_vprintf)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_vprintf)
    #pragma POLYSPACE_INLINE_CHECKS "vprintf"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <stdarg.h>
#endif
#undef vprintf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(vprintf, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(vprintf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, vprintf, const char *, format, va_list, ap, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The vprintf is equivalent to 'printf' with the variable argument list
          replaced by 'arg', which shall have been initialized by the 'va_start'
          macro (and possibly subsequent 'va_arg' calls).
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "vprintf"
#else
#pragma POLYSPACE_NO_INSTRUMENT "vprintf"
#endif
#endif /* __polyspace_vprintf */

#if defined(__polyspace_vsprintf) && !defined(__polyspace_no_vsprintf)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_vsprintf)
    #pragma POLYSPACE_INLINE_CHECKS "vsprintf"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <stdarg.h>
#endif
#undef vsprintf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(vsprintf, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(vsprintf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, vsprintf, char *, s, const char *, format, va_list, ap, NO_VARARGS, __PST_THROW)
    {
        int length;
        int i;

#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info

        /* At least check the input string is NULL pointer */
#pragma polyspace_check_info  non_null_pointer_message("first argument (string buffer)")
        ASSERT_IS_VALID_CONDITION(s != (char*)0);
#pragma polyspace_check_info

        /*
          The vsprintf is equivalent to 'sprintf' with the variable argument list
          replaced by 'arg', which shall have been initialized by the 'va_start'
          macro (and possibly subsequent 'va_arg' calls).
        */
#pragma polyspace_check_info valid_string_message("second argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info
        length = _polyspace_random_int();
        APPLY_CONSTRAINT(length >= 0);
        for (i=0; i < length; i++)
            s[i] = _polyspace_random_char();
        s[length] = 0;
        /* in case of failure, vsprintf return a negative value */
        if (_polyspace_random_int()) {
            length = -1;
        }
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(length);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "vsprintf"
#endif
#endif /* __polyspace_vsprintf */

#if defined(__polyspace_fprintf)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fprintf)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fprintf)
    #pragma POLYSPACE_INLINE_CHECKS "fprintf"
#endif /* !NO_CHECKS_INLINING */
#undef fprintf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fprintf, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(fprintf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fprintf, FILE*, stream, const char *, format, HAS_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'fprintf' function writes output to the stream pointed to by 'stream'
          under control of the string pointed to by 'format'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("first argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
#pragma polyspace_check_info valid_string_message("second argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          The 'fprintf' function returns the number of characters transmitted, or
          a negative value if an output error occurred.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "fprintf"
#endif
#endif /* __polyspace_fprintf */

#if defined(__polyspace_fscanf)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fscanf)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fscanf)
    #pragma POLYSPACE_INLINE_CHECKS "fscanf"
#endif /* !NO_CHECKS_INLINING */
#undef fscanf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fscanf, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(fscanf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fscanf, FILE*, stream, const char *, format, HAS_VARARGS, __PST_THROW_OLD_LIBC)
    {
        int i=0;
        char **tmp, *tmp2;
        /*
          The 'fscanf' function reads input from the stream pointed to by 'stream'
          under control of the string pointed to by 'format'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("first argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
#pragma polyspace_check_info valid_string_message("second argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        for (i=0; i < __polyspace_nb_varargs; i++) /* for each variable argument */
        {
            tmp = (char **) __polyspace_vararg[i];
            tmp2 = (char *)*tmp;
            while (_polyspace_random_int()) /* write in the argument (maybe not it random == 0) */
            {
                *tmp2 = _polyspace_random_char();
                tmp2 += _polyspace_random_int();
            }
        }
        /*
          The 'fscanf' function returns the value of the macro EOF if an input
          failure occurs before any conversion. Otherwise, the 'fscanf' function
          returns the number of input items assigned, which can be fewer than
          provided for, or even zero, in the event of an early matching failure.
        */
        i = _polyspace_random_int();
        APPLY_CONSTRAINT(i >= 0);

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);

        RETURN(i);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "fscanf"
#endif
#endif /* __polyspace_fscanf */

#if defined(__polyspace_printf)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_printf)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_printf)
    #pragma POLYSPACE_INLINE_CHECKS "printf"
#endif /* !NO_CHECKS_INLINING */
#undef printf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(printf, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(printf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, printf, const char *, format, HAS_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'printf' function is equivalent to fprintf with the argument 'stdout'
          interposed before the arguments to 'printf'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "printf"
#else
#pragma POLYSPACE_NO_INSTRUMENT "printf"
#endif
#endif /* __polyspace_printf */

#if defined(__polyspace_scanf)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_scanf)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_scanf)
    #pragma POLYSPACE_INLINE_CHECKS "scanf"
#endif /* !NO_CHECKS_INLINING */
#undef scanf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(scanf, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(scanf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, scanf, const char *, format, HAS_VARARGS, __PST_THROW_OLD_LIBC)
    {
        int i=0;
        char **tmp, *tmp2;
        /*
          The 'scanf' function is equivalent to 'fscanf' with the argument 'stdin'
          interposed before the arguments to 'scanf'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info
        for (i=0; i < __polyspace_nb_varargs; i++) /* for each variable argument */
        {
            tmp = (char **) __polyspace_vararg[i];
            tmp2 = (char *)*tmp;
            while (_polyspace_random_int()) /* write in the argument (maybe not it random == 0) */
            {
                *tmp2 = _polyspace_random_char();
                tmp2 += _polyspace_random_int();
            }
        }
        i = _polyspace_random_int();
        APPLY_CONSTRAINT(i >= 0);

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(i);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "scanf"
#endif
#endif /* __polyspace_scanf */

#if defined(__polyspace_sprintf)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_sprintf)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_sprintf)
    #pragma POLYSPACE_INLINE_CHECKS "sprintf"
#endif /* !NO_CHECKS_INLINING */
#undef sprintf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(sprintf, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(sprintf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, sprintf, char *, s, const char *, format, HAS_VARARGS, __PST_THROW)
    {
        int length;
        int i;

#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info

        /* At least check the input string is NULL pointer */
#pragma polyspace_check_info  non_null_pointer_message("first argument (string buffer)")
        ASSERT_IS_VALID_CONDITION(s != (char*)0);
#pragma polyspace_check_info

        /*
          The 'sprintf' function is equivalent to 'fprintf' except that the argument
          's' specifies an array into which the generated output is to be written,
          rather than to a stream.
        */
#pragma polyspace_check_info valid_string_message("second argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info
        length = _polyspace_random_int();
        APPLY_CONSTRAINT(length >= 0);
        for (i=0; i < length; i++)
            s[i] = _polyspace_random_char();
        s[length] = 0;

        /* in case of failure, sprintf return a negative value */
        if (_polyspace_random_int()) {
            length = -1;
        }
        /*
          The 'sprintf' returns the number of characters written in the array, not
          counting the terminating null character.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(length);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "sprintf"
#endif
#endif /* __polyspace_sprintf */

#if defined(__polyspace_sscanf)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_sscanf)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_sscanf)
    #pragma POLYSPACE_INLINE_CHECKS "sscanf"
#endif /* !NO_CHECKS_INLINING */
#undef sscanf


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(sscanf, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(sscanf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, sscanf, const char *, s, const char *, format, HAS_VARARGS, __PST_THROW)
    {
        int i=0;
        char **tmp, *tmp2;
        /*
          The 'sscanf' function is equivalent to 'fscanf', except that the argument
          's' specifies a string from which the input is to be obtained, rather than
          from a stream.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (string buffer)")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info
#pragma polyspace_check_info valid_string_message("second argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info
        for (i=0; i < __polyspace_nb_varargs; i++) /* for each variable argument */
        {
            tmp = (char **) __polyspace_vararg[i];
            tmp2 = (char *)*tmp;
            while (_polyspace_random_int()) /* write in the argument (maybe not it random == 0) */
            {
                *tmp2 = _polyspace_random_char();
                tmp2 += _polyspace_random_int();
            }
        }
        i = _polyspace_random_int();
        APPLY_CONSTRAINT(i >= 0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(i);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "sscanf"
#endif
#endif /* __polyspace_sscanf */

#if defined(__polyspace_fgetc)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fgetc)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fgetc)
    #pragma POLYSPACE_INLINE_CHECKS "fgetc"
#endif /* !NO_CHECKS_INLINING */
#undef fgetc


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fgetc, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(fgetc, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fgetc, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'fgetc' function obtains the next character (if present) as an
          'unsigned char' converted to an 'int', from the input stream pointed to
          by 'stream' and advances the associated file position indicator for the
          stream (if defined).
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          The 'fgetc' function returns the next character from the input stream
          pointed to by 'stream'. If the stream is at end-of-file, the end-of-file
          indicator for the stream is set and 'fgetc' returns EOF. If a  read
          error occurs, the error indicator for the stream is set and 'fgetc'
          returns EOF.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(_polyspace_random_uchar());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "fgetc"
#else
#pragma POLYSPACE_NO_INSTRUMENT "fgetc"
#endif
#endif /* __polyspace_fgetc */

#if defined(__polyspace_fgets)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fgets)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fgets)
    #pragma POLYSPACE_INLINE_CHECKS "fgets"
#endif /* !NO_CHECKS_INLINING */
#undef fgets


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fgets, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(fgets, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif



#ifdef __OS_VXWORKS
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char*, fgets, char *, s, size_t, n, FILE*, stream, NO_VARARGS, )
#else


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char*, fgets, char *, s, int, n, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
#endif
    {
        int i;
        int length;
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "second argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "third argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

        /*
          The 'fgets' function reads at most one less than the number of characters
          specified by 'n' from the stream pointed to by 'stream' into the array
          pointed to by 's'.
        */
#pragma polyspace_check_info readable_pointer_message("third argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
        if (n < 1)
            RETURN((char *) 0);
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif

        length = _polyspace_random_int();
        APPLY_CONSTRAINT(length < n);
        APPLY_CONSTRAINT(length >=0) ;

        /* check the input string has enough space including for null character */
#pragma polyspace_check_info  writable_array_message("first argument (string buffer)")
        if (length >= 0) ASSERT_IS_WRITABLE_ARRAY(char, s, length+1);
#pragma polyspace_check_info

        for (i=0; i < length; i++) /* write in s up to n-1 char */
            s[i] = _polyspace_random_char();

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

        /*
           The 'fgets' function returns 's' if successful. If end-of-file is
           encountered and no characters have been read into the array, the
           contents of the array remain unchanged and a null pointer is returned.
           If a read error occurs during the operation the array contents are
           indeterminate and a null pointer is returned.
        */
        RET_ERROR_AND_SET_ERRNO((char *) 0);

        s[length] = 0; /* terminate by null char */
        RETURN(s);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "fgets"
#endif
#endif /* __polyspace_fgets */

#if defined(__polyspace_fputc)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fputc)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fputc)
    #pragma POLYSPACE_INLINE_CHECKS "fputc"
#endif /* !NO_CHECKS_INLINING */
#undef fputc


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fputc, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(fputc, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fputc, int, c, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
        /*
          The 'fputc' function writes the character specified by 'c' (converted
          to an 'unsigned char') to the output stream pointed to by 'stream', at
          the position indicated by the associated file position indicator for the
          stream (if defined), and advances the indicator appropriately.
        */
#pragma polyspace_check_info readable_pointer_message("second argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

        /*
          The 'fputc' function returns the character written. If a write error
          occurs, the error indicator for the stream is set and 'fputc' returns
          EOF.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(_polyspace_random_uchar());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "fputc"
#else
#pragma POLYSPACE_NO_INSTRUMENT "fputc"
#endif
#endif /* __polyspace_fputc */

#if defined(__polyspace_fputs)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fputs)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fputs)
    #pragma POLYSPACE_INLINE_CHECKS "fputs"
#endif /* !NO_CHECKS_INLINING */
#undef fputs


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fputs, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(fputs, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fputs, const char *, s, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        int ret;
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
        /*
          The 'fputs' function writes the string pointed to by 's' to the stream
          pointed to by 'stream'. The terminating null character is not written.
        */
#pragma polyspace_check_info valid_string_message("first argument (string buffer)")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info
#pragma polyspace_check_info readable_pointer_message("second argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        ret = _polyspace_random_int();
        APPLY_CONSTRAINT(ret >= 0);

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          The 'fputs' function returns EOF if a write error occurs; otherwise it
          returns a nonnegative value.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(ret) ;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "fputs"
#else
#pragma POLYSPACE_NO_INSTRUMENT "fputs"
#endif
#endif /* __polyspace_fputs */

#ifdef __cplusplus
    /* C++/5764 : Linux-specific : getc is macro-ized as _IO_getc */
#if defined(__polyspace__IO_getc) && !defined(__polyspace_no__IO_getc)
#undef getc
#define __polyspace_getc
    PST_STUB_C_DECL(int,getc,(FILE* stream));


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(_IO_getc, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(_IO_getc, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, _IO_getc, FILE*, stream, NO_VARARGS, __PST_THROW_NEW_LIBC_UNDER_2_13)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(getc(stream));
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#endif /* __polyspace__IO_getc */

    /* C++/5931 : visual-specific : getc/getchar are macro that call _filbuf  */
#if defined(__polyspace__filbuf) && !defined(__polyspace_no__filbuf)
#undef getc
#define __polyspace_getc
    PST_STUB_C_DECL(int,getc,(FILE* stream));


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(_filbuf, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(_filbuf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, _filbuf, FILE*, stream, NO_VARARGS, )
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(getc(stream));
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#endif /* __polyspace__filbuf */

    /* C++/5931 : Solaris-specific : getc/getchar are macro that call __filbuf  */
#if defined(__polyspace___filbuf) && !defined(__polyspace_no___filbuf)
#undef getc
#define __polyspace_getc
    PST_STUB_C_DECL(int,getc,(FILE* stream));


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(__filbuf, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(__filbuf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, __filbuf, FILE*, stream, NO_VARARGS, )
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(getc(stream));
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#endif /* __polyspace___filbuf */
#endif /* __cplusplus */

#if defined(__polyspace_getc)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_getc)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_getc)
    #pragma POLYSPACE_INLINE_CHECKS "getc"
#endif /* !NO_CHECKS_INLINING */
#undef getc


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(getc, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(getc, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, getc, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
        /*
          The 'getc' function is equivalent to 'fgetc', except that if it is
          implemented as a macro, it may evaluate 'stream' more than once, so the
          argument should never be an expression with side effects.
        */
#pragma polyspace_check_info readable_pointer_message("argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          The 'getc' function returns the next character from the input stream
          pointed to by 'stream'. If the 'stream' is at end-of-file, the end-of-file
          indicator for the stream is set and 'getc' returns EOF. If a read error
          occurs, the error indicator for the stream is set and 'getc' returns EOF.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(_polyspace_random_uchar());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "getc"
#else
#pragma POLYSPACE_NO_INSTRUMENT "getc"
#endif
#endif /* __polyspace_getc */

#if defined(__polyspace_getchar)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_getchar)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_getchar)
    #pragma POLYSPACE_INLINE_CHECKS "getchar"
#endif /* !NO_CHECKS_INLINING */
#undef getchar


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(getchar, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(getchar, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, getchar, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          The 'gets' function is equivalent to 'getc' with the argument 'stdin'.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(_polyspace_random_uchar());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "getchar"
#else
#pragma POLYSPACE_NO_INSTRUMENT "getchar"
#endif
#endif /* __polyspace_getchar */

#if defined(__polyspace_gets)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_gets)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_gets)
    #pragma POLYSPACE_INLINE_CHECKS "gets"
#endif /* !NO_CHECKS_INLINING */
#undef gets


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(gets, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(gets, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char* , gets, char *, s, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        int i;
        unsigned int length;

        /*
          The 'gets' function reads characters from the input stream pointed to by
          'stdin', into the array pointed to by 's', until end-of-file is
          encountered or a new-line character is read.
        */
        length = _polyspace_random_int();

#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

        /* check the input string has enough space including for null character */
#pragma polyspace_check_info  writable_array_message("argument (string buffer)")
        if (length >= 0) ASSERT_IS_WRITABLE_ARRAY(char, s, length+1);
#pragma polyspace_check_info

        for (i=0; i < length; i++) /* write in s up to n-1 char */
            s[i] = _polyspace_random_char();
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
           The 'gets' function returns 's' if successful. If end-of-file is
           encountered and no characters have been read into the array, the
           contents of the array remain unchanged and a null pointer is returned.
           If a read error occurs during the operation the array contents are
           indeterminate and a null pointer is returned.
        */
        RET_ERROR_AND_SET_ERRNO((char *) 0);
        s[length] = 0; /* terminate by null char */
        RETURN(s);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "gets"
#endif
#endif /* __polyspace_gets */

#ifdef __cplusplus
    /* C++/5764 : Linux-specific : putc is macro-ized as _IO_putc */
#if defined(__polyspace__IO_putc) && !defined(__polyspace_no__IO_putc)
#undef putc
#define __polyspace_putc
    PST_STUB_C_DECL(int,putc,(int c, FILE* stream));


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(_IO_putc, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(_IO_putc, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, _IO_putc, int, c, FILE*, stream, NO_VARARGS, __PST_THROW_NEW_LIBC_UNDER_2_13)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(putc(c, stream));
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#endif /* __polyspace__IO_putc */

    /* C++/5931 : visual-specific : putc/putchar are macro that call _flsbuf  */
#if defined(__polyspace__flsbuf) && !defined(__polyspace_no__flsbuf)
#undef putc
#define __polyspace_putc
    PST_STUB_C_DECL(int,putc,(int c, FILE* stream));


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(_flsbuf, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(_flsbuf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, _flsbuf, int, c, FILE*, stream, NO_VARARGS, )
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(putc(c, stream));
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#endif /* __polyspace__flsbuf */


    /* C++/5931 : Solaris-specific : putc/putchar are macro that call __flsbuf  */
#if defined(__polyspace___flsbuf) && !defined(__polyspace_no___flsbuf)
#undef putc
#define __polyspace_putc
    PST_STUB_C_DECL(int,putc,(int c, FILE* stream));


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(__flsbuf, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(__flsbuf, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, __flsbuf, int, c, FILE*, stream, NO_VARARGS, )
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(putc(c, stream));
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#endif /* __polyspace___flsbuf */
#endif /* __cplusplus */

#if defined(__polyspace_putc)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_putc)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_putc)
    #pragma POLYSPACE_INLINE_CHECKS "putc"
#endif /* !NO_CHECKS_INLINING */
#undef putc


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(putc, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(putc, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, putc, int, c, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'putc' function is equivalent to 'fputc', except that if it is
          implemented as a macro, it may evaluate stream more than once, so the
          argument should never be an expression with side effects.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("second argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          The 'putc' function returns the character written. If a write error
          occurs, the error indicator for the stream is set and 'putc' returns EOF.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(_polyspace_random_uchar());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "putc"
#else
#pragma POLYSPACE_NO_INSTRUMENT "putc"
#endif
#endif /* __polyspace_putc */

#if defined(__polyspace_putchar)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_putchar)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_putchar)
    #pragma POLYSPACE_INLINE_CHECKS "putchar"
#endif /* !NO_CHECKS_INLINING */
#undef putchar


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(putchar, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(putchar, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, putchar, int, c, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          The 'putchar' function is equivalent to 'putc' with the second argument
          'stdout'.
        */
        /*
          The 'putchar' function returns the character written. If a write error
          occurs, the error indicator for the stream is set and 'putchar' returns
          EOF.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(_polyspace_random_uchar());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "putchar"
#else
#pragma POLYSPACE_NO_INSTRUMENT "putchar"
#endif
#endif /* __polyspace_putchar */

#if defined(__polyspace_puts)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_puts)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_puts)
    #pragma POLYSPACE_INLINE_CHECKS "puts"
#endif /* !NO_CHECKS_INLINING */
#undef puts


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(puts, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(puts, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, puts, const char *, s, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        int ret;
        /*
          The 'puts' function writes the string pointed to by 's' to the stream
          pointed to by 'stdout' and appends a new-line character to the output.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("argument (string buffer)")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info

        ret = _polyspace_random_int();
        APPLY_CONSTRAINT(ret >= 0);

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          The 'puts' function returns EOF if a write error occurs; otherwise it
          returns a nonnegative value.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(EOF);
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "puts"
#else
#pragma POLYSPACE_NO_INSTRUMENT "puts"
#endif
#endif /* __polyspace_puts */

#if defined(__polyspace_ungetc)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_ungetc)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_ungetc)
    #pragma POLYSPACE_INLINE_CHECKS "ungetc"
#endif /* !NO_CHECKS_INLINING */
#undef ungetc


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(ungetc, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(ungetc, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, ungetc, int, c, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'ungetc' function pushes the character specified by 'c' (converted
          to an 'unsigned char') back onto the input stream pointed to by 'stream'.

          If the value of 'c' equals that of the macro EOF, the operation fails
          and the input stream is unchanged.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("second argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
        /*
          The 'ungetc' function returns the character pushed back after conversion,
          or EOF if the operation fails.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN((_polyspace_random_int()) ? _polyspace_random_uchar() : EOF);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "ungetc"
#else
#pragma POLYSPACE_NO_INSTRUMENT "ungetc"
#endif
#endif /* __polyspace_ungetc */

#if defined(__polyspace_fread)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fread)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fread)
    #pragma POLYSPACE_INLINE_CHECKS "fread"
#endif /* !NO_CHECKS_INLINING */
#undef fread


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fread, 4)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_4
    #define RETURN(x) RETURN_CUSTOM_TYPE(fread, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_4
    #define RETURN(x) return (x)
#endif


#ifdef __OS_VXWORKS
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fread, void *, ptr, size_t, size, size_t, nitems, FILE*, stream, NO_VARARGS, )
#else


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, size_t, fread, void *, ptr, size_t, size, size_t, nitems, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
#endif
    {
        size_t read_sz;
        int i;
        /*
          The 'fread' function reads, into the array pointed to by 'ptr', up to
          'nitems' elements whose size is specified by 'size', from the stream
          pointed to by 'stream'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (output buffer)"
#pragma Inspection_Point ptr
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "fourth argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("fourth argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          The 'fread' function returns the number of elements successfully read,
          which may be less than 'nitems' if a read error or end-of-file is
          encountered. If 'size' or 'nitems' is zero, 'fread' returns zero and the
          contents of the array and the state of the stream remain unchanged.
        */
        if (! size || ! nitems) {
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(0);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }
#pragma polyspace_check_info writable_array_message("first argument (output buffer)")
        ASSERT_IS_WRITABLE_ARRAY(char, ptr, size * nitems);
#pragma polyspace_check_info

        read_sz = _polyspace_random_int();
        APPLY_CONSTRAINT(read_sz <= nitems);
        for (i = 0; i < read_sz; i++) {
            ((char*)ptr)[i] = _polyspace_random_char();
        }
        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

        /* C/4992 : return error (-1 for vxworks, 0 other) and set errno if error */
    #ifdef __OS_VXWORKS
        RET_ERROR_AND_SET_ERRNO(-1);
    #else
        RET_ERROR_AND_SET_ERRNO(0);
    #endif
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(read_sz);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "fread"
#endif
#endif /* __polyspace_fread */

#if defined(__polyspace_fwrite)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fwrite)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fwrite)
    #pragma POLYSPACE_INLINE_CHECKS "fwrite"
#endif /* !NO_CHECKS_INLINING */
#undef fwrite


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fwrite, 4)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_4
    #define RETURN(x) RETURN_CUSTOM_TYPE(fwrite, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_4
    #define RETURN(x) return (x)
#endif



#ifdef __OS_VXWORKS
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fwrite, const void *, ptr, size_t, size, size_t, nitems, FILE*, stream, NO_VARARGS, )
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, size_t, fwrite, const void *, ptr, size_t, size, size_t, nitems, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
#endif
    {
        size_t ret;
        /*
          The 'fwrite' function writes, from the array pointed to by 'ptr', up to
          'nitems' elements whose size is specified by 'size', to the stream pointed
          to by 'stream'.

          The 'fwrite' function returns the number of elements successfully written,
          which will be less than 'nitems' only if a write error is encountered.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (input buffer)"
#pragma Inspection_Point ptr
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "fourth argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("fourth argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        if (! size || ! nitems) {
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(0);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }
#pragma polyspace_check_info readable_pointer_message("first argument (input buffer)")
        ASSERT_IS_READABLE_ARRAY(char, ptr, size * nitems);
#pragma polyspace_check_info
        ret = _polyspace_random_size_t();
        APPLY_CONSTRAINT(ret <= nitems);

        /*
          write user associated IO buffer via setbuf /setvbuf if exists
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

        /* C/4992 : return error (-1 for vxworks, 0 other) and set errno if error */
    #ifdef __OS_VXWORKS
        RET_ERROR_AND_SET_ERRNO(-1);
    #else
        RET_ERROR_AND_SET_ERRNO(0);
    #endif
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "fwrite"
#endif
#endif /* __polyspace_fwrite */

#if defined(__polyspace_fgetpos)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fgetpos)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fgetpos)
    #pragma POLYSPACE_INLINE_CHECKS "fgetpos"
#endif /* !NO_CHECKS_INLINING */
#undef fgetpos


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fgetpos, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(fgetpos, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fgetpos, FILE*, stream, fpos_t*, pos, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        int ret;
        volatile fpos_t random_pos;
        /*
          The 'fgetpos' function stores the current value of the file position
          indicator for the stream pointed to by 'stream' in the object pointed
          to by 'pos'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (output position)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("first argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info

#pragma polyspace_check_info writable_array_message("second argument (output position)")
        ASSERT_IS_WRITABLE_POINTER(fpos_t, pos);
#pragma polyspace_check_info

    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        *pos = *(fpos_t*) &random_pos;  /* REM : C++ need a cast */

        /*
          write user associated IO buffer via setbuf /setvbuf if exists ?
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

        /* Upon successful completion, fgetpos(), returns 0.  Otherwise, -1 */
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "fgetpos"
#endif
#endif /* __polyspace_fgetpos */

#if defined(__polyspace_fseek)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fseek)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fseek)
    #pragma POLYSPACE_INLINE_CHECKS "fseek"
#endif /* !NO_CHECKS_INLINING */
#undef fseek


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fseek, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(fseek, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

#ifndef SEEK_SET
# define SEEK_SET 0 /* Seek from beginning of file.  */
#endif
#ifndef SEEK_CUR
# define SEEK_CUR 1 /* Seek from current position.  */
#endif
#ifndef SEEK_END
# define SEEK_END 2 /* Seek from end of file.  */
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fseek, FILE*, stream, long, offset, int, whence, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'fseek' function sets the file position indicator for the stream
          pointed to by 'stream'.

          For a binary stream, the new position, measured in characters from the
          beginning of the file is obtained by adding 'offset' to the position
          specified by 'whence'. The specified position is the beginning of the
          file if 'whence' is SEEK_SET, the current value of the file position
          indicator if SEEK_CUR, or end-of-file if SEEK_END.

          For a text stream, either 'offset' shall be zero, or 'offset' shall be
          a value returned by an earlier call to the 'ftell' function on the same
          stream and 'whence' shall be SEEK_SET.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument"
#pragma Inspection_Point whence
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("first argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
#if defined(SEEK_SET) && defined(SEEK_CUR) && defined(SEEK_END)
#pragma polyspace_check_info expected_value_message("third argument", "(expected values are SEEK_SET, SEEK_CUR, SEEK_END)")
        ASSERT_IS_VALID_CONDITION(whence == SEEK_SET || whence == SEEK_CUR || whence == SEEK_END);
#pragma polyspace_check_info
#endif

    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif

        if (_polyspace_random_int()) {
          int tmp = _polyspace_random_int();
          APPLY_CONSTRAINT(tmp>0);
          errno=tmp;
        }

        /*
          write user associated IO buffer via setbuf /setvbuf if exists ?
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

        /*
           Upon successful completion, fseek() return 0.  Otherwise, -1 is returned
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "fseek"
#else
#pragma POLYSPACE_NO_INSTRUMENT "fseek"
#endif
#endif /* __polyspace_fseek */

#if defined(__polyspace_fsetpos)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fsetpos)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fsetpos)
    #pragma POLYSPACE_INLINE_CHECKS "fsetpos"
#endif /* !NO_CHECKS_INLINING */
#undef fsetpos


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fsetpos, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(fsetpos, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fsetpos, FILE*, stream, const fpos_t*, pos, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'fsetpos' function sets the file position indicator for the stream
          pointed to by 'stream' according to the value of the object pointed to
          by 'pos', which shall be a value obtained from an earlier call to the
          'fgetpos' function on the same stream.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (input position)"
#pragma Inspection_Point pos
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("first argument (stream) ")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
#pragma polyspace_check_info readable_pointer_message("second argument (input position)")
        ASSERT_IS_READABLE_POINTER(fpos_t, pos);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          write user associated IO buffer via setbuf /setvbuf if exists ?
        */
        WRITE_ASSOCIATED_FILE_BUFFER();

        /*
          Upon successful completion, fsetpos() return 0.  Otherwise, -1 is returned
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "fsetpos"
#else
#pragma POLYSPACE_NO_INSTRUMENT "fsetpos"
#endif
#endif /* __polyspace_fsetpos */

#if defined(__polyspace_ftell)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_ftell)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_ftell)
    #pragma POLYSPACE_INLINE_CHECKS "ftell"
#endif /* !NO_CHECKS_INLINING */
#undef ftell


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(ftell, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(ftell, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, long, ftell, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        long ret;
        /*
          The 'ftell' function obtains the current value of the file position
          indicator for the stream pointed to by 'stream'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif

        /*
          Upon successful completion, ftell return the current offset. Otherwise, -1 is returned
        */
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif

        RET_ERROR_AND_SET_ERRNO(-1);

        ret = _polyspace_random_long();
        APPLY_CONSTRAINT(ret >= 0);
            RETURN(ret);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "ftell"
#else
#pragma POLYSPACE_NO_INSTRUMENT "ftell"
#endif
#endif /* __polyspace_ftell */

#if defined(__polyspace_rewind)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_rewind)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_rewind)
    #pragma POLYSPACE_INLINE_CHECKS "rewind"
#endif /* !NO_CHECKS_INLINING */
#undef rewind


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(rewind, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(rewind, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, rewind, FILE*, stream, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'rewind' function sets the file position indicator for the stream
          pointed to by 'stream' to the beginning of the file.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
        /*
          write user associated IO buffer via setbuf /setvbuf if exists ?
        */
        WRITE_ASSOCIATED_FILE_BUFFER();
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "rewind"
#else
#pragma POLYSPACE_NO_INSTRUMENT "rewind"
#endif
#endif /* __polyspace_rewind */

#if defined(__polyspace_clearerr)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_clearerr)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_clearerr)
    #pragma POLYSPACE_INLINE_CHECKS "clearerr"
#endif /* !NO_CHECKS_INLINING */
#undef clearerr


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(clearerr, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(clearerr, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, clearerr, FILE*, stream, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'clearerr' function clears the end-of-file and error indicators for
          the stream pointed to by 'stream'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef POLYSPACE_NO_IO_WRITE
    #ifdef FILE_IO_WRITE
        FILE_IO_WRITE(stream);
    #else
        *stream = _polyspace_random_FILE();
    #endif /* POLYSPACE_NO_IO_WRITE */

    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "clearerr"
#endif
#endif /* __polyspace_clearerr */

#if defined(__polyspace_feof)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_feof)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_feof)
    #pragma POLYSPACE_INLINE_CHECKS "feof"
#endif /* !NO_CHECKS_INLINING */
#undef feof


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(feof, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(feof, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, feof, FILE*, stream, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'feof' function tests the end-of-file indicator for the stream
          pointed to by 'stream'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
        /*
          The 'feof' function returns nonzero if and only if the end-of-file
          indicator is set for 'stream'.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "feof"
#else
#pragma POLYSPACE_NO_INSTRUMENT "feof"
#endif
#endif /* __polyspace_feof */

#if defined(__polyspace_ferror)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_ferror)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_ferror)
    #pragma POLYSPACE_INLINE_CHECKS "ferror"
#endif /* !NO_CHECKS_INLINING */
#undef ferror


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(ferror, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(ferror, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

#ifndef BUFSIZ
    #define BUFSIZ  512
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, ferror, FILE*, stream, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'ferror' function tests the error indicator for the stream pointed
          to by 'stream'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
        /*
          The 'ferror' function returns nonzero if and only if the error indicator
          is set for 'stream'.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "ferror"
#else
#pragma POLYSPACE_NO_INSTRUMENT "ferror"
#endif
#endif /* __polyspace_ferror */

#if defined(__polyspace_perror)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_perror)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_perror)
    #pragma POLYSPACE_INLINE_CHECKS "perror"
#endif /* !NO_CHECKS_INLINING */
#undef perror


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(perror, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(perror, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, perror, const char *, s, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'perror' function maps the error number in the integer expression
          'errno' to an error message. It writes a sequence of characters to the
          standard error stream thus: first (if 's' is not a null pointer and the
          character pointed to by 's' is not the null character); the string pointed
          to by 's' followed by a colon (:) and a space;
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info null_or_valid_string_message("argument")
        if (s != (char *) 0)
            ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "perror"
#else
#pragma POLYSPACE_NO_INSTRUMENT "perror"
#endif
#endif /* __polyspace_perror */


    /* Extensions of stdio.h */
#if defined(__polyspace_fileno)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_fileno)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_fileno)
    #pragma POLYSPACE_INLINE_CHECKS "fileno"
#endif /* !NO_CHECKS_INLINING */
#undef fileno


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fileno, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(fileno, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fileno, FILE*, stream, NO_VARARGS, __PST_THROW)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (stream)"
#pragma Inspection_Point stream
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (stream)")
        ASSERT_IS_READABLE_POINTER(FILE, stream);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "fileno"
#else
#pragma POLYSPACE_NO_INSTRUMENT "fileno"
#endif
#endif /* __polyspace_fileno */

    /*********************************************************************** stdlib.h */

#if defined(__polyspace_atof)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_atof)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_atof)
    #pragma POLYSPACE_INLINE_CHECKS "atof"
#endif /* !NO_CHECKS_INLINING */
#undef atof


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(atof, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(atof, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, double, atof, const char *, s, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'atof' function converts the initial portion of the string pointed
          to by 's' to 'double' representation.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

        volatile double random = 0;
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("argument (string buffer)")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info
        /*
          The 'atof' function returns the converted value.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(random);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "atof"
#else
#pragma POLYSPACE_NO_INSTRUMENT "atof"
#endif
#endif /* __polyspace_atof */

#if defined(__polyspace_atoi)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_atoi)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_atoi)
    #pragma POLYSPACE_INLINE_CHECKS "atoi"
#endif /* !NO_CHECKS_INLINING */
#undef atoi


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(atoi, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(atoi, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, atoi, const char *, s, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'atoi' function converts the initial portion of the string pointed to
          by 's' to 'int' representation.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("argument (string buffer)")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info
        /*
          The 'atoi' function returns the converted value.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "atoi"
#else
#pragma POLYSPACE_NO_INSTRUMENT "atoi"
#endif
#endif /* __polyspace_atoi */

#if defined(__polyspace_atol)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_atol)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_atol)
    #pragma POLYSPACE_INLINE_CHECKS "atol"
#endif /* !NO_CHECKS_INLINING */
#undef atol


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(atol, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(atol, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, long int, atol, const char *, s, NO_VARARGS, __PST_THROW)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("argument (string buffer)")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_long());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "atol"
#else
#pragma POLYSPACE_NO_INSTRUMENT "atol"
#endif
#endif /* __polyspace_atol */

#if defined(__polyspace_strtod)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strtod)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strtod)
    #pragma POLYSPACE_INLINE_CHECKS "strtod"
#endif /* !NO_CHECKS_INLINING */
#undef strtod


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strtod, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strtod, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, double, strtod, const char *, str, char **, endptr, NO_VARARGS, __PST_THROW)
    {
        int i, len;
        volatile double random = 0;
        /*
          The 'strtod' function converts the initial portion of the string pointed
          to by 'str' to 'double' representation.

          A pointer to the final string is stored in the object pointed to by
          'endptr', provided that 'endptr' is not a null pointer.

          If the subject sequence is empty or does not have the expected form, no
          conversion is performed; the value of 'str' is stored in the object
          pointed to by 'endptr', provided that 'endptr' is not a null pointer.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string buffer)"
#pragma Inspection_Point str
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (output address)"
#pragma Inspection_Point endptr
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument (string buffer)")
        ASSERT_IS_VALID_STRING(str);
#pragma polyspace_check_info
        if (endptr != 0) {
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") writable_pointer_message("second argument (output address)")
            ASSERT_IS_WRITABLE_POINTER(char *, endptr);
#pragma polyspace_check_info
            len = _polyspace_random_int();
            APPLY_CONSTRAINT(len >= 0);
            APPLY_CONSTRAINT(len <= __ps_builtin_strlen(str) );
            *endptr = (char*)str + len;
        }
        /*
          The 'strtod' function returns the converted value, if any. If no
          conversion could be performed, zero is returned. If the correct value is
          outside the range of representable values, plus or minus HUGE_VAL is
          returned, and the value of the macro ERANGE is stored in errno.
        */
        if (_polyspace_random_int()) {
            errno = ERANGE;
        }

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(random);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strtod"
#endif
#endif /* __polyspace_strtod */

#if defined(__polyspace_strtol)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strtol)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strtol)
    #pragma POLYSPACE_INLINE_CHECKS "strtol"
#endif /* !NO_CHECKS_INLINING */
#undef strtol



#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strtol, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(strtol, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, long int, strtol, const char *, str, char **, endptr, int, base, NO_VARARGS, __PST_THROW)
    {
        int len;
        /*
          The 'strtol' function converts the initial portion of the string pointed
          to by 'str' to 'long' representation.

          A pointer to the final string is stored in the object pointed to by
          'endptr', provided that 'endptr' is not a null pointer.

          If the subject sequence is empty or does not have the expected form, no
          conversion is performed; the value of 'str' is stored in the object
          pointed to by 'endptr', provided that 'endptr' is not a null pointer.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string buffer)"
#pragma Inspection_Point str
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (output address)"
#pragma Inspection_Point endptr
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument (string buffer)")
        ASSERT_IS_VALID_STRING(str);
#pragma polyspace_check_info
        if (endptr != 0) {
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") writable_pointer_message("second argument (output address)")
            ASSERT_IS_WRITABLE_POINTER(char *, endptr);
#pragma polyspace_check_info
            len = _polyspace_random_int();
            APPLY_CONSTRAINT(len >= 0);
            APPLY_CONSTRAINT(len <= __ps_builtin_strlen(str) );
            *endptr = (char*)str + len;
        }
        /*
          The 'strtol' function returns the converted value, if any. If no
          conversion could be performed, zero is returned. If the correct value is
          outside the range of representable values, LONG_MAX or LONG_MIN is returned
          (according to the sign of the value), and the value of the macro ERANGE is
          stored in errno.
        */
        if (_polyspace_random_int()) {
            errno = ERANGE;
        }
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_long());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strtol"
#endif
#endif /* __polyspace_strtol */

#if defined(__polyspace_strtoul)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strtoul)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strtoul)
    #pragma POLYSPACE_INLINE_CHECKS "strtoul"
#endif /* !NO_CHECKS_INLINING */
#undef strtoul


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strtoul, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(strtoul, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, unsigned long int, strtoul, const char *, str, char **, endptr, int, base, NO_VARARGS, __PST_THROW)
    {
        int len;
        /*
          The 'strtoul' function converts the initial portion of the string pointed
          to by 'str' to 'unsigned long' representation.

          A pointer to the final string is stored in the object pointed to by
          'endptr', provided that 'endptr' is not a null pointer.

          If the subject sequence is empty or does not have the expected form, no
          conversion is performed; the value of 'str' is stored in the object
          pointed to by 'endptr', provided that 'endptr' is not a null pointer.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string buffer)"
#pragma Inspection_Point str
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (output address)"
#pragma Inspection_Point endptr
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument (string buffer)")
        ASSERT_IS_VALID_STRING(str);
#pragma polyspace_check_info
        if (endptr != 0) {
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") writable_pointer_message("second argument (output address)")
            ASSERT_IS_WRITABLE_POINTER(char *, endptr);
#pragma polyspace_check_info
            len = _polyspace_random_int();
            APPLY_CONSTRAINT(len >= 0);
            APPLY_CONSTRAINT(len <= __ps_builtin_strlen(str) );
            *endptr = (char*)str + len;
        }
        /*
          The 'strtoul' function returns the converted value, if any. If no
          conversion could be performed, zero is returned. If the correct value is
          outside the range of representable values, ULONG_MAX is returned, and the
          value of the macro ERANGE is stored in errno.
        */
        if (_polyspace_random_int()) {
            errno = ERANGE;
        }
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_ulong());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strtoul"
#endif
#endif /* __polyspace_strtoul */

#if defined(__polyspace_rand)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_rand)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_rand)
    #pragma POLYSPACE_INLINE_CHECKS "rand"
#endif /* !NO_CHECKS_INLINING */
#undef rand


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(rand, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(rand, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif

#ifndef RAND_MAX
    #define RAND_MAX 0x7fff
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, rand, NO_VARARGS, __PST_THROW)
    {
        int ret;
        /*
          The 'rand' function computes a sequence of pseudo-random integers in the
          range 0 to RAND_MAX.

          The 'rand' function returns a pseudo-random integer.
        */
        ret = _polyspace_random_int();
        APPLY_CONSTRAINT(ret >= 0 && ret <= RAND_MAX);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "rand"
#else
#undef rand
    extern int __pst_user_native_rand_(int);


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(rand, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(rand, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
#ifndef RAND_MAX
    #define RAND_MAX 0x7fff
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, rand, NO_VARARGS, )
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(__pst_user_native_rand_(RAND_MAX));
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_NO_INSTRUMENT "__pst_user_native_rand_"
#pragma POLYSPACE_NO_INSTRUMENT "rand"
#endif
#endif /* __polyspace_rand */

#if defined(__polyspace_srand)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_srand)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_srand)
    #pragma POLYSPACE_INLINE_CHECKS "srand"
#endif /* !NO_CHECKS_INLINING */
#undef srand


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(srand, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(srand, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

#if defined(__OS_VXWORKS)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void * , srand, unsigned int, seed, NO_VARARGS, )
    {
        static void * volatile _polyspace_srand_return = 0;
        /*
          Warning: do not try to dereference this returned value
          or make a more precise stub of srand.
        */
        RETURN(_polyspace_srand_return);
    }
    PST_STUB_C_DEF_END
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, srand, unsigned int, seed, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'srand' function uses the argument as a seed for a new sequence of
          pseudo-random numbers to be returned by subsequent calls to 'rand'.
        */
        return ;
    }
    PST_STUB_C_DEF_END
#endif
#pragma POLYSPACE_POLYMORPHIC "srand"
#else
#pragma POLYSPACE_NO_INSTRUMENT "srand"
#endif
#endif /* __polyspace_srand */

#if defined(__polyspace_abort) && !defined(__polyspace_no_abort)
#if !defined(POLYSPACE_INSTRUMENT)
#undef abort


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(abort, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(abort, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
#ifdef __cplusplus
    #if _MSC_VER >= 1200
        PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF_NO_RETURN, void, abort, NO_VARARGS, )
    #else
        PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, abort, NO_VARARGS, __PST_THROW)
    #endif
#else /* __cplusplus */
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, abort, NO_VARARGS, )
#endif /* __cplusplus */
    {
        for(;;) ;
        /* no return */
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "abort"
#endif
#endif /* __polyspace_abort */

#if (defined(__polyspace_atexit) && !defined(__polyspace_no_atexit)) || (defined(__polyspace_exit) && !defined(__polyspace_no_exit))
    #if !defined(POLYSPACE_INSTRUMENT)
        #ifdef __cplusplus
            PST_LINK_C typedef void (*PST_DECL_C _polyspace_exit_function_type)(void);
        #else
            typedef void (*_polyspace_exit_function_type)(void);
        #endif
        static _polyspace_exit_function_type _polyspace_exit_functions[32];
        static int _polyspace_exit_registered_function_number = 0;
    #endif
#endif /* __polyspace_atexit || __polyspace_exit */

#if defined(__polyspace_atexit)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_atexit)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_atexit)
    #pragma POLYSPACE_INLINE_CHECKS "atexit"
#endif /* !NO_CHECKS_INLINING */
#undef atexit


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(atexit, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(atexit, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

#ifdef __cplusplus
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, atexit, _polyspace_exit_function_type, func, NO_VARARGS, __PST_THROW)
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, atexit, _polyspace_exit_function_type, func, NO_VARARGS, )
#endif
    {
        /*
          The 'atexit' function registers the function pointed to by 'func', to be
          called without arguments at normal program termination.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point func
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info arg_green_orange_red_message("argument", "is not a null function pointer", "may be a null function pointer", "is a null function pointer","")
        ASSERT_IS_VALID_CONDITION(func != (void (*)(void))0);
#pragma polyspace_check_info
        if (_polyspace_exit_registered_function_number >= 32) {
            int ret;
            ret = _polyspace_random_int();
            APPLY_CONSTRAINT(ret != 0);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(ret);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }
        _polyspace_exit_functions[_polyspace_exit_registered_function_number++] = func;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "atexit"
#endif
#endif /* __polyspace_atexit */

#if defined(__polyspace_exit) && !defined(__polyspace_no_exit)
#if !defined(POLYSPACE_INSTRUMENT)
#undef exit


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(exit, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(exit, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

#ifdef __cplusplus
    #if _MSC_VER >= 1200
        PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF_NO_RETURN, void, exit, int, status, NO_VARARGS, )
    #else
        PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, exit, int, status, NO_VARARGS, __PST_THROW)
    #endif
#else /* __cplusplus */
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, exit, int, status, NO_VARARGS, )
#endif /* __cplusplus */
    {
        /*
           The 'exit' function causes normal program termination to occur.

           First, all the functions registered by the 'atexit' function are called
           in the reverse order of their registration.
        */
    #if (defined(__polyspace_atexit) && !defined(__polyspace_no_atexit))
        int i;
        for (i = _polyspace_exit_registered_function_number - 1; i >= 0; i--)
            (_polyspace_exit_functions[i])();
    #endif
        /*
          Finally, control is returned to the host environment.

          The 'exit' function cannot return to its caller.
        */
        for(;;) ;
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "exit"
#else
#pragma POLYSPACE_NO_INSTRUMENT "exit"
#endif
#endif /* __polyspace_atexit || __polyspace_exit */

#if (defined(__polyspace_at_quick_exit) && !defined(__polyspace_no_at_quick_exit)) || (defined(__polyspace_quick_exit) && !defined(__polyspace_no_quick_exit))
    #if !defined(POLYSPACE_INSTRUMENT)
        #ifdef __cplusplus
            PST_LINK_C typedef void (*PST_DECL_C _polyspace_quick_exit_function_type)(void);
        #else
            typedef void (*_polyspace_quick_exit_function_type)(void);
        #endif
        static _polyspace_quick_exit_function_type _polyspace_quick_exit_functions[32];
        static int _polyspace_quick_exit_registered_function_number = 0;
    #endif
#endif /* __polyspace_at_quick_exit || __polyspace_quick_exit */

#if defined(__polyspace_at_quick_exit)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_at_quick_exit)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_at_quick_exit)
    #pragma POLYSPACE_INLINE_CHECKS "at_quick_exit"
#endif /* !NO_CHECKS_INLINING */
#undef at_quick_exit


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(at_quick_exit, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(at_quick_exit, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

#if __polyspace_use_customer_include
    #include <stdlib.h> //for at_quick_exit
#endif

#if (defined __cplusplus) && defined(__GLIBC__)
    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, int, at_quick_exit, _polyspace_quick_exit_function_type, func, NO_VARARGS, __PST_THROW)
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, at_quick_exit, _polyspace_quick_exit_function_type, func, NO_VARARGS, )
#endif
    {
        /*
          The 'at_quick_exit' function registers the function pointed to by 'func', to be
          called without arguments at normal program termination.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point func
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info arg_green_orange_red_message("argument", "is not a null function pointer", "may be a null function pointer", "is a null function pointer","")
        ASSERT_IS_VALID_CONDITION(func != (void (*)(void))0);
#pragma polyspace_check_info
        if (_polyspace_quick_exit_registered_function_number >= 32) {
            int ret;
            ret = _polyspace_random_int();
            APPLY_CONSTRAINT(ret != 0);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(ret);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }
        _polyspace_quick_exit_functions[_polyspace_quick_exit_registered_function_number++] = func;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "at_quick_exit"
#endif
#endif /* __polyspace_at_quick_exit */

#if defined(__polyspace_quick_exit) && !defined(__polyspace_no_quick_exit)
#if !defined(POLYSPACE_INSTRUMENT)
#undef quick_exit


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(quick_exit, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(quick_exit, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

#ifdef __cplusplus
    #if _MSC_VER >= 1200
        PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF_NO_RETURN, void, quick_exit, int, status, NO_VARARGS, )
    #else
        PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, quick_exit, int, status, NO_VARARGS, __PST_THROW)
    #endif
#else /* __cplusplus */
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, quick_exit, int, status, NO_VARARGS, )
#endif /* __cplusplus */
    {
        /*
           The 'quick_exit' function causes normal program termination to occur.

           First, all the functions registered by the 'at_quick_exit' function are called
           in the reverse order of their registration.
        */
    #if (defined(__polyspace_at_quick_exit) && !defined(__polyspace_no_at_quick_exit))
        int i;
        for (i = _polyspace_quick_exit_registered_function_number - 1; i >= 0; i--)
            (_polyspace_quick_exit_functions[i])();
    #endif
        /*
          Finally, control is returned to the host environment.

          The 'quick_exit' function cannot return to its caller.
        */
        for(;;) ;
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "quick_exit"
#else
#pragma POLYSPACE_NO_INSTRUMENT "quick_exit"
#endif
#endif /* __polyspace_at_quick_exit || __polyspace_quick_exit */

#if defined(__polyspace__Exit) && !defined(__polyspace_no__Exit)
#if !defined(POLYSPACE_INSTRUMENT)
#undef _Exit

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(_Exit, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(_Exit, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

#ifdef __cplusplus
    #if _MSC_VER >= 1200
        PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF_NO_RETURN, void, _Exit, int, status, NO_VARARGS, )
    #else
        PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, _Exit, int, status, NO_VARARGS, __PST_THROW)
    #endif
#else /* __cplusplus */
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, _Exit, int, status, NO_VARARGS, )
#endif /* __cplusplus */
    {

        /*
           The '_Exit' function causes normal program termination to occur but does not
           call handlers registered with 'at_quick_exit' nor 'atexit'.

           Control is returned to the host environment.

           The '_Exit' function cannot return to its caller.
           */
        for(;;) ;
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "_Exit"
#else
#pragma POLYSPACE_NO_INSTRUMENT "_Exit"
#endif
#endif /* __polyspace__Exit */

#if defined(__polyspace_getenv)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_getenv)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_getenv)
    #pragma POLYSPACE_INLINE_CHECKS "getenv"
#endif /* !NO_CHECKS_INLINING */
#undef getenv


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(getenv, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(getenv, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , getenv, const char *, name, NO_VARARGS, __PST_THROW)
    {
      static char *_polyspace_environment_list;
        /*
          The 'getenv' function searches an environment list, provided by the host
          environment, for a string that matches the string pointed to by 'name'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (environment name buffer)"
#pragma Inspection_Point name
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("argument (environment name buffer)")
        ASSERT_IS_VALID_STRING(name);
#pragma polyspace_check_info

        /*
          The 'getenv' function returns a pointer to a string associated with the
          matched list member.

          If the specified 'name' cannot be found, a null pointer is returned.
        */
        if (_polyspace_random_int())
          RETURN((char *) 0);

        _polyspace_environment_list = (char*)__ps_builtin_random_string() ;
        RETURN(_polyspace_environment_list);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "getenv"
#endif
#endif /* __polyspace_getenv */

#if defined(__polyspace_system)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_system)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_system)
    #pragma POLYSPACE_INLINE_CHECKS "system"
#endif /* !NO_CHECKS_INLINING */
#undef system


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(system, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(system, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, system, const char *, s, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        /*
          The 'system' function passes the string pointed to by 's' to the host
          environment to be executed by a command processor in an implementation-
          defined manner. A null pointer may be used for 's' to inquire whether a
          command processor exists.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info null_or_valid_string_message("argument")
        if (s != 0)
            ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info

        if (s != 0 && _polyspace_random_int()) {
            for (;;) ; /* The execution may not return */
        } else {
            /*
              If the argument is a null pointer, the 'system' function returns
              nonzero only if a command processor is available.
              If the argument is not a null pointer, the 'system' function returns an
              implementation-defined value.
            */
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(_polyspace_random_int());
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "system"
#else
#pragma POLYSPACE_NO_INSTRUMENT "system"
#endif
#endif /* __polyspace_system */

#if defined(__cplusplus)
    #if defined(__polyspace_bsearch) && !defined(__polyspace_no_bsearch) || defined(__polyspace_qsort) && !defined(__polyspace_no_qsort)
        PST_LINK_C typedef int (*PST_DECL_C _polyspace_compare_function_type)(const void *, const void *);
    #endif
#else
    typedef int (*_polyspace_compare_function_type)(const void *, const void *);
#endif

#if defined(__polyspace_bsearch) && !defined(__polyspace_no_bsearch)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_bsearch)
    #pragma POLYSPACE_INLINE_CHECKS "bsearch"
#endif /* !NO_CHECKS_INLINING */


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(bsearch, 5)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_5
    #define RETURN(x) RETURN_CUSTOM_TYPE(bsearch, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_5
    #define RETURN(x) return (x)
#endif

#ifdef __cplusplus
    #undef bsearch /* C++ : stdlib.h included before */
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void * , bsearch, const void *, key, const void *, base, size_t, nel, size_t, size, _polyspace_compare_function_type, compar, NO_VARARGS, )
#else /* __cplusplus */
    #undef bsearch
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void * , bsearch, const void *, key, const void *, base, size_t, nel, size_t, size, _polyspace_compare_function_type, compar, NO_VARARGS, )
#endif /* __cplusplus */
    {
        size_t i;
        char *p;
        /*
          The 'bsearch' function searches an array of 'nel' objects, the initial of
          which is pointed to by 'base', for an element that matches the object
          pointed to by key. The size of each element of the array is specified
          by 'size'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument (array)"
#pragma Inspection_Point base
        ;
#pragma polyspace_value_info

        p = (char *)base;
#pragma polyspace_check_info readable_pointer_message("second argument (array)")
        ASSERT_IS_READABLE_ARRAY(char, p, nel * size);
#pragma polyspace_check_info
        /*
           The 'compar' function may be called any times with key as the first
           argument and an element of the array as a second argument.
        */
        if (nel > 0) {
            while (_polyspace_random_int()) {
                i = _polyspace_random_size_t();
                APPLY_CONSTRAINT(i < nel);
#pragma polyspace_check_info arg_green_orange_red_message("call to comparison function", "succeeds", "may fail", "fails", "")
                (*compar)(key, (void *) ((char *) base + i * size));
#pragma polyspace_check_info
            }
            /*
              The return value may be one of the element of the array or NULL.
            */
            if (_polyspace_random_int()) {
                i = _polyspace_random_size_t();
                APPLY_CONSTRAINT(i < nel);
                RETURN((void *) ((char *) base + i * size));
            }
        }
        RETURN((void*)0);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "bsearch"
#endif
#endif /* __polyspace_bsearch */

#if defined(__polyspace_qsort) && !defined(__polyspace_no_qsort)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_qsort)
    #pragma POLYSPACE_INLINE_CHECKS "qsort"
#endif /* !NO_CHECKS_INLINING */


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(qsort, 4)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_4
    #define RETURN(x) RETURN_CUSTOM_TYPE(qsort, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_4
    #define RETURN(x) return (x)
#endif

#ifdef __cplusplus
    #undef qsort /* C++ : stdlib.h included before */
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, qsort, void *, base, size_t, nel, size_t, size, _polyspace_compare_function_type, compar, NO_VARARGS, )
#else /* __cplusplus */
    #undef qsort
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, qsort, void *, base, size_t, nel, size_t, size, _polyspace_compare_function_type, compar, NO_VARARGS, )
#endif /* __cplusplus */
    {
        size_t i, j, k;
        char tmp;
        char *p;
        /*
          The 'qsort' function sorts an array of 'nel' objects, the initial of
          which is pointed to by 'base'. The size of each object is specified by
          'size'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (array)"
#pragma Inspection_Point base
        ;
#pragma polyspace_value_info

        p = (char *)base;
#pragma polyspace_check_info readable_pointer_message("first argument (array)")
        ASSERT_IS_READABLE_ARRAY(char, p, nel * size);
#pragma polyspace_check_info
        /*
           The 'compar' function may be called any times with elements of the
           array as arguments and the location of the elements may change at
           the same time.
        */
        if (nel > 0) {
            while (_polyspace_random_int()) {
                i = _polyspace_random_size_t();
                APPLY_CONSTRAINT(i < nel);
                j = _polyspace_random_size_t();
                APPLY_CONSTRAINT(j < nel);
                APPLY_CONSTRAINT(i != j);
                if (_polyspace_random_int()) {
                    /* Call the 'compar' function. */
#pragma polyspace_check_info arg_green_orange_red_message("call to comparison function", "succeeds", "may fail", "fails", "")
                    (*compar)((void *) ((char *) base + i * size),
                              (void *) ((char *) base + j * size));
#pragma polyspace_check_info
                } else {
                    /* Swap two elements. */
                    for (k = 0; k < size; k++) {
                        tmp = *((char *) base + i * size + k);
                        *((char *) base + i * size + k) = *((char *) base + j * size + k);
                        *((char *) base + j * size + k) = tmp;
                    }
                }
            }
        }
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "qsort"
#endif
#endif /* __polyspace_qsort */

#if defined(__polyspace_abs)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_abs)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_abs)
    #pragma POLYSPACE_INLINE_CHECKS "abs"
#endif /* !NO_CHECKS_INLINING */
#undef abs


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(abs, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(abs, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, abs, int, x, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'abs' function computes the absolute value of an integer 'x'.
        */
        int res;
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point x
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_message("argument", "[INT_MIN+1..INT_MAX]")
        if (x >= 0)
            res = x;
        else
            res = -x;
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(res);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "abs"
#else
#pragma POLYSPACE_NO_INSTRUMENT "abs"
#endif
#endif /* __polyspace_abs */

#if defined(__polyspace_div)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_div)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_div)
    #pragma POLYSPACE_INLINE_CHECKS "div"
#endif /* !NO_CHECKS_INLINING */
#undef div


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(div, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) return (x) /* ISO C forbids casting nonscalar type to the same type, so we must not do this with returned struct */
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif

#ifndef PST_STDLIB_IS_ALREADY_INCLUDED
#if __polyspace_use_customer_include
    #include <stdlib.h> //for div_t
#endif
    #define PST_STDLIB_IS_ALREADY_INCLUDED
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, div_t, div, int, numer, int, denom, NO_VARARGS, __PST_THROW)
    {
        div_t result;
        /*
          The 'div' function computes the quotient and remainder of the division
          of the numerator 'numer' by the denominator 'denom'.

          The 'div' function returns a structure of type 'div_t', comprising both
          the quotient and the remainder.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "first argument (numerator)"
#pragma Inspection_Point numer
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "second argument (denominator)"
#pragma Inspection_Point denom
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") arg_green_orange_red_message("second argument (denominator)", "is non-zero", "may be zero", "is zero", "")
        ASSERT_IS_VALID_CONDITION(denom != 0);
#pragma polyspace_check_info

#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") arg_green_orange_red_message("return value", "does not overflow", "may overflow", "definitely overflow", "")
#ifndef __div_t_field0
#define __div_t_field0 quot
#endif 
#ifndef __div_t_field1
#define __div_t_field1 rem
#endif 
        result.__div_t_field0 = numer / denom;
        result.__div_t_field1  = numer % denom;
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(result);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "div"
#else
#pragma POLYSPACE_NO_INSTRUMENT "div"
#endif
#endif /* __polyspace_div */

#if defined(__polyspace_labs)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_labs)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_labs)
    #pragma POLYSPACE_INLINE_CHECKS "labs"
#endif /* !NO_CHECKS_INLINING */
#undef labs


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(labs, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(labs, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, long int, labs, long int, x, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'labs' function is similar to the 'abs' function, except that the
          argument and the returned value each have type 'long int'.
        */
        long int res;
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "argument"
#pragma Inspection_Point x
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") expected_range_message("argument", "[LONG_MIN+1..LONG_MAX]")
        if (x >= 0)
            res = x;
        else
            res = -x;
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(res);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "labs"
#else
#pragma POLYSPACE_NO_INSTRUMENT "labs"
#endif
#endif /* __polyspace_labs */

#if defined(__polyspace_ldiv)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_ldiv)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_ldiv)
    #pragma POLYSPACE_INLINE_CHECKS "ldiv"
#endif /* !NO_CHECKS_INLINING */
#undef ldiv


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(ldiv, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) return (x) /* ISO C forbids casting nonscalar type to the same type, so we must not do this with returned struct */
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
#ifndef PST_STDLIB_IS_ALREADY_INCLUDED
#if __polyspace_use_customer_include
    #include <stdlib.h> //for div_t
#endif
    #define PST_STDLIB_IS_ALREADY_INCLUDED
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, ldiv_t, ldiv, long, numer, long, denom, NO_VARARGS, __PST_THROW)
    {
        ldiv_t result;
        /*
          The 'ldiv' function is similar to the 'div' function, except that the
          arguments and the members of the returned structure (which has type
          ldiv_t) all have type 'long int'.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "first argument (numerator)"
#pragma Inspection_Point numer
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "second argument (denominator)"
#pragma Inspection_Point denom
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") arg_green_orange_red_message("second argument (denominator)", "is non-zero", "may be zero", "is zero", "")
        ASSERT_IS_VALID_CONDITION(denom != 0);
#pragma polyspace_check_info

#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") arg_green_orange_red_message("return value", "does not overflow", "may overflow", "definitely overflow", "")
#ifndef __ldiv_t_field0
#define __ldiv_t_field0 quot
#endif 
#ifndef __ldiv_t_field1
#define __ldiv_t_field1 rem
#endif 
        result.__ldiv_t_field0 = numer / denom;
        result.__ldiv_t_field1  = numer % denom;
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(result);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "ldiv"
#else
#pragma POLYSPACE_NO_INSTRUMENT "ldiv"
#endif
#endif /* __polyspace_ldiv */

#if defined(__polyspace_lldiv)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_lldiv)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_lldiv)
    #pragma POLYSPACE_INLINE_CHECKS "lldiv"
#endif /* !NO_CHECKS_INLINING */
#undef lldiv


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(lldiv, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) return (x) /* ISO C forbids casting nonscalar type to the same type, so we must not do this with returned struct */
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
#ifndef PST_STDLIB_IS_ALREADY_INCLUDED
#if __polyspace_use_customer_include
    #include <stdlib.h> //for div_t
#endif
    #define PST_STDLIB_IS_ALREADY_INCLUDED
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, lldiv_t, lldiv, long long, numer, long long, denom, NO_VARARGS, __PST_THROW)
    {
        lldiv_t result;
        /*
          The 'lldiv' function is similar to the 'div' function, except that the
          arguments and the members of the returned structure (which has type
          lldiv_t) all have type 'long long int'.
        */
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "first argument (numerator)"
#pragma Inspection_Point numer
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "second argument (denominator)"
#pragma Inspection_Point denom
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") arg_green_orange_red_message("second argument (denominator)", "is non-zero", "may be zero", "is zero", "")
        ASSERT_IS_VALID_CONDITION(denom != 0);
#pragma polyspace_check_info

#pragma polyspace_check_info STD_LIB_type("INT_STD_LIB") arg_green_orange_red_message("return value", "does not overflow", "may overflow", "definitely overflow", "")
#ifndef __lldiv_t_field0
#define __lldiv_t_field0 quot
#endif 
#ifndef __lldiv_t_field1
#define __lldiv_t_field1 rem
#endif 
        result.__lldiv_t_field0 = numer / denom;
        result.__lldiv_t_field1  = numer % denom;
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(result);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "lldiv"
#else
#pragma POLYSPACE_NO_INSTRUMENT "lldiv"
#endif
#endif /* __polyspace_lldiv */

#if defined(__polyspace_mblen)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_mblen)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_mblen)
    #pragma POLYSPACE_INLINE_CHECKS "mblen"
#endif /* !NO_CHECKS_INLINING */
#undef mblen


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(mblen, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(mblen, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, mblen, const char *, s, size_t, n, NO_VARARGS, __PST_THROW)
    {
        /*
          If 's' is not a null pointer, the 'mblen' function determines the
          number of bytes contained in the multi-byte character pointed to by 's'.

          If 's' is a null pointer, the 'mblen' function returns a nonzero or zero
          value, if multi-byte character encodings, respectively, do or do not have
          state-dependent encodings. If 's' is not a null pointer, the 'mblen'
          function either returns 0 (if 's' points to the null character), or
          returns the number of bytes that are contained in the multi-byte character
          (if the next 'n' or fewer bytes form a valid multi-byte character), or
          returns -1 (if they do not form a valid multi-byte character).
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info null_or_valid_string_message("first argument")
        if (s != (char *) 0) {
            ASSERT_IS_READABLE_ARRAY(char, s, n);
        }
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "mblen"
#else
#pragma POLYSPACE_NO_INSTRUMENT "mblen"
#endif
#endif /* __polyspace_mblen */

#if defined(__polyspace_mbtowc)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_mbtowc)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_mbtowc)
    #pragma POLYSPACE_INLINE_CHECKS "mbtowc"
#endif /* !NO_CHECKS_INLINING */
#undef mbtowc


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(mbtowc, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(mbtowc, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, mbtowc, wchar_t *, pwc, const char *, s, size_t, n, NO_VARARGS, __PST_THROW)
    {
        size_t len;
        volatile wchar_t random_wc;
        /*
          If 's' is not a null pointer, the 'mbtowc' function determines the number
          of bytes that are contained in the multi-byte character pointed to by 's'.
          It then determines the code for the value of type 'wchar_t' that
          corresponds to that multi-byte character.

          If 's' is a null pointer, the 'mbtowc' function returns a nonzero or
          zero value, if multi-byte character encodings, respectively, do or do not
          have state-dependent encodings. If 's' is not a null pointer, the
          'mbtowc' function either returns 0 (if 's' points to the null character),
          or returns the number of bytes that are contained in the converted
          multi-byte character (if the next 'n' or fewer bytes form a valid
          multi-byte character), or returns -1 (if they do not form a valid
          multi-byte character).

          In no case will the value returned be greater than n or the value of
          the MB_CUR_MAX macro.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (wide char output)"
#pragma Inspection_Point pwc
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

        if (s != (char *) 0) {
            len = _polyspace_random_size_t();
            APPLY_CONSTRAINT(len <= n);
#pragma polyspace_check_info readable_pointer_message("second argument (string buffer)")
            ASSERT_IS_READABLE_ARRAY(char, s, len);
#pragma polyspace_check_info
        }
        /*
          If the multi-byte character is valid and 'pwc' is not a null pointer, the
          'mbtowc' function stores the code in the object pointed to by 'pwc'.
        */
        if (pwc != (wchar_t *) 0) {
#pragma polyspace_check_info writable_pointer_message("first argument (wide char output)")
            *pwc = random_wc;
#pragma polyspace_check_info
        }
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "mbtowc"
#endif
#endif /* __polyspace_mbtowc */

#if defined(__polyspace_wctomb)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_wctomb)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_wctomb)
    #pragma POLYSPACE_INLINE_CHECKS "wctomb"
#endif /* !NO_CHECKS_INLINING */
#undef wctomb


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(wctomb, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(wctomb, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, wctomb, char *, s, wchar_t, wchar, NO_VARARGS, __PST_THROW)
    {
        int ret;
        int i ;
        size_t len;
        /*
          The 'wctomb' function determines the number of bytes needed to represent
          the multi-byte character corresponding to the code whose value is 'wchar'
          (including any change in shift state). It stores the multi-byte character
          representation in the array object pointed to by 's' (if 's' is not a
          null pointer). At most MB_CUR_MAX characters are stored.

          If 's' is a null pointer, the 'wctomb' function returns a nonzero or zero
          value, if multi-byte character encodings, respectively, do or do not have
          state-dependent encodings. If 's' is not a null pointer, the 'wctomb'
          function returns -1 if the value of 'wchar' does not correspond to a valid
          multi-byte character, or returns the number of bytes that are contained
          in the multi-byte character corresponding to the value of 'wchar'.

          In no case will the value returned be greater than the value of the
          MB_CUR_MAX macro.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

        if (s != (char *) 0) {
            len = _polyspace_random_size_t();
            APPLY_CONSTRAINT(len > 0);
#pragma polyspace_check_info writable_array_message("first argument (string buffer)")
            ASSERT_IS_WRITABLE_ARRAY(char, s, len);
#pragma polyspace_check_info

            ret = _polyspace_random_int();
            APPLY_CONSTRAINT(ret >= -1);
            for (i = 0; i < ret; i++) {
                s[i] = _polyspace_random_char();
            }

        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(ret);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "wctomb"
#endif
#endif /* __polyspace_wctomb */

#if defined(__polyspace_mbstowcs)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_mbstowcs)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_mbstowcs)
    #pragma POLYSPACE_INLINE_CHECKS "mbstowcs"
#endif /* !NO_CHECKS_INLINING */
#undef mbstowcs


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(mbstowcs, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(mbstowcs, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, size_t, mbstowcs, wchar_t *, pwcs, const char *, s, size_t, n, NO_VARARGS, __PST_THROW)
    {
        volatile wchar_t random_wc;
        size_t i, len;
        /*
          The 'mbstowcs' function converts a sequence of multi-byte characters that
          begins in the initial shift state from the array pointed to by 's' into
          a sequence of corresponding codes and stores not more than 'n' codes into
          the array pointed to by 'pwcs'.

          No more than 'n' elements will be modified in the array pointed to by
          'pwcs'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (wide char buffer output)"
#pragma Inspection_Point pwcs
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (string buffer)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

        if (s != (char *) 0) {
            len = _polyspace_random_size_t();
#pragma polyspace_check_info valid_string_message("second argument (string buffer) ")
            ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info
        }
        if (pwcs == (void *) 0) {
            len = __ps_builtin_strlen(s);
        } else {
            len = _polyspace_random_size_t();
            APPLY_CONSTRAINT(len <= n);
            if (len >= 0) {
#pragma polyspace_check_info writable_array_message("first argument (wide char buffer output)")
                ASSERT_IS_WRITABLE_ARRAY (wchar_t, pwcs, len);
#pragma polyspace_check_info
                for (i = 0; i < len; i++) {
                    if (_polyspace_random_int()) {
                    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
                    #endif
                        RETURN((size_t) -1);
                    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
                    #endif
                    }
                    pwcs[i] = random_wc;
                }
                pwcs[len] = 0; /* C/6212: do not forget the terminating 0 */
                /* If an invalid multi-byte character is encountered, the 'mbstowcs' function
                   returns (size_t)-1. Otherwise, the 'mbstowcs' function returns the number
                   of array elements modified, not including a terminating zero code, if any.
                */
            }
        }

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(len);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "mbstowcs"
#endif
#endif /* __polyspace_mbstowcs */

#if defined(__polyspace_wcstombs)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_wcstombs)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_wcstombs)
    #pragma POLYSPACE_INLINE_CHECKS "wcstombs"
#endif /* !NO_CHECKS_INLINING */
#undef wcstombs


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(wcstombs, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(wcstombs, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, size_t, wcstombs, char *, s, const wchar_t *, pwcs, size_t, n, NO_VARARGS, __PST_THROW)
    {
        size_t i, len;
        /*
          The 'wcstombs' function converts a sequence of codes that correspond to
          multi-byte characters from the array pointed to by 'pwcs' into a sequence
          of multi-byte characters that begins in the initial shift state and stores
          these multi-byte characters into the array pointed to by 's', stopping if a
          multi-byte character would exceed the limit of 'n' total bytes or if a null
          character is stored.

          No more than 'n' bytes will be modified in the array pointed to by 's'.

          If a code is encountered that does not correspond to a valid multi-byte
          character, the 'wcstombs' function returns (size_t)-1. Otherwise, the
          'wcstombs' function returns the number of bytes modified, not including
          the terminating null character, if any. */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (string buffer output)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument (wide char bufer)"
#pragma Inspection_Point pwcs
        ;
#pragma polyspace_value_info

        len = _polyspace_random_size_t();
#pragma polyspace_check_info readable_pointer_message("second argument (wide char buffer)")
        ASSERT_IS_READABLE_ARRAY(wchar_t, pwcs, len);
#pragma polyspace_check_info
        len = _polyspace_random_size_t();
        APPLY_CONSTRAINT(len <= n);
        if (len >= 0) {
#pragma polyspace_check_info writable_array_message("first argument (string buffer output)")
            ASSERT_IS_WRITABLE_ARRAY (char, s, len);
#pragma polyspace_check_info
            for (i=0; i < len; i++) {
                if (_polyspace_random_int()) {
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
                #endif
                    RETURN((size_t) -1);
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
                #endif
                }
                s[i] = _polyspace_random_char();
            }
            s[len] = 0; /* C/6212: do not forget the terminating 0 */
        }

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(len);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "wcstombs"
#endif
#endif /* __polyspace_wcstombs */

    /* C++ delete operator call free */
#if (defined(__cplusplus)) && (defined(__polyspace_delete))
    #define __polyspace_free
#endif

#if (defined(__polyspace_free) && !defined(__polyspace_no_free)) || (defined(__polyspace_realloc) && !defined(__polyspace_no_realloc))
#if !defined(POLYSPACE_INSTRUMENT)


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(free, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(free, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, free, void *, ptr, NO_VARARGS, __PST_THROW)
    {   /* C/9277 */
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "free"
#endif
#endif /* __polyspace_free || __polyspace_realloc */

#if defined(__polyspace_memalign)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_memalign)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_memalign)
    #pragma POLYSPACE_INLINE_CHECKS "memalign"
#endif /* !NO_CHECKS_INLINING */
#undef memalign
    /* C++ : for some reasons memalign need to be defined, contrary to C */
#ifdef __cplusplus


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(memalign, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(memalign, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif

#ifdef __cplusplus
    PST_STUB_C_DECL(void *, malloc,  (size_t)) __PST_THROW;
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void * , memalign, size_t, alignment, size_t, size, NO_VARARGS, __PST_THROW)
    {
        RETURN(malloc(size));
    }
    PST_STUB_C_DEF_END
#else /* __cplusplus */
    extern void  *memalign(size_t alignment, size_t size);
#endif /* __cplusplus */
#else
#pragma POLYSPACE_NO_INSTRUMENT "memalign"
#endif
#endif /* __polyspace_memalign */


    /* Allocation procedures */
#if defined(__cplusplus)

    /* Do not put allocation procedures for C++ Verifier (except realloc) */
    /* must be declared with PST_STUB_C_DECL macros => done before */

    /* C++/5818 alloca is macro-ized by visual include as _alloca */
#if defined(__polyspace__alloca) && !defined(__polyspace_no__alloca)
#undef alloca
    PST_STUB_C_DECL(void *, alloca,  (size_t));
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(_alloca, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(_alloca, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void * , _alloca, size_t, n, NO_VARARGS, )
    {
        RETURN(alloca(n));
    }
    PST_STUB_C_DEF_END
#endif /* __polyspace__alloca */

#else /* __cplusplus */

#if (defined(__polyspace_malloc) && !defined(__polyspace_no_malloc)) || (defined(__polyspace_realloc) && !defined(__polyspace_no_realloc))
    #if !defined(POLYSPACE_INSTRUMENT)
        #undef malloc
        extern void  *malloc(size_t size);
        #pragma POLYSPACE_PURE "malloc"
    #else
        #pragma POLYSPACE_NO_INSTRUMENT "malloc"
    #endif
#endif /* __polyspace_malloc */

#if defined(__polyspace_calloc) && !defined(__polyspace_no_calloc)
    #if !defined(POLYSPACE_INSTRUMENT)
        #undef calloc
        extern void  *calloc(size_t nelem, size_t elsize);
        #pragma POLYSPACE_PURE "calloc"
    #else
        #pragma POLYSPACE_NO_INSTRUMENT "calloc"
    #endif
#endif /* __polyspace_calloc */

#if defined(__polyspace_valloc) && !defined(__polyspace_no_valloc)
    #if !defined(POLYSPACE_INSTRUMENT)
        #undef valloc
        extern void  *valloc(size_t size);
        #pragma POLYSPACE_PURE "valloc"
    #else
        #pragma POLYSPACE_NO_INSTRUMENT "valloc"
    #endif
#endif /* __polyspace_valloc */

#if defined(__polyspace_alloca) && !defined(__polyspace_no_alloca)
    #if !defined(POLYSPACE_INSTRUMENT)
        #undef alloca
        extern void  *alloca(size_t size); /* alloca is often redefined as __builtin_alloca */
        #pragma POLYSPACE_PURE "alloca"
    #else
        #pragma POLYSPACE_NO_INSTRUMENT "alloca"
    #endif
#endif /* __polyspace_alloca */

#if defined(__polyspace___builtin_alloca) && !defined(__polyspace_no___builtin_alloca)
    #if !defined(POLYSPACE_INSTRUMENT)
        #undef __builtin_alloca
        extern void  *__builtin_alloca(size_t size);
        #pragma POLYSPACE_PURE "__builtin_alloca"
    #else
        #pragma POLYSPACE_NO_INSTRUMENT "__builtin_alloca"
    #endif
#endif /* __polyspace___builtin_alloca */


#endif /* __cplusplus */

#if defined(__polyspace_realloc)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_realloc)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_realloc)
    #pragma POLYSPACE_INLINE_CHECKS "realloc"
#endif /* !NO_CHECKS_INLINING */
#undef realloc


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(realloc, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(realloc, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
#if !defined(__cplusplus)
extern void  *malloc(size_t size);
#else
PST_STUB_C_DECL(void *, malloc,  (size_t)) __PST_THROW;
PST_STUB_C_DECL(__PST_CRTNOALIAS void,free,(void *)) __PST_THROW;
#endif /* __cplusplus */

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void * , realloc, void *, ptr, size_t, size, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'realloc' function changes the size of the object pointed to by
          'ptr' to the size specified by 'size'.

          The 'realloc' function returns either a null pointer or a pointer to the
          possibly moved allocated space.

          If 'ptr' is a null pointer, the 'realloc' function behaves like the
          'malloc' function for the specified size.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (input pointer)"
#pragma Inspection_Point ptr
        ;
#pragma polyspace_value_info

        if (ptr == (void *) 0)
            RETURN((void *) malloc(size));
        if (size > 0)
        {
#pragma polyspace_check_info STD_LIB_type("MEM_STD_LIB") readable_pointer_message ("first argument (input pointer)")
            /* check that ptr is a valid pointer to at least one byte except in case where
             * size == 0, realloc will free the input pointer that may be not readable.
             */
            ASSERT_IS_WRITABLE_POINTER(char, ptr); /* only check accessibility */
#pragma polyspace_check_info
        }
        else {
            /*
              If size is zero and ptr is not a null pointer, the object it points to
              is freed.
            */
            free(ptr);
            RETURN(0);
        }
        /*
          If the space cannot be allocated, the object pointed to by 'ptr' is
          unchanged.
        */
        if (_polyspace_random_int())
            RETURN(ptr);
        RETURN((void *) malloc(size));
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "realloc"
#endif
#endif /* __polyspace_realloc */

/* DIAB defines __alloca to be alloca */
#if defined (__DCC__) && defined(__polyspace___alloca) && !defined(__polyspace_no___alloca)
#undef alloca
#ifdef __cplusplus
    PST_STUB_C_DECL(void *, alloca,  (size_t));
#endif /* __cplusplus */
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(__alloca, 1)
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
#define RETURN(x) RETURN_CUSTOM_TYPE(__alloca, x)
#else
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
#define RETURN(x) return (x)
#endif
PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void * , __alloca, size_t, n, NO_VARARGS, )
{
  RETURN(alloca(n));
}
PST_STUB_C_DEF_END
#endif /* __polyspace___alloca && __DCC__ */

    /*********************************************************************** string.h */
    /* For each stub that uses strlen, we must define __polyspace_strlen */
#if (defined(__polyspace_strlen) && !defined(__polyspace_no_strlen))
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strlen)
    #pragma POLYSPACE_INLINE_CHECKS "strlen"
#endif /* !NO_CHECKS_INLINING */


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strlen, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(strlen, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, size_t, strlen, const char *, s, NO_VARARGS, __PST_THROW)
    {
        size_t i = 0;
        /*
          The 'strlen' function computes the length of the string pointed to by 's'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("argument")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info
        i =  __ps_builtin_strlen(s);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(i);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strlen"
#endif
#endif /* __polyspace_strlen */


#if defined(__polyspace_memcpy)
    #if defined(POLYSPACE_INSTRUMENT)
        #pragma POLYSPACE_NO_INSTRUMENT "memcpy"
    #endif
#endif /* __polyspace_memcpy */


#if defined(__polyspace_memmove)
    #if defined(POLYSPACE_INSTRUMENT)
        #pragma POLYSPACE_NO_INSTRUMENT "memmove"
    #endif
#endif /* __polyspace_memmove */

#if defined(__polyspace_strcpy)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strcpy)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strcpy)
    #pragma POLYSPACE_INLINE_CHECKS "strcpy"
#endif /* !NO_CHECKS_INLINING */
#undef strcpy


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strcpy, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strcpy, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char* , strcpy, char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        int i;
        int s2_len = 0;
        /*
          The 'strcpy' function copies the string pointed to by 's2' (including the
          terminating null character) into the array pointed to by 's1'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (destination)"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (source)"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (source)")
        ASSERT_IS_VALID_STRING(s2);
        s2_len = __ps_builtin_strlen(s2);
#pragma polyspace_check_info
        
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of second argument (source)"
#pragma Inspection_Point s2_len
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") arg_green_orange_red_message("first argument (destination)", "has the correct size", "may not be the correct size", "is not the correct size", "")
        ASSERT_IS_WRITABLE_ARRAY(char, s1, s2_len+1);
#pragma polyspace_check_info

        for (i = 0; i < s2_len; i++)
          s1[i] = s2[i];
        s1[i] = 0;
        /*
          The 'strcpy' function returns the value of 's1'.
        */
        RETURN(s1);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strcpy"
#endif
#endif /* __polyspace_strcpy */

#if defined(__polyspace_strncpy)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strncpy)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strncpy)
    #pragma POLYSPACE_INLINE_CHECKS "strncpy"
#endif /* !NO_CHECKS_INLINING */
#undef strncpy


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strncpy, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(strncpy, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , strncpy, char *, s1, const char *, s2, size_t, n, NO_VARARGS, __PST_THROW)
    {
      int i, len;
        /*
          The 'strncpy' function copies not more than 'n' characters (characters that
          follow a null character are not copied) from the array pointed to by 's2'
          to the array pointed to by 's1'.

          If the array pointed to by 's2' is a string that is shorter than 'n'
          characters, null characters are appended to the copy in the array pointed
          to by 's1', until 'n' characters in all have been written.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (destination)"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (source)"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") bounded_valid_string_message("second argument (source)", "third argument (n)")
        ASSERT_IS_BOUNDED_VALID_STRING(s2, n);
        len=__ps_builtin_bounded_strlen(s2, n);
#pragma polyspace_check_info

#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of copied string"
#pragma Inspection_Point len
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") arg_green_orange_red_message("first argument (destination)", "is", "may be", "is not", " allocated enough to receive the copied string")
        ASSERT_IS_WRITABLE_ARRAY_EXCEPT_ZERO(char, s1, n)
#pragma polyspace_check_info
          
        for (i = 0; i < n && s2[i] != 0; i++)
            s1[i] = s2[i];

        for ( ; i < n; i++)
            s1[i] = 0;

        /*
          The 'strncpy' function returns the value of 's1'.
        */
        RETURN(s1);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strncpy"
#endif
#endif /* __polyspace_strncpy */

#if defined(__polyspace_strcat)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strcat)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strcat)
    #pragma POLYSPACE_INLINE_CHECKS "strcat"
#endif /* !NO_CHECKS_INLINING */
#undef strcat


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strcat, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strcat, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , strcat, char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        int i = 0, j = 0, k, needed_len;
        /*
          The 'strcat' function appends a copy of the string pointed to by 's2'
          (including the terminating null character) to the end of the string
          pointed to by 's1'. The initial character of 's2' overwrites the null
          character at the end of 's1'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (destination)"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (source)"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (source)")
        ASSERT_IS_VALID_STRING(s2);
        j = __ps_builtin_strlen(s2);
#pragma polyspace_check_info
        
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of second argument (source)"
#pragma Inspection_Point j
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument (destination)")
        ASSERT_IS_VALID_STRING(s1);
        i = __ps_builtin_strlen(s1);
#pragma polyspace_check_info
        
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of first argument (destination)"
#pragma Inspection_Point i
        ;
#pragma polyspace_value_info

        needed_len = i + j + 1;
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "needed allocated size for first argument (destination)"
#pragma Inspection_Point needed_len
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") arg_green_orange_red_message("first argument (destination)", "has the correct size", "may not be the correct size", "is not the correct size", "")
        ASSERT_IS_WRITABLE_ARRAY(char, s1, needed_len); /* including the terminating '\0' */
#pragma polyspace_check_info

        for (k = 0; k < j; k++)
            s1[i + k] = s2[k];
        s1[i+j] = 0; // terminating null
        /*
          The 'strcat' function returns the value of 's1'.
        */
        RETURN(s1);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strcat"
#endif
#endif /* __polyspace_strcat */

#if defined(__polyspace_strncat)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strncat)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strncat)
    #pragma POLYSPACE_INLINE_CHECKS "strncat"
#endif /* !NO_CHECKS_INLINING */
#undef strncat


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strncat, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(strncat, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , strncat, char *, s1, const char *, s2, size_t, n, NO_VARARGS, __PST_THROW)
    {
        int i, s1_len, s2_len, needed_len;
        /*
          The 'strncat' function appends not more than 'n' characters (a null
          character and characters that follow it are not appended) from the array
          pointed to by 's2' to the end of the string pointed to by 's1'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (destination)"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (source)"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") bounded_valid_string_message("second argument (source)", "third argument (n)")
        ASSERT_IS_BOUNDED_VALID_STRING(s2, n);
        s2_len = __ps_builtin_bounded_strlen(s2, n);
#pragma polyspace_check_info

#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of copied string"
#pragma Inspection_Point s2_len
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument (destination)")
        ASSERT_IS_VALID_STRING(s1);
        s1_len = __ps_builtin_strlen(s1);
#pragma polyspace_check_info

#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of first argument (destination)"
#pragma Inspection_Point s1_len
        ;
#pragma polyspace_value_info

        needed_len = s1_len + s2_len + 1;
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "needed allocated size for first argument (destination)"
#pragma Inspection_Point needed_len
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") arg_green_orange_red_message("first argument (destination)", "is", "may be", "is not", " allocated enough to receive the copied string")
        ASSERT_IS_WRITABLE_ARRAY_EXCEPT_ZERO(char, s1, needed_len);
#pragma polyspace_check_info

        for (i = 0; i < s2_len; i++)
            s1[s1_len + i] = s2[i];
        s1[s1_len + i] = 0;
        /*
          The 'strncat' function returns the value of 's1'.
        */
        RETURN(s1);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strncat"
#endif
#endif /* __polyspace_strncat */

#if defined(__polyspace_memcmp)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_memcmp)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_memcmp)
    #pragma POLYSPACE_INLINE_CHECKS "memcmp"
#endif /* !NO_CHECKS_INLINING */
#undef memcmp


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(memcmp, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(memcmp, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, memcmp, const void *, s1, const void *, s2, size_t, n, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'memcmp' function compares the first 'n' characters of the object
          pointed to by 's1' to the first 'n' characters of the object pointed to
          by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (destination)"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument (source)"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("MEM_STD_LIB") arg_green_orange_red_message("first argument", "is", "may not be", "is not",  " a memory area that is accessible within the boundary given by the third argument")
        ASSERT_IS_READABLE_ARRAY_EXCEPT_ZERO(char, s1, n);
#pragma polyspace_check_info

#pragma polyspace_check_info STD_LIB_type("MEM_STD_LIB") arg_green_orange_red_message("second argument", "is", "may not be", "is not",  " a memory area that is accessible within the boundary given by the third argument")
        ASSERT_IS_READABLE_ARRAY_EXCEPT_ZERO(char, s2, n);
#pragma polyspace_check_info
        /*
          The 'memcmp' function returns an integer greater than, equal to, or less
          than zero, accordingly as the object pointed to by 's1' is greater than,
          equal to, or less than the object pointed to by 's2'.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "memcmp"
#else
#pragma POLYSPACE_NO_INSTRUMENT "memcmp"
#endif
#endif /* __polyspace_memcmp */

#if defined(__polyspace_strcmp)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strcmp)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strcmp)
    #pragma POLYSPACE_INLINE_CHECKS "strcmp"
#endif /* !NO_CHECKS_INLINING */
#undef strcmp


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strcmp, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strcmp, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, strcmp, const char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        int i, res;
        int l1 = 0, l2 = 0;
        /*
          The 'strcmp' function compares the string pointed to by 's1' to the string
          pointed to by 's2'.

          The 'strcmp' function returns an integer greater than, equal to, or less
          than zero, accordingly as the string pointed to by 's1' is greater than,
          equal to, or less than the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (first string)"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (second string)"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument (first string)")
        ASSERT_IS_VALID_STRING(s1);
        l1 = __ps_builtin_strlen(s1);
#pragma polyspace_check_info

#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of first argument (first string)"
#pragma Inspection_Point l1
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (second string)")
        ASSERT_IS_VALID_STRING(s2);
        l2 = __ps_builtin_strlen(s2);
#pragma polyspace_check_info

#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of second argument (second string)"
#pragma Inspection_Point l2
        ;
#pragma polyspace_value_info

        if (l1 >= l2) {
            for (i=0; i < l2; i++)
                if ((res = (((unsigned char)s1[i]) - ((unsigned char)s2[i]))) != 0) {
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
                #endif
                    RETURN(res);
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
                #endif
                }
        } else {
            for (i=0; i < l1; i++)
                if ((res = (((unsigned char)s1[i]) - ((unsigned char)s2[i]))) != 0) {
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
                #endif
                    RETURN(res);
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
                #endif
                }
        }
        if (l1 < l2) {
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(-1);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }

        if (l1 > l2) {
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(1);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strcmp"
#endif
#endif /* __polyspace_strcmp */

#if defined(__polyspace_strcoll)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strcoll)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strcoll)
    #pragma POLYSPACE_INLINE_CHECKS "strcoll"
#endif /* !NO_CHECKS_INLINING */
#undef strcoll


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strcoll, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strcoll, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, strcoll, const char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'strcoll' function compares the string pointed to by 's1' to the
          string pointed to by 's2', both interpreted as appropriate to the
          LC_COLLATE category of the current locale.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (first string)"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (second string)"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument (first string)")
        ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (second string)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info
        /*
          The 'strcoll' function returns an integer greater than, equal to, or less
          than zero, accordingly as the string pointed to by 's1' is greater than,
          equal to, or less than the string pointed to by 's2' when both are
          interpreted as appropriate to the current locale.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "strcoll"
#else
#pragma POLYSPACE_NO_INSTRUMENT "strcoll"
#endif
#endif /* __polyspace_strcoll */

#if defined(__polyspace_strncmp)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strncmp)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strncmp)
    #pragma POLYSPACE_INLINE_CHECKS "strncmp"
#endif /* !NO_CHECKS_INLINING */
#undef strncmp


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strncmp, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(strncmp, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, strncmp, const char *, s1, const char *, s2, size_t, n, NO_VARARGS, __PST_THROW)
    {
        int i, res;
        int l1 = 0, l2 = 0;
        /*
          The 'strncmp' function compares not more than 'n' characters (characters
          that follow a null character are not compared) from the array pointed to
          by 's1' to the array pointed to by 's2'.

          The 'strncmp' function returns an integer greater than, equal to, or less
          than zero, accordingly as the possibly null-terminated array pointed to by
          's1' is greater than, equal to, or less than the possibly null-terminated
          array pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (first string)"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (second string)"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") bounded_valid_string_message("first argument (first string)", "third argument (n)")
        ASSERT_IS_BOUNDED_VALID_STRING(s1, n);
#pragma polyspace_check_info
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") bounded_valid_string_message("second argument (second string)", "third argument (n)")
        ASSERT_IS_BOUNDED_VALID_STRING(s2, n);
#pragma polyspace_check_info
        
        l1=__ps_builtin_bounded_strlen(s1, n);
        l2=__ps_builtin_bounded_strlen(s2, n);
        
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of compared string in source"
#pragma Inspection_Point l2
        ;
#pragma polyspace_value_info

#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of compared string in destination"
#pragma Inspection_Point l1
        ;
#pragma polyspace_value_info

        if (l1 >= l2) {
            for (i=0; i < l2; i++)
                if ((res = (((unsigned char)s1[i]) - ((unsigned char)s2[i]))) || (i == n-1)) {
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
                #endif
                    RETURN(res);
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
                #endif
                }
        } else {
            for (i=0; i < l1; i++)
                if ((res = (((unsigned char)s1[i]) - ((unsigned char)s2[i]))) || (i == n-1)) {
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
                #endif
                    RETURN(res);
                #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
                #endif
                }
        }
        if (l1 < l2) {
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(-1);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }

        if (l1 > l2) {
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(1);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strncmp"
#endif
#endif /* __polyspace_strncmp */

#if defined(__polyspace_strxfrm)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strxfrm)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strxfrm)
    #pragma POLYSPACE_INLINE_CHECKS "strxfrm"
#endif /* !NO_CHECKS_INLINING */
#undef strxfrm


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strxfrm, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(strxfrm, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, size_t, strxfrm, char *, s1, const char *, s2, size_t, n, NO_VARARGS, __PST_THROW)
    {
        size_t len;
        int i;
        /*
          The 'strxfrm' function transforms the string pointed to by 's2' and places
          the resulting string into the array pointed to by 's1'.

          The 'strxfrm' function returns the length of the transformed string (not
          including the terminating null character). If the value returned is 'n'
          or more, the contents of the array pointed to by 's1' are indeterminate.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (destination)"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (source)"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (source)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info
        
        len = _polyspace_random_size_t();
        APPLY_CONSTRAINT(len >= 0);
        if (n != 0) {
            if (len >= n)
                len = n - 1;
            
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") writable_array_message("first argument (destination)")
            ASSERT_IS_WRITABLE_ARRAY(char, s1, len + 1);
#pragma polyspace_check_info

            for (i = 0; i < len; i++) {
                s1[i] = _polyspace_random_char();
            }
            s1[len] = 0;
        }
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_size_t());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strxfrm"
#endif
#endif /* __polyspace_strxfrm */

#if (defined __cplusplus) && (defined __polyspace_string_h_respect_cpp_norm)
    /* if we have "C" like includes (most cases?) memchr, strchr, strpbrk, strrchr, strstr that
    take const args, return non const args
    if we have "C++" like includes (Visual2005, QNx includes ... -> mos cases in future ?)
    return is "const"
    - code prover only -
    */
    #define PST_CONST_RETURN const
#else
    #define PST_CONST_RETURN
#endif

#if defined(__polyspace_memchr)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_memchr)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_memchr)
    #pragma POLYSPACE_INLINE_CHECKS "memchr"
#endif /* !NO_CHECKS_INLINING */
#undef memchr


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(memchr, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(memchr, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

#if defined __cplusplus && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))

    //C++ overloading, disable custom type
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, const void * , memchr, const void *, s, int, c, size_t, n, NO_VARARGS, __PST_THROW)
    {
        int i;
        unsigned char *p;
        /*
          The 'memchr' function locates the first occurrence of 'c' (converted to
          an 'unsigned char') in the initial 'n' characters (each interpreted as
          'unsigned char') of the object pointed to by 's'.

          The 'memchr' function returns a pointer to the located character, or a
          null pointer if the character does not occur in the object.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
 #pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info
       
        p = (unsigned char*) s;
#pragma polyspace_check_info STD_LIB_type("MEM_STD_LIB") arg_green_orange_red_message("first argument", "contains the value given by the second argument or is accessible", "may not be an initialized memory area accessible", "is not an initialized memory area accessible",  " at the offset given by the third argument")
        for (i=0; i<n; i++)
            if (p[i] == (unsigned char) c)
                RETURN(p + i);
#pragma polyspace_check_info
        RETURN((void*)0);
    }
    PST_STUB_C_DEF_END

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, void * , memchr, void *, s, int, c, size_t, n, NO_VARARGS, __PST_THROW)
    {
        int i;
        unsigned char *p;
        /*
          The 'memchr' function locates the first occurrence of 'c' (converted to
          an 'unsigned char') in the initial 'n' characters (each interpreted as
          'unsigned char') of the object pointed to by 's'.

          The 'memchr' function returns a pointer to the located character, or a
          null pointer if the character does not occur in the object.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
 #pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info
       
        p = (unsigned char*) s;
#pragma polyspace_check_info STD_LIB_type("MEM_STD_LIB") arg_green_orange_red_message("first argument", "contains the value given by the second argument or is accessible", "may not be an initialized memory area accessible", "is not an initialized memory area accessible",  " at the offset given by the third argument")
        for (i=0; i<n; i++)
            if (p[i] == (unsigned char) c)
                RETURN(p + i);
#pragma polyspace_check_info
        RETURN((void*)0);
    }
    PST_STUB_C_DEF_END
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, PST_CONST_RETURN void * , memchr, const void *, s, int, c, size_t, n, NO_VARARGS, __PST_THROW)
    {
        int i;
        unsigned char *p;
        /*
          The 'memchr' function locates the first occurrence of 'c' (converted to
          an 'unsigned char') in the initial 'n' characters (each interpreted as
          'unsigned char') of the object pointed to by 's'.

          The 'memchr' function returns a pointer to the located character, or a
          null pointer if the character does not occur in the object.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
 #pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info
       
        p = (unsigned char*) s;
#pragma polyspace_check_info STD_LIB_type("MEM_STD_LIB") arg_green_orange_red_message("first argument", "contains the value given by the second argument or is accessible", "may not be an initialized memory area accessible", "is not an initialized memory area accessible",  " at the offset given by the third argument")
        for (i=0; i<n; i++)
            if (p[i] == (unsigned char) c)
                RETURN(p + i);
#pragma polyspace_check_info
        RETURN((void*)0);
    }
    PST_STUB_C_DEF_END
#endif
#else
#pragma POLYSPACE_NO_INSTRUMENT "memchr"
#endif
#endif /* __polyspace_memchr */

#if defined(__polyspace_strchr)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strchr)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strchr)
    #pragma POLYSPACE_INLINE_CHECKS "strchr"
#endif /* !NO_CHECKS_INLINING */
#undef strchr


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strchr, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strchr, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif

#if defined __cplusplus && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))

    //C++ overloading, disable custom type
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, const char *, strchr, const char *, s, int, c, NO_VARARGS, __PST_THROW)
    {
        int i, length = 0;
        /*
          The 'strchr' function locates the first occurrence of 'c' (converted to
          a 'char') in the string pointed to by s. The terminating null character
          is considered to be part of the string.

          The 'strchr' function returns a pointer to the character, or a null
          pointer if 'c' does not occur in the string.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info

        length = __ps_builtin_strlen(s);
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "length of first argument"
#pragma Inspection_Point length
        ;
#pragma polyspace_value_info

        for (i = 0; i <= length; i++)
            if (s[i] == (char) c)
                RETURN((char*) (s + i));
        RETURN((char *) 0);
    }
    PST_STUB_C_DEF_END

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, char *, strchr, char *, s, int, c, NO_VARARGS, __PST_THROW)
    {
        int i, length = 0;
        /*
          The 'strchr' function locates the first occurrence of 'c' (converted to
          a 'char') in the string pointed to by s. The terminating null character
          is considered to be part of the string.

          The 'strchr' function returns a pointer to the character, or a null
          pointer if 'c' does not occur in the string.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info

        length = __ps_builtin_strlen(s);
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "length of first argument"
#pragma Inspection_Point length
        ;
#pragma polyspace_value_info

        for (i = 0; i <= length; i++)
            if (s[i] == (char) c)
                RETURN((char*) (s + i));
        RETURN((char *) 0);
    }
    PST_STUB_C_DEF_END
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, PST_CONST_RETURN char *, strchr, const char *, s, int, c, NO_VARARGS, __PST_THROW)
    {
        int i, length = 0;
        /*
          The 'strchr' function locates the first occurrence of 'c' (converted to
          a 'char') in the string pointed to by s. The terminating null character
          is considered to be part of the string.

          The 'strchr' function returns a pointer to the character, or a null
          pointer if 'c' does not occur in the string.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info

        length = __ps_builtin_strlen(s);
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "length of first argument"
#pragma Inspection_Point length
        ;
#pragma polyspace_value_info

        for (i = 0; i <= length; i++)
            if (s[i] == (char) c)
                RETURN((char*) (s + i));
        RETURN((char *) 0);
    }
    PST_STUB_C_DEF_END
#endif
#else
#pragma POLYSPACE_NO_INSTRUMENT "strchr"
#endif
#endif /* __polyspace_strchr */

#if defined(__polyspace_strcspn)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strcspn)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strcspn)
    #pragma POLYSPACE_INLINE_CHECKS "strcspn"
#endif /* !NO_CHECKS_INLINING */
#undef strcspn


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strcspn, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strcspn, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, size_t, strcspn, const char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        /*
          The 'strcspn' function computes the length of the maximum initial segment
          of the string pointed to by 's1' which consists entirely of characters not
          from the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (characters to reject)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info
        /*
          The 'strcspn' function returns the length of the segment.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_size_t());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "strcspn"
#else
#pragma POLYSPACE_NO_INSTRUMENT "strcspn"
#endif
#endif /* __polyspace_strcspn */

#if defined(__polyspace_strpbrk)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strpbrk)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strpbrk)
    #pragma POLYSPACE_INLINE_CHECKS "strpbrk"
#endif /* !NO_CHECKS_INLINING */
#undef strpbrk


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strpbrk, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strpbrk, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
#if defined __cplusplus && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))

    //C++ overloading, disable custom type
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, const char * , strpbrk, const char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        int index;
        int len = 0;
        /*
          The 'strpbrk' function locates the first occurrence in the string pointed
          to by 's1' of any character from the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (characters to accept)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info

        len = __ps_builtin_strlen(s1);
        /*
          The 'strpbrk' function returns a pointer to the character, or a null
          pointer if no character from 's2' occurs in 's1'.
        */
        if (len == 0 || _polyspace_random_int())
            RETURN(0);

        index = _polyspace_random_int();
        APPLY_CONSTRAINT(index >= 0 && index < len);
        RETURN((char*) (s1 + index));
    }
    PST_STUB_C_DEF_END

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, char * , strpbrk, char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        int index;
        int len = 0;
        /*
          The 'strpbrk' function locates the first occurrence in the string pointed
          to by 's1' of any character from the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (characters to accept)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info

        len = __ps_builtin_strlen(s1);
        /*
          The 'strpbrk' function returns a pointer to the character, or a null
          pointer if no character from 's2' occurs in 's1'.
        */
        if (len == 0 || _polyspace_random_int())
            RETURN(0);

        index = _polyspace_random_int();
        APPLY_CONSTRAINT(index >= 0 && index < len);
        RETURN((char*) (s1 + index));
    }
    PST_STUB_C_DEF_END
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, PST_CONST_RETURN char * , strpbrk, const char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        int index;
        int len = 0;
        /*
          The 'strpbrk' function locates the first occurrence in the string pointed
          to by 's1' of any character from the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (characters to accept)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info

        len = __ps_builtin_strlen(s1);
        /*
          The 'strpbrk' function returns a pointer to the character, or a null
          pointer if no character from 's2' occurs in 's1'.
        */
        if (len == 0 || _polyspace_random_int())
            RETURN(0);

        index = _polyspace_random_int();
        APPLY_CONSTRAINT(index >= 0 && index < len);
        RETURN((char*) (s1 + index));
    }
    PST_STUB_C_DEF_END
#endif
#else
#pragma POLYSPACE_NO_INSTRUMENT "strpbrk"
#endif
#endif /* __polyspace_strpbrk */

#if defined(__polyspace_strrchr)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strrchr)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strrchr)
    #pragma POLYSPACE_INLINE_CHECKS "strrchr"
#endif /* !NO_CHECKS_INLINING */
#undef strrchr


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strrchr, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strrchr, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
#if defined __cplusplus && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))

    //C++ overloading, disable custom type
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, const char * , strrchr, const char *, s, int, c, NO_VARARGS, __PST_THROW)
    {
        int i, length = 0;
        /*
          The 'strrchr' function locates the last occurrence of 'c' (converted to
          a 'char') in the string pointed to by s. The terminating null character
          is considered to be part of the string.

          The 'strrchr' function returns a pointer to the character, or a null
          pointer if 'c' does not occur in the string.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info

        length = __ps_builtin_strlen(s);
        for (i=length; i >= 0; i--)
            if (s[i] == (char) c)
                RETURN((char*) (s + i));
        RETURN(0);
    }
    PST_STUB_C_DEF_END

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, char * , strrchr, char *, s, int, c, NO_VARARGS, __PST_THROW)
    {
        int i, length = 0;
        /*
          The 'strrchr' function locates the last occurrence of 'c' (converted to
          a 'char') in the string pointed to by s. The terminating null character
          is considered to be part of the string.

          The 'strrchr' function returns a pointer to the character, or a null
          pointer if 'c' does not occur in the string.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info

        length = __ps_builtin_strlen(s);
        for (i=length; i >= 0; i--)
            if (s[i] == (char) c)
                RETURN((char*) (s + i));
        RETURN(0);
    }
    PST_STUB_C_DEF_END
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, PST_CONST_RETURN char * , strrchr, const char *, s, int, c, NO_VARARGS, __PST_THROW)
    {
        int i, length = 0;
        /*
          The 'strrchr' function locates the last occurrence of 'c' (converted to
          a 'char') in the string pointed to by s. The terminating null character
          is considered to be part of the string.

          The 'strrchr' function returns a pointer to the character, or a null
          pointer if 'c' does not occur in the string.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info

        length = __ps_builtin_strlen(s);
        for (i=length; i >= 0; i--)
            if (s[i] == (char) c)
                RETURN((char*) (s + i));
        RETURN(0);
    }
    PST_STUB_C_DEF_END
#endif
#else
#pragma POLYSPACE_NO_INSTRUMENT "strrchr"
#endif
#endif /* __polyspace_strrchr */

#if defined(__polyspace_strspn)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strspn)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strspn)
    #pragma POLYSPACE_INLINE_CHECKS "strspn"
#endif /* !NO_CHECKS_INLINING */
#undef strspn


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strspn, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strspn, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, size_t, strspn, const char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        size_t len = 0;
        size_t i;
        /*
          The 'strspn' function computes the length of the maximum initial segment
          of the string pointed to by 's1' which consists entirely of characters
          from the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (characters to accept)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info

        len = __ps_builtin_strlen(s1);
        /*
          The 'strspn' function returns the length of the segment.
        */
        i = _polyspace_random_size_t();
        APPLY_CONSTRAINT(i <= len);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(i);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "strspn"
#else
#pragma POLYSPACE_NO_INSTRUMENT "strspn"
#endif
#endif /* __polyspace_strspn */

#if defined(__polyspace_strstr)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strstr)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strstr)
    #pragma POLYSPACE_INLINE_CHECKS "strstr"
#endif /* !NO_CHECKS_INLINING */
#undef strstr


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strstr, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strstr, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
#if defined __cplusplus && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))

    //C++ overloading, disable custom type
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, const char * , strstr, const char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        int i, len1 = 0, len2 = 0;
        /*
          The 'strstr' function locates the first occurrence in the string pointed to
          by 's1' of the sequence of characters (excluding the terminating null
          character) in the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (substring)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info

        len1 = __ps_builtin_strlen(s1);
        len2 = __ps_builtin_strlen(s2);

        /*
          The 'strstr' function returns a pointer to the located string, or a null
          pointer if the string is not found. If 's2' points to a string with zero
          length, the function returns 's1'.
        */
        if (len2 == 0)
            RETURN((char *)s1);
        if (len1 == 0 || _polyspace_random_int())
            RETURN((char *)0);
        i = _polyspace_random_int();
        APPLY_CONSTRAINT(i >= 0 && i <= len1 - len2);
        RETURN((char *) (s1 + i));
    }
    PST_STUB_C_DEF_END

    PST_STUB_C_DEF_BEGIN(PST_STUB_CXX_DEF, char * , strstr, char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        int i, len1 = 0, len2 = 0;
        /*
          The 'strstr' function locates the first occurrence in the string pointed to
          by 's1' of the sequence of characters (excluding the terminating null
          character) in the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (substring)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info

        len1 = __ps_builtin_strlen(s1);
        len2 = __ps_builtin_strlen(s2);

        /*
          The 'strstr' function returns a pointer to the located string, or a null
          pointer if the string is not found. If 's2' points to a string with zero
          length, the function returns 's1'.
        */
        if (len2 == 0)
            RETURN((char *)s1);
        if (len1 == 0 || _polyspace_random_int())
            RETURN((char *)0);
        i = _polyspace_random_int();
        APPLY_CONSTRAINT(i >= 0 && i <= len1 - len2);
        RETURN((char *) (s1 + i));
    }
    PST_STUB_C_DEF_END
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, PST_CONST_RETURN char * , strstr, const char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    {
        int i, len1 = 0, len2 = 0;
        /*
          The 'strstr' function locates the first occurrence in the string pointed to
          by 's1' of the sequence of characters (excluding the terminating null
          character) in the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
        ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (substring)")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info

        len1 = __ps_builtin_strlen(s1);
        len2 = __ps_builtin_strlen(s2);

        /*
          The 'strstr' function returns a pointer to the located string, or a null
          pointer if the string is not found. If 's2' points to a string with zero
          length, the function returns 's1'.
        */
        if (len2 == 0)
            RETURN((char *)s1);
        if (len1 == 0 || _polyspace_random_int())
            RETURN((char *)0);
        i = _polyspace_random_int();
        APPLY_CONSTRAINT(i >= 0 && i <= len1 - len2);
        RETURN((char *) (s1 + i));
    }
    PST_STUB_C_DEF_END
#endif
#else
#pragma POLYSPACE_NO_INSTRUMENT "strstr"
#endif
#endif /* __polyspace_strstr */

#if defined(__polyspace_strtok)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strtok)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strtok)
    #pragma POLYSPACE_INLINE_CHECKS "strtok"
#endif /* !NO_CHECKS_INLINING */
#undef strtok


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strtok, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strtok, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , strtok, char *, s1, const char *, s2, NO_VARARGS, __PST_THROW)
    /* stubbed because this function is not polymorphic: stores data in a global variable */
    {
        static char *_polyspace_token_save;
        char *ret;
        int index, len;
        /*
          A sequence of calls to the 'strtok' function breaks the string pointed to
          by 's1' into a sequence of tokens, each of which is delimited by a
          character from the string pointed to by 's2'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info

        if (s1 != 0) {
            /*
              The first call in the sequence searches the string pointed to by 's1'
              for the first character that is not contained in the current separator
              string pointed to by 's2'.
            */
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("first argument")
            ASSERT_IS_VALID_STRING(s1);
#pragma polyspace_check_info
            _polyspace_token_save = s1;
        }
#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("second argument (separator characters) ")
        ASSERT_IS_VALID_STRING(s2);
#pragma polyspace_check_info

        if (_polyspace_token_save)
            len = __ps_builtin_strlen(_polyspace_token_save);
        else
            len = 0;
        /*
           If no such character is found, then, there are no tokens in the string
           pointed to by 's1' and the 'strtok' function returns a null pointer.
        */
        if (len == 0 || _polyspace_random_int())
            RETURN(0);
        /*
          If such a character is found, it is the start of the first token.
        */
        index = _polyspace_random_int();
        APPLY_CONSTRAINT(index >= 0 && index < len);
        ret = &_polyspace_token_save[index];
        /*
          The 'strtok' function then searches from there for a character that is
          contained in the current separator string.
        */
        index = _polyspace_random_int();
        APPLY_CONSTRAINT(index >= 0 && index <= len);
        _polyspace_token_save[index] = 0;
        if (index < len)
            _polyspace_token_save = &_polyspace_token_save[index + 1];
        else
            /*
              If no such character is found, the current token extends to the end of
              the string pointed to by 's1', and subsequent searches for a token will
              return a null pointer.
            */
            _polyspace_token_save = &_polyspace_token_save[len];
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strtok"
#endif
#endif /* __polyspace_strtok */

#if defined(__polyspace_memset)
    #if defined(POLYSPACE_INSTRUMENT)
        #pragma POLYSPACE_NO_INSTRUMENT "memset"
    #endif
#endif /* __polyspace_memset */

#if defined(__polyspace_strerror)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strerror)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strerror)
    #pragma POLYSPACE_INLINE_CHECKS "strerror"
#endif /* !NO_CHECKS_INLINING */
#undef strerror

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strerror, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(strerror, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , strerror, int, errnum, NO_VARARGS, __PST_THROW)
    {
        int i, len;
        static char *_polyspace_str_error;

        /*
          The 'strerror' function maps the error number in 'errnum' to an error
          message string.
        */
        _polyspace_str_error = (char*)__ps_builtin_random_string();
        /*
          The 'strerror' function returns a pointer to the string, the contents of
          which are implementation-defined.
        */
        RETURN(_polyspace_str_error); /* may return NULL */
    }
    PST_STUB_C_DEF_END

#else
#pragma POLYSPACE_NO_INSTRUMENT "strerror"
#endif
#endif /* __polyspace_strerror */

#if defined(__polyspace_strdup)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strdup)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strdup)
    #pragma POLYSPACE_INLINE_CHECKS "strdup"
#endif /* !NO_CHECKS_INLINING */
#undef strdup


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strdup, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(strdup, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
#if !defined(__cplusplus)
extern void  *malloc(size_t size);
#else
PST_STUB_C_DECL(void *, malloc,  (size_t)) __PST_THROW;
#endif /* __cplusplus */

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , strdup, const char *, s, NO_VARARGS, __PST_THROW)
    {
        char * _polyspace_str_dup;
        int i, len;
        /*
          The 'strdup' function returns a pointer to a new string which is a
          duplicate of the string s.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") valid_string_message("argument")
        ASSERT_IS_VALID_STRING(s);
#pragma polyspace_check_info
        len = __ps_builtin_strlen(s);
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "length of argument"
#pragma Inspection_Point len
        ;
#pragma polyspace_value_info

        _polyspace_str_dup = (char *)malloc(sizeof(char) * (len+1));
        if (_polyspace_str_dup == (char *)0) return (char *)0; /* may return NULL */
        for (i = 0; i < len; i++)
            _polyspace_str_dup[i] = s[i];
        _polyspace_str_dup[len] = 0;

        RETURN(_polyspace_str_dup);
    }
    PST_STUB_C_DEF_END

#pragma POLYSPACE_NO_INSTRUMENT "strdup"
#endif
#endif /* __polyspace_strdup */

#if defined(__polyspace_strndup)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_strndup)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strndup)
    #pragma POLYSPACE_INLINE_CHECKS "strndup"
#endif /* !NO_CHECKS_INLINING */
#undef strndup


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strndup, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(strndup, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
#if !defined(__cplusplus)
extern void  *malloc(size_t size);
#else
PST_STUB_C_DECL(void *, malloc,  (size_t)) __PST_THROW;
#endif /* __cplusplus */
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , strndup, const char *, s, size_t, n, NO_VARARGS, __PST_THROW)
    {
        char * _polyspace_str_ndup;
        int i, len = 0;
        /*
          The 'strndup' function is similar to strdup but copies at most
          n bytes.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (string)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "second argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info STD_LIB_type("STR_STD_LIB") bounded_valid_string_message("first argument (string)", "second argument (n)")
        ASSERT_IS_BOUNDED_VALID_STRING(s, n);
        len=__ps_builtin_bounded_strlen(s, n);
#pragma polyspace_check_info

#pragma polyspace_value_info STD_LIB_value_type("VALUE") "size of copied string"
#pragma Inspection_Point len
        ;
#pragma polyspace_value_info

        _polyspace_str_ndup = (char *)malloc(sizeof(char) * (len+1));
        if (_polyspace_str_ndup == (char *)0) return (char *)0; /* may return NULL */
        for (i = 0; i < len; i++)
            _polyspace_str_ndup[i] = s[i];
        _polyspace_str_ndup[len] = 0;

        RETURN(_polyspace_str_ndup);
    }
    PST_STUB_C_DEF_END

#pragma POLYSPACE_NO_INSTRUMENT "strndup"
#endif
#endif /* __polyspace_strndup */

    /*********************************************************************** time.h */
#if defined(__polyspace_clock) && !defined(__polyspace_no_clock)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_clock)
    #pragma POLYSPACE_INLINE_CHECKS "clock"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <time.h>
#endif
    /* extern clock_t  clock(void); */
#ifdef __cplusplus


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(clock, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(clock, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, clock_t, clock, NO_VARARGS, __PST_THROW)
    {
        volatile clock_t ret;
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#endif
#pragma POLYSPACE_PURE  "clock"
#pragma POLYSPACE_POLYMORPHIC "clock"
#else
#pragma POLYSPACE_NO_INSTRUMENT "clock"
#endif
#endif /* __polyspace_clock */

#if defined(__polyspace_difftime) && !defined(__polyspace_no_difftime)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_difftime)
    #pragma POLYSPACE_INLINE_CHECKS "difftime"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <time.h>
#endif
    /* extern double  difftime(time_t, time_t); */
#ifdef __cplusplus


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(difftime, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(difftime, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, double, difftime, time_t, t1, time_t, t2, NO_VARARGS, __PST_THROW)
    {
        volatile double ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#endif
#pragma POLYSPACE_PURE  "difftime"
#pragma POLYSPACE_POLYMORPHIC "difftime"
#else
#pragma POLYSPACE_NO_INSTRUMENT "difftime"
#endif
#endif /* __polyspace_difftime */

#if defined(__polyspace_mktime) && !defined(__polyspace_no_mktime)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_mktime)
    #pragma POLYSPACE_INLINE_CHECKS "mktime"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <time.h>
    #define struct_tm struct tm
#endif
#undef mktime


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(mktime, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(mktime, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, time_t, mktime, struct_tm *, timeptr, NO_VARARGS, __PST_THROW)
    {
        volatile struct_tm random_tm;
        volatile time_t random_res;
        /*
          The 'mktime' function converts the broken-down time, expressed as local
          time, in the structure pointed to by 'timeptr' into a calendar time value
          with the same encodings as that of the values returned by the 'time'
          function.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point timeptr
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info writable_pointer_message("argument (struct_tm buffer output)")
    #ifdef __cplusplus
        *timeptr = *(struct_tm*)&random_tm; /* C++ need a cast to suppress volatile */
    #else
        *timeptr = random_tm;
    #endif
#pragma polyspace_check_info
        /*
          The 'mktime' function returns the specified calendar time encoded as a
          value of type 'time_t'. If the calendar time cannot be represented, the
          function returns the value (time_t)-1.
        */
        RETURN(random_res);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "mktime"
#endif
#endif /* __polyspace_mktime */

#if defined(__polyspace_time) && !defined(__polyspace_no_time)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_time)
    #pragma POLYSPACE_INLINE_CHECKS "time"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <time.h>
#endif
#undef time


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(time, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(time, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, time_t, time, time_t *, buff, NO_VARARGS, __PST_THROW)
    {
        static volatile time_t moment = 0;
        /*
          The 'time' function determines the current calendar time.

          The 'time' function returns the implementation's best approximation to
          the current calendar time. The value (time_t)-1 is returned if the
          calendar time is not available. If 'buff' is not a null pointer, the return
          value is also assigned to the object it points to.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point buff
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info writable_pointer_message("argument (time_t buffer output)")
        if (buff)
            *buff = moment;
#pragma polyspace_check_info

        RETURN(moment);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "time"
#endif
#endif /* __polyspace_time */

#if defined(__polyspace_asctime) && !defined(__polyspace_no_asctime)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_asctime)
    #pragma POLYSPACE_INLINE_CHECKS "asctime"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <time.h>
    #define struct_tm struct tm
#endif
#undef asctime


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(asctime, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(asctime, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , asctime, const struct_tm *, timeptr, NO_VARARGS, __PST_THROW)
    {
        char *ret;
        int i, len;
        /*
          The 'asctime' function converts the broken-down time in the structure
          pointed to by 'timeptr' into a string in the form
          "Sun Sep 16 01:03:52 1973\n\0"

          The 'asctime' function returns a pointer to the string, or a null pointer.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point timeptr
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (struct_tm buffer input)")
        ASSERT_IS_READABLE_POINTER(struct_tm, timeptr);
#pragma polyspace_check_info
        if (_polyspace_random_int())
            RETURN(0);
        ret = (char*)__ps_builtin_random_string();
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC  "asctime"
#else
#pragma POLYSPACE_NO_INSTRUMENT "asctime"
#endif
#endif /* __polyspace_asctime */

#if defined(__polyspace_ctime) && !defined(__polyspace_no_ctime)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_ctime)
    #pragma POLYSPACE_INLINE_CHECKS "ctime"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <time.h>
#endif
#undef ctime


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(ctime, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(ctime, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char* , ctime, const time_t *, timer, NO_VARARGS, __PST_THROW)
    {
        char *ret;
        int i, len;
        /*
          The 'ctime' function converts the calendar time pointed to by 'timer'
          to local time in the form of a string. It is equivalent to
          asctime(localtime(timer))
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point timer
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (time_t buffer input)")
        ASSERT_IS_READABLE_POINTER(time_t, timer);
#pragma polyspace_check_info
        /*
          The 'ctime' function returns the pointer returned by the 'asctime' function
          with that broken-down time as argument, or a null pointer.
        */
        if (_polyspace_random_int())
            RETURN(0);
        ret = (char*)__ps_builtin_random_string();
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "ctime"
#endif
#endif /* __polyspace_ctime */

#if defined(__polyspace_gmtime) && !defined(__polyspace_no_gmtime)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_gmtime)
    #pragma POLYSPACE_INLINE_CHECKS "gmtime"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <time.h>
    #define struct_tm struct tm
#endif
#undef gmtime


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(gmtime, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(gmtime, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, struct_tm * , gmtime, const time_t *, timer, NO_VARARGS, __PST_THROW)
    {
        struct_tm * volatile random_ptm;
        struct_tm *ret;
        volatile struct_tm random_tm;
        /*
          The 'gmtime' function converts the calendar time pointed to by 'timer'
          into a broken-down time, expressed as Coordinated Universal Time (UTC).

          The 'gmtime' function returns a pointer to that object, or a null pointer
          if UTC is not available.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point timer
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (time_t buffer input)")
        ASSERT_IS_READABLE_POINTER(time_t, timer);
#pragma polyspace_check_info
        if (_polyspace_random_int())
            RETURN(0);
        ret = random_ptm;
    #ifdef __cplusplus
        *ret = *(struct_tm*)&random_tm; /* C++ need a cast to suppress volatile */
    #else
        *ret = random_tm;
    #endif
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "gmtime"
#endif
#endif /* __polyspace_gmtime */

#if defined(__polyspace_localtime) && !defined(__polyspace_no_localtime)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_localtime)
    #pragma POLYSPACE_INLINE_CHECKS "localtime"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <time.h>
    #define struct_tm struct tm
#endif
#undef localtime


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(localtime, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(localtime, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, struct_tm * , localtime, const time_t *, timer, NO_VARARGS, __PST_THROW)
    {
        struct_tm * volatile random_ptm;
        struct_tm *ret;
        volatile struct_tm random_tm;
        /*
          The 'localtime' function converts the calendar time pointed to by 'timer'
          into a broken-down time, expressed as local time.

          The 'localtime' function returns a pointer to that object, or a null pointer.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument"
#pragma Inspection_Point timer
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("argument (time_t buffer input)")
        ASSERT_IS_READABLE_POINTER(time_t, timer);
#pragma polyspace_check_info
        if (_polyspace_random_int())
            RETURN(0);
        ret = random_ptm;
    #ifdef __cplusplus
        *ret = *(struct_tm*)&random_tm; /* C++ need a cast to suppress volatile */
    #else
        *ret = random_tm;
    #endif
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "localtime"
#endif
#endif /* __polyspace_localtime */

#if defined(__polyspace_strftime) && !defined(__polyspace_no_strftime)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_strftime)
    #pragma POLYSPACE_INLINE_CHECKS "strftime"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <time.h>
    #define struct_tm struct tm
#endif
#undef strftime


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(strftime, 4)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_4
    #define RETURN(x) RETURN_CUSTOM_TYPE(strftime, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_4
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, size_t, strftime, char *, s, size_t, maxsize, const char *, format, const struct_tm *, timeptr, NO_VARARGS, __PST_THROW)
    {
        size_t i, len;
        /*
          The 'strftime' function places characters into the array pointed to by 's'
          as controlled by the string pointed to by 'format'.

          If the total number of resulting characters including the terminating
          null character is not more than 'maxsize', the 'strftime' function returns
          the number of characters placed into the array pointed to by 's' not
          including the terminating null character. Otherwise, zero is returned
          and the contents of the array are indeterminate.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument (formatted string output)"
#pragma Inspection_Point s
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "second argument (maxsize)"
#pragma Inspection_Point maxsize
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "third argument (format)"
#pragma Inspection_Point format
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "fourth argument (struct_tm buffer input)"
#pragma Inspection_Point timeptr
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("third argument (format)")
        ASSERT_IS_VALID_STRING(format);
#pragma polyspace_check_info
#pragma polyspace_check_info readable_pointer_message("fourth argument (struct_tm buffer input)")
        ASSERT_IS_READABLE_POINTER(struct_tm, timeptr);
#pragma polyspace_check_info
        len = _polyspace_random_size_t();
        if (maxsize != 0) {
            len = _polyspace_random_size_t();
            APPLY_CONSTRAINT(len < maxsize);
#pragma polyspace_check_info valid_string_message("first argument (formatted string output)")
            ASSERT_IS_WRITABLE_ARRAY(char, s, len);
#pragma polyspace_check_info
            for (i = 0; i < len; i++)
                s[i] = _polyspace_random_char();
            if (_polyspace_random_int()) {
                s[len] = 0;
            #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
            #endif
                RETURN(len);
            #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
            #endif
            }
        }
        if (s != (char *) 0) {
            s[len] = _polyspace_random_char();
        }
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "strftime"
#endif
#endif /* __polyspace_strftime */


    /* **************************************** */
    /* ***** End of ANSI C standard stubs ***** */
    /* **************************************** */


    /* **************************************** */
    /* ****** Concurrency related stubs ******* */
    /* **************************************** */


    /*********************************************************************** pthread.h */

    /* **** pthread_create **** */
#if defined(__polyspace_pthread_create) && !defined(__polyspace_no_pthread_create)
#if !defined(POLYSPACE_INSTRUMENT)

#if __polyspace_use_customer_include
    #include <pthread.h>
#endif

#ifdef __cplusplus
    /* C++ : extern "C" => easier to use a typedef */
    PST_LINK_C typedef void* (*PST_DECL_C _polyspace_pthread_create_function_type)(void*);
#else /* __cplusplus */
    typedef  void* (* _polyspace_pthread_create_function_type)(void*);
#endif /* __cplusplus */

#undef pthread_create
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN

#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_4
#define RETURN(x) return (x)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, pthread_create, pthread_t *, id, const pthread_attr_t* , attr, _polyspace_pthread_create_function_type, f, void*, arg, NO_VARARGS, __PST_THROW)
    {
        volatile int random;
        volatile pthread_t random_thread;
        f(arg);
#ifdef __cplusplus
        *id = *(pthread_t*)&random_thread; /* C++ needs a cast */
#else
        *id = random_thread;
        return random;
#endif
        RETURN(random);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "pthread_create"
#endif
#endif /* __polyspace_pthread_create */


    /* **** pthread_exit **** */
#if defined(__polyspace_pthread_exit) && !defined(__polyspace_no_pthread_exit)
#if !defined(POLYSPACE_INSTRUMENT)

#if __polyspace_use_customer_include
    #include <pthread.h>
#endif

#undef pthread_exit
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN

#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, pthread_exit, void *, arg, NO_VARARGS, __PST_THROW)
    {
        for(;;);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "pthread_exit"
#endif
#endif /* __polyspace_pthread_exit */


    /* **** pthread_mutex_lock **** */
#if defined(__polyspace_pthread_mutex_lock) && !defined(__polyspace_no_pthread_mutex_lock)
#if !defined(POLYSPACE_INSTRUMENT)

#if __polyspace_use_customer_include
    #include <pthread.h>
#endif

#undef pthread_mutex_lock
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN

#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
#define RETURN(x) return (x)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, pthread_mutex_lock, pthread_mutex_t *, mutex, NO_VARARGS, __PST_THROW)
    {
        volatile int random;
        volatile pthread_mutex_t random_mutex;
        pthread_mutex_t m = *mutex;
    #ifdef __cplusplus
        *mutex = *(pthread_mutex_t *) &random_mutex;
    #else
        *mutex = random_mutex;
    #endif /* __cplusplus */
        RETURN(random);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "pthread_mutex_lock"
#endif
#endif /* __polyspace_pthread_mutex_lock */


    /* **** pthread_mutex_unlock **** */
#if defined(__polyspace_pthread_mutex_unlock) && !defined(__polyspace_no_pthread_mutex_unlock)
#if !defined(POLYSPACE_INSTRUMENT)

#if __polyspace_use_customer_include
    #include <pthread.h>
#endif

#undef pthread_mutex_unlock
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN

#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
#define RETURN(x) return (x)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, pthread_mutex_unlock, pthread_mutex_t *, mutex, NO_VARARGS, __PST_THROW)
    {
        volatile int random;
        volatile pthread_mutex_t random_mutex;
        pthread_mutex_t m = *mutex;
    #ifdef __cplusplus
        *mutex = *(pthread_mutex_t *) &random_mutex;
    #else
        *mutex = random_mutex;
    #endif /* __cplusplus */
        RETURN(random);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "pthread_mutex_unlock"
#endif
#endif /* __polyspace_pthread_mutex_unlock */

/**************** micro-C OS ***************************/

/* OSMutexCreate */

#if !defined(__cplusplus)
#if defined(__polyspace_OSMutexCreate) && !defined(__polyspace_no_OSMutexCreate)
#if !defined(POLYSPACE_INSTRUMENT)

typedef unsigned char  INT8U;
typedef unsigned short INT16U;
typedef struct {
  INT8U    OSEventType;
  INT8U    OSEventGrp;
  INT16U   OSEventCnt;
  void*    OSEventPtr;
  INT8U    Preventable[64 / 8 + 1]; /* based on OS_LOWEST_PRIO being at max 63 */
  INT8U    OSEventTbl[32];
} OS_EVENT;

#undef OSMutexCreate
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
extern void  *malloc(size_t size);

/* Allocate and return pointer on one valid mutex */
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
#define RETURN(x) return (x)
PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, OS_EVENT*, OSMutexCreate, INT8U, prio, INT8U*, err, NO_VARARGS, __PST_THROW)
{
  volatile OS_EVENT random_sem;
  volatile INT8U random_err;
  /* possible values for second argument 
     - OS_NO_ERR : 0 
     - OS_ERR_PEVENT_NULL : 4 
     - OS_PRIO_EXIST : 40 
     - OS_PRIO_INVALID : 42 
     - OS_ERR_CREATE_ISR : 141
  */
  switch (random_err)
    {
    case 1 : *err = 4; break;
    case 2 : *err = 40; break;
    case 3 : *err = 42; break;
    case 4 : *err = 141; break;
    default: *err = 0; break;
    }
  OS_EVENT* return_sem = malloc(sizeof(*return_sem));
  *return_sem = random_sem;
  RETURN(return_sem);
}
PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "OSMutexCreate"
#endif
#endif /* __polyspace_OSMutexCreate */
#endif /*__cplusplus*/

    /*********************************************************************** vxWorks.h */

#ifdef PST_HAS_VXWORKS_H

#if defined(__polyspace_taskSpawn) && !defined(__polyspace_no_taskSpawn)
#if !defined(POLYSPACE_INSTRUMENT)
#if __polyspace_use_customer_include
   #include <vxWorks.h>
   #include <taskLib.h>
#endif
#undef taskSpawn
#ifdef  __PROTOTYPE_5_0
    PST_STUB_C_DEF(int, taskSpawn, (char *name, int priority, int options, int stackSize, FUNCPTR entryPt, ...))
#else
    PST_STUB_C_DEF(int, taskSpawn, (char *name, int priority, int options, int stackSize,
                                    FUNCPTR entryPt, int arg1, int arg2, int arg3,
                                    int arg4, int arg5, int arg6, int arg7,
                                    int arg8, int arg9, int arg10))
#endif  /* __PROTOTYPE_5_0 */
    {
        /* C/9139: name can be null */
        volatile int random;
        return random;
    }
#else
#undef taskSpawn
    extern int taskSpawn (char *name, int priority, int options, int stackSize,
                          int (*entryPt) () , int arg1, int arg2, int arg3,
                          int arg4, int arg5, int arg6, int arg7,
                          int arg8, int arg9, int arg10) {
        volatile int random;
        return random;
    }
#endif /* POLYSPACE_INSTRUMENT */
#endif /* __polyspace_taskSpawn */



    /* **** semTake **** */
#if defined(__polyspace_semTake) && !defined(__polyspace_no_semTake)
#if !defined(POLYSPACE_INSTRUMENT)

#if __polyspace_use_customer_include
   #include <vxWorks.h>
   #include <taskLib.h>
#endif

#undef semTake
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN

#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
#define RETURN(x) return (x)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, STATUS, semTake, SEM_ID, sem, int, timeout, NO_VARARGS, __PST_THROW)
    {
        volatile STATUS random;
        //  SEM_ID s = *sem;
        //  volatile SEM_ID random_sem;
        //  *sem = random_sem;  Issues with incomplete type of SEM_ID
        RETURN(random);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "semTake"
#endif
#endif /* __polyspace_semTake */


    /* **** semGive **** */
#if defined(__polyspace_semGive) && !defined(__polyspace_no_semGive)
#if !defined(POLYSPACE_INSTRUMENT)

#if __polyspace_use_customer_include
   #include <vxWorks.h>
   #include <taskLib.h>
#endif

#undef semGive
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN

#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
#define RETURN(x) return (x)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, STATUS, semGive, SEM_ID, sem, NO_VARARGS, __PST_THROW)
    {
        volatile STATUS random;
        //  SEM_ID s = *sem;
        //  volatile SEM_ID random_sem;
        //  *sem = random_sem;  Issues with incomplete type of SEM_ID
        RETURN(random);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "semGive"
#endif
#endif /* __polyspace_semGive */


    /* **** semBCreate **** */
#if defined(__polyspace_semBCreate) && !defined(__polyspace_no_semBCreate)
#if !defined(POLYSPACE_INSTRUMENT)

#if __polyspace_use_customer_include
   #include <vxWorks.h>
   #include <taskLib.h>
#endif

#undef semBCreate
#undef PST_STUB_C_DEF_BEGIN
#undef RETURN

#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
#define RETURN(x) return (x)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, SEM_ID, semBCreate, int, options, SEM_B_STATE, initialState, NO_VARARGS, __PST_THROW)
    {
        volatile SEM_ID random_sem;
        SEM_ID return_sem = random_sem;
        RETURN(return_sem);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "semBCreate"
#endif
#endif /* __polyspace_semBCreate */



#endif // PST_HAS_VXWORKS_H



    /* **************************************** */
    /* *** End of concurrency related stubs *** */
    /* **************************************** */


    /* *************************************************** */
    /* ***** Stubs for extensions to ANSI C standard ***** */
    /* *************************************************** */

    /* includes stubbed:
     * - strings.h
     * - unistd.h
     * - fcntl.h
     */

#if defined(__polyspace_bcmp) && !defined(__polyspace_no_bcmp)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_bcmp)
    #pragma POLYSPACE_INLINE_CHECKS "bcmp"
#endif /* !NO_CHECKS_INLINING */

#undef bcmp
#if (defined __OS_VXWORKS) && (defined __cplusplus)
    #define __PST_FIRST_ARG_TYPE char *
    #define __PST_THIRD_ARG_TYPE int
#else /* __OS_VXWORKS  */
    #define __PST_FIRST_ARG_TYPE const void *
    #define __PST_THIRD_ARG_TYPE size_t
#endif /* __OS_VXWORKS  */


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(bcmp, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(bcmp, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, bcmp, __PST_FIRST_ARG_TYPE, s1, __PST_FIRST_ARG_TYPE, s2, __PST_THIRD_ARG_TYPE, n, NO_VARARGS, __PST_THROW)
    {
        int i;
        char *p, *q;
        int res = 0;
        /*
          The 'bcmp' function compares the first 'n' bytes of the strings 's1' and
          's2'. If the two strings are equal, 'bcmp' returns 0, otherwise it returns
          a non-zero result. If 'n' is zero, the two strings are assumed to be equal.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "first argument"
#pragma Inspection_Point s1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument"
#pragma Inspection_Point s2
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (n)"
#pragma Inspection_Point n
        ;
#pragma polyspace_value_info

        p = (char *)s1;
        q = (char *)s2;

#pragma polyspace_check_info STD_LIB_type("MEM_STD_LIB") arg_green_orange_red_message("arguments", "are valid memory areas or the number of bytes to compare is zero", "may not be valid memory areas", "are not valid memory areas", "")
        for (i=0; i < n; i++) {
            if (p[i] != q[i]) {
                res = 1;
                break;
            }
        }
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(res);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#undef __PST_THIRD_ARG_TYPE
#undef __PST_FIRST_ARG_BASE_TYPE
#else
#pragma POLYSPACE_NO_INSTRUMENT "bcmp"
#endif
#endif /* __polyspace_bcmp */

#if defined(__polyspace_setgid) && !defined(__polyspace_no_setgid)
#if __polyspace_use_customer_include
   #include <__polyspace__unistd.h>
#endif
#undef setgid

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(setgid, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(setgid, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, setgid, gid_t, gid, NO_VARARGS, __PST_THROW)
    {
        volatile int ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "setgid"
#pragma POLYSPACE_POLYMORPHIC "setgid"
#endif /* __polyspace_setgid */


#ifndef POLYSPACE_STRICT_ANSI_STANDARD_STUBS

    /*********************************************************************** strings.h */
#if defined(__polyspace_bzero) && !defined(__polyspace_no_bzero)
    #if defined(POLYSPACE_INSTRUMENT)
        #pragma POLYSPACE_NO_INSTRUMENT "bzero"
    #endif
#endif /* __polyspace_bzero */

#if defined(__polyspace_bcopy) && !defined(__polyspace_no_bcopy)
    #if defined(POLYSPACE_INSTRUMENT)
        #pragma POLYSPACE_NO_INSTRUMENT "bcopy"
    #endif
#endif /* __polyspace_bcopy */


    /*********************************************************************** unistd.h */
    /* We don't modelize here the light modifications of the FILEs referenced by the file descriptors
     *  given in parameter. We consider that those modifications are not important for the RTE analysis (e.g fsync, chdir, ...) */

#if defined(__polyspace_chdir)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_chdir)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_chdir)
    #pragma POLYSPACE_INLINE_CHECKS "chdir"
#endif /* !NO_CHECKS_INLINING */
#undef chdir
#if (defined __OS_VXWORKS) && (defined __cplusplus)
    #define __PST_RETURN_TYPE STATUS
    #define __PST_ARG_TYPE char *
#else /* __OS_VXWORKS */
    #define __PST_RETURN_TYPE int
    #define __PST_ARG_TYPE const char *
#endif /* __OS_VXWORKS */


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(chdir, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(chdir, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, __PST_RETURN_TYPE, chdir, __PST_ARG_TYPE, path, NO_VARARGS, __PST_THROW)
    {
        volatile __PST_RETURN_TYPE ret ;
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (file path)"
#pragma Inspection_Point path
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("argument (file path)")
        ASSERT_IS_VALID_STRING(path);
#pragma polyspace_check_info
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#undef __PST_RETURN_TYPE
#undef __PST_ARG_TYPE
#pragma POLYSPACE_POLYMORPHIC "chdir"
#else
#pragma POLYSPACE_NO_INSTRUMENT "chdir"
#endif
#endif /* __polyspace_chdir */

#if defined(__polyspace_chown) && !defined(__polyspace_no_chown)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_chown)
    #pragma POLYSPACE_INLINE_CHECKS "chown"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <__polyspace__unistd.h>
#endif
#undef chown


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(chown, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(chown, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, chown, const char *, path, uid_t, owner, gid_t, group, NO_VARARGS, __PST_THROW)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (file path)"
#pragma Inspection_Point path
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (file path)")
        ASSERT_IS_VALID_STRING(path);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        /* Upon successful completion, 0 shall be returned; otherwise, -1 */
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0) ;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "chown"
#else

#endif
#endif /* __polyspace_chown */

#if defined(__polyspace_close) && !defined(__polyspace_no_close)
#if !defined(POLYSPACE_INSTRUMENT)
#undef close

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(close, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(close, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, close, int, fildes, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
      /* Upon successful completion, 0 shall be returned; otherwise, -1 shall be returned   */
      RET_ERROR_AND_SET_ERRNO(-1);
      RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "close"
#pragma POLYSPACE_POLYMORPHIC "close"
#else
#pragma POLYSPACE_NO_INSTRUMENT "close"
#endif
#endif /* __polyspace_close */

#if defined(__polyspace_fchdir) && !defined(__polyspace_no_fchdir)
#if !defined(POLYSPACE_INSTRUMENT)
#undef fchdir

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fchdir, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(fchdir, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fchdir, int, fildes, NO_VARARGS, __PST_THROW)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
      /*  Upon successful completion, fchdir() shall return 0. Otherwise, it shall return -1 */
      RET_ERROR_AND_SET_ERRNO(-1);
      RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "fchdir"
#pragma POLYSPACE_POLYMORPHIC "fchdir"
#else
#endif
#endif /* __polyspace_fchdir */

#if defined(__polyspace_fchown) && !defined(__polyspace_no_fchown)
#if !defined(POLYSPACE_INSTRUMENT)
#if __polyspace_use_customer_include
    #include <__polyspace__unistd.h>
#endif
#undef fchown

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fchown, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(fchown, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fchown, int, fildes, uid_t, owner, gid_t, group, NO_VARARGS, __PST_THROW)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
      /* Upon successful completion, fchown() shall return 0. Otherwise, it shall return -1*/
      RET_ERROR_AND_SET_ERRNO(-1);
      RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "fchown"
#pragma POLYSPACE_POLYMORPHIC "fchown"
#else
#endif
#endif /* __polyspace_fchown */

#if defined(__polyspace_fork) && !defined(__polyspace_no_fork)
#if !defined(POLYSPACE_INSTRUMENT)
#if __polyspace_use_customer_include
   #include <__polyspace__unistd.h>
#endif
#undef fork

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fork, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(fork, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, pid_t, fork, NO_VARARGS, __PST_THROW)
    {
        volatile pid_t ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "fork"
#pragma POLYSPACE_POLYMORPHIC "fork"
#else
#endif
#endif /* __polyspace_fork */

#if defined(__polyspace_fsync) && !defined(__polyspace_no_fsync)
#if !defined(POLYSPACE_INSTRUMENT)

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(fsync, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(fsync, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, fsync, int, fildes, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
      /*  Upon successful completion, fsync() shall return 0. Otherwise, -1 shall be returned */
      RET_ERROR_AND_SET_ERRNO(-1);
      RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "fsync"
#pragma POLYSPACE_POLYMORPHIC "fsync"
#else
#endif
#endif /* __polyspace_fsync */

#if defined(__polyspace_gethostid) && !defined(__polyspace_no_gethostid)
#if !defined(POLYSPACE_INSTRUMENT)
#undef gethostid


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(gethostid, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(gethostid, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, long, gethostid, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        volatile long ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "gethostid"
#pragma POLYSPACE_POLYMORPHIC "gethostid"
#else
#endif
#endif /* __polyspace_gethostid */

#if defined(__polyspace_getlogin) && !defined(__polyspace_no_getlogin)
#if !defined(POLYSPACE_INSTRUMENT)
#undef getlogin


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(getlogin, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(getlogin, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , getlogin, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        char *ret;
        int i, len;
        RET_ERROR_AND_SET_ERRNO((char *) 0);

        ret = (char*)__ps_builtin_random_string();
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#else

#endif
#endif /* __polyspace_getlogin */

#if defined(__polyspace_getuid) && !defined(__polyspace_no_getuid)

#if __polyspace_use_customer_include
     #include <__polyspace__unistd.h>
#endif

#undef getuid

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(getuid, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(getuid, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, uid_t, getuid, NO_VARARGS, __PST_THROW)
    {
        volatile uid_t ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "getuid"
#pragma POLYSPACE_POLYMORPHIC "getuid"
#endif /* __polyspace_getuid */

#if defined(__polyspace_geteuid) && !defined(__polyspace_no_geteuid)

#if __polyspace_use_customer_include
    #include <__polyspace__unistd.h>
#endif

#undef geteuid

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(geteuid, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(geteuid, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, uid_t, geteuid, NO_VARARGS, __PST_THROW)
    {
        volatile uid_t ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "geteuid"
#pragma POLYSPACE_POLYMORPHIC "geteuid"
#endif /* __polyspace_geteuid */

#if defined(__polyspace_getgid) && !defined(__polyspace_no_getgid)

#if __polyspace_use_customer_include
   #include <__polyspace__unistd.h>
#endif

#undef getgid

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(getgid, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(getgid, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, gid_t, getgid, NO_VARARGS, __PST_THROW)
    {
        volatile gid_t ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "getgid"
#pragma POLYSPACE_POLYMORPHIC "getgid"
#endif /* __polyspace_getgid */

#if defined(__polyspace_getegid) && !defined(__polyspace_no_getegid)
#if __polyspace_use_customer_include
    #include <__polyspace__unistd.h>
#endif

#undef getegid

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(getegid, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(getegid, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, gid_t, getegid, NO_VARARGS, __PST_THROW)
    {
        volatile gid_t ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "getegid"
#pragma POLYSPACE_POLYMORPHIC "getegid"
#endif /* __polyspace_getegid */

#if defined(__polyspace_lchown) && !defined(__polyspace_no_lchown)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_lchown)
    #pragma POLYSPACE_INLINE_CHECKS "lchown"
#endif /* !NO_CHECKS_INLINING */

#if __polyspace_use_customer_include
   #include <__polyspace__unistd.h>
#endif

#undef lchown


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(lchown, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(lchown, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, lchown, const char *, path, uid_t, owner, gid_t, group, NO_VARARGS, __PST_THROW)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (file path)"
#pragma Inspection_Point path
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (file path)")
        ASSERT_IS_VALID_STRING(path);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        /*  Upon successful completion, lchown() shall return 0. Otherwise, it shall return -1 */
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "lchown"
#else

#endif
#endif /* __polyspace_lchown */

#if defined(__polyspace_link) && !defined(__polyspace_no_link)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_link)
    #pragma POLYSPACE_INLINE_CHECKS "link"
#endif /* !NO_CHECKS_INLINING */
#undef link


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(link, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(link, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, link, const char *, existing, const char *, new_, NO_VARARGS, __PST_THROW)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (old file path)"
#pragma Inspection_Point existing
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (new file path)"
#pragma Inspection_Point new_
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (old file path)")
        ASSERT_IS_VALID_STRING(existing);
#pragma polyspace_check_info
#pragma polyspace_check_info valid_string_message("second argument (new file path)")
        ASSERT_IS_VALID_STRING(new_);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        /* Upon successful completion, 0 shall be returned. Otherwise, -1 shall be returned */
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "link"
#else

#endif
#endif /* __polyspace_link */

#if defined(__polyspace_pause) && !defined(__polyspace_no_pause)
#undef pause

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(pause, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(pause, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, pause, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
      /*/  Since pause() suspends thread execution indefinitely unless interrupted by a signal, there is no successful completion return value. A value of -1 shall be returned and errno set to indicate the erro */
      int tmp = _polyspace_random_int();
      APPLY_CONSTRAINT(tmp>0);
      errno=tmp;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
      RETURN(-1);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "pause"
#pragma POLYSPACE_POLYMORPHIC "pause"
#endif /* __polyspace_pause */

#if defined(__polyspace_pipe) && !defined(__polyspace_no_pipe)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_pipe)
    #pragma POLYSPACE_INLINE_CHECKS "pipe"
#endif /* !NO_CHECKS_INLINING */
#undef pipe


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(pipe, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(pipe, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, pipe, int*, fildes, NO_VARARGS, __PST_THROW)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        /* Upon successful completion, 0 shall be returned; otherwise, -1 shall be returned */
        RET_ERROR_AND_SET_ERRNO(-1);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
        fildes[0] = _polyspace_random_int();
        fildes[1] = _polyspace_random_int();

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else

#endif
#endif /* __polyspace_pipe */

#if (defined(__polyspace_read) && !defined(__polyspace_no_read)) || (defined(__polyspace_pread) && !defined(__polyspace_no_pread))
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_read)
    #pragma POLYSPACE_INLINE_CHECKS "read"
#endif /* !NO_CHECKS_INLINING */

#if __polyspace_use_customer_include
#if defined(PST_VISUAL)
    /* C++ : on visual we sometime need to define ssize_t */
    typedef int ssize_t;
    #ifdef PST_HAS_IO_H
       #include <io.h>
    #endif
#else
    #include <__polyspace__unistd.h>
#endif
#endif // __polyspace_use_customer_include

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(read, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(read, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

    /* C++ : vxWorks has specifities */
#if (defined __OS_VXWORKS) && (defined __cplusplus)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, ssize_t, read, int, fildes, char *, buf, size_t, nbyte, NO_VARARGS, )
#else /* __OS_VXWORKS */


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, ssize_t, read, int, fildes, void *, buf, size_t, nbyte, NO_VARARGS, __PST_THROW_OLD_LIBC)
#endif /* __OS_VXWORKS */
    {
        volatile ssize_t random_ssize;
        ssize_t ret;
        int i;
        char *tmp;
        if (nbyte == 0) {
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(0);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }

#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument (output buffer)"
#pragma Inspection_Point buf
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (nbytes)"
#pragma Inspection_Point nbyte
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info writable_array_message("second argument (output buffer)")
        tmp = (char *) buf;
        ASSERT_IS_WRITABLE_ARRAY(char, tmp, nbyte);
#pragma polyspace_check_info
        /* C/4992 : return error (-1) and set errno if error */
        RET_ERROR_AND_SET_ERRNO(-1);
        ret = random_ssize;
        APPLY_CONSTRAINT(ret <= nbyte);
        for (i = 0; i < ret; i++) {
            ((char*)buf)[i] = _polyspace_random_char();
        }
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "read"
#endif
#endif /* __polyspace_read */

#if defined(__polyspace_pread) && !defined(__polyspace_no_pread)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_pread)
    #pragma POLYSPACE_INLINE_CHECKS "pread"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
   #include <__polyspace__unistd.h>
#endif

#undef pread


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(pread, 4)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_4
    #define RETURN(x) RETURN_CUSTOM_TYPE(pread, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_4
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, ssize_t, pread, int, fildes, void  *, buf, size_t , nbyte, off_t, offset, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        char *tmp;
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument (output buffer)"
#pragma Inspection_Point buf
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (nbytes)"
#pragma Inspection_Point nbyte
        ;
#pragma polyspace_value_info

 if (nbyte > 0)
        {
            tmp = (char *) buf;
#pragma polyspace_check_info writable_array_message("second argument (output buffer)")
            ASSERT_IS_WRITABLE_ARRAY(char, tmp, nbyte);
#pragma polyspace_check_info
        }

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(read(fildes, buf, nbyte)); /* the offset doesn't matter */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif

    }
    PST_STUB_C_DEF_END
#else

#endif
#endif /* __polyspace_pread */

#if defined(__polyspace_resolvepath) && !defined(__polyspace_no_resolvepath)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_resolvepath)
    #pragma POLYSPACE_INLINE_CHECKS "resolvepath"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <__polyspace__unistd.h>
#endif

#undef resolvepath


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(resolvepath, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(resolvepath, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, resolvepath, const char *, path, char *, buf, size_t, bufsiz, NO_VARARGS, )
    {
        int i, len;
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (path)"
#pragma Inspection_Point path
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_ALLOCATION") "second argument (resolved path)"
#pragma Inspection_Point path
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (path)")
        ASSERT_IS_VALID_STRING(path);
#pragma polyspace_check_info
        if (_polyspace_random_int()) {
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
            RETURN(-1); /* case of failure */
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
        }
        len = _polyspace_random_int();
        APPLY_CONSTRAINT(len < bufsiz);
#pragma polyspace_check_info writable_array_message("second argument (resolved path)")
        if (len >= 0) ASSERT_IS_WRITABLE_ARRAY(char, buf, len + 1);
#pragma polyspace_check_info
        for (i = 0; i < len; i++) buf[i] = _polyspace_random_char();
        if (len >= 0) {
            buf[len] = 0;    /* C/7333 */
        }
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(len);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
    extern int resolvepath(const char *path, char *buf, size_t bufsiz);
#endif
#endif /* __polyspace_resolvepath */

#if defined(__polyspace_setuid) && !defined(__polyspace_no_setuid)

#if __polyspace_use_customer_include
   #include <__polyspace__unistd.h>
#endif

#undef setuid

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(setuid, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(setuid, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, setuid, uid_t, uid, NO_VARARGS, __PST_THROW)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
      /* On success, zero is returned.  On error, -1 is returned */
      RET_ERROR_AND_SET_ERRNO(-1);
      RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "setuid"
#pragma POLYSPACE_POLYMORPHIC "setuid"
#endif /* __polyspace_setuid */

#if defined(__polyspace_setegid) && !defined(__polyspace_no_setegid)

#if __polyspace_use_customer_include
    #include <__polyspace__unistd.h>
#endif

#undef setegid

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(setegid, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(setegid, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, setegid, gid_t, egid, NO_VARARGS, __PST_THROW)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
      /* On success, zero is returned.  On error, -1 is returned */
      RET_ERROR_AND_SET_ERRNO(-1);
      RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "setegid"
#pragma POLYSPACE_POLYMORPHIC "setegid"
#endif /* __polyspace_setegid */

#if defined(__polyspace_seteuid) && !defined(__polyspace_no_seteuid)

#if __polyspace_use_customer_include
   #include <__polyspace__unistd.h>
#endif

#undef seteuid

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(seteuid, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(seteuid, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, seteuid, uid_t, euid, NO_VARARGS, __PST_THROW)
    {
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
      /* On success, zero is returned.  On error, -1 is returned */
      RET_ERROR_AND_SET_ERRNO(-1);
      RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "seteuid"
#pragma POLYSPACE_POLYMORPHIC "seteuid"
#endif /* __polyspace_seteuid */


#if defined(__polyspace_sleep)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_sleep)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_sleep)
    #pragma POLYSPACE_INLINE_CHECKS "sleep"
#endif /* !NO_CHECKS_INLINING */
#undef sleep

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(sleep, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(sleep, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, unsigned int, sleep, unsigned int, seconds, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
        volatile int ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "sleep"
#pragma POLYSPACE_POLYMORPHIC "sleep"
#else
#pragma POLYSPACE_NO_INSTRUMENT "sleep"
#endif
#endif /* __polyspace_sleep */

#if defined(__polyspace_sync) && !defined(__polyspace_no_sync)
    /* extern void sync(void); or extern int sync(void); */


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(sync, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(sync, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif

#ifdef __cplusplus
#ifdef __polyspace_sync_return_void
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, sync, NO_VARARGS, __PST_THROW)
    {
        ;
    }
    PST_STUB_C_DEF_END
#else
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, sync, NO_VARARGS, __PST_THROW)
    {
        volatile int ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#endif
#endif /* __cplusplus */
#pragma POLYSPACE_PURE "sync"
#pragma POLYSPACE_POLYMORPHIC "sync"
#endif /* __polyspace_sync */

#if defined(__polyspace_symlink) && !defined(__polyspace_no_symlink)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_symlink)
    #pragma POLYSPACE_INLINE_CHECKS "symlink"
#endif /* !NO_CHECKS_INLINING */
#undef symlink


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(symlink, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(symlink, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, symlink, const char *, name1, const char *, name2, NO_VARARGS, __PST_THROW)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (old file path)"
#pragma Inspection_Point name1
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (new file path)"
#pragma Inspection_Point name2
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (old file path)")
        ASSERT_IS_VALID_STRING(name1);
#pragma polyspace_check_info
#pragma polyspace_check_info valid_string_message("second argument (new file path)")
        ASSERT_IS_VALID_STRING(name2);
#pragma polyspace_check_info
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
    /* Upon successful completion, symlink() shall return 0; otherwise, it shall return -1 */
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "symlink"
#else

#endif
#endif /* __polyspace_symlink */

#if defined(__polyspace_ttyname) && !defined(__polyspace_no_ttyname)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_ttyname)
    #pragma POLYSPACE_INLINE_CHECKS "ttyname"
#endif /* !NO_CHECKS_INLINING */
#undef ttyname


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(ttyname, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(ttyname, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, char * , ttyname, int, fildes, NO_VARARGS, __PST_THROW)
    {
        char *ret;
        int i, len;
        RET_ERROR_AND_SET_ERRNO((char *) 0);
        ret = (char*)__ps_builtin_random_string();
        RETURN(ret);
    }
    PST_STUB_C_DEF_END
#else

#endif
#endif /* __polyspace_ttyname */

#if defined(__polyspace_unlink)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_unlink)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_unlink)
    #pragma POLYSPACE_INLINE_CHECKS "unlink"
#endif /* !NO_CHECKS_INLINING */
#undef unlink
#if (defined __OS_VXWORKS) && (defined __cplusplus)
    #define __PST_RETURN_TYPE STATUS
    #define __PST_ARG_TYPE char *
#else /* __OS_VXWORKS */
    #define __PST_RETURN_TYPE int
    #define __PST_ARG_TYPE const char *
#endif  /* __OS_VXWORKS */


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(unlink, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(unlink, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, __PST_RETURN_TYPE, unlink, __PST_ARG_TYPE, path, NO_VARARGS, __PST_THROW)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (file path)"
#pragma Inspection_Point path
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("argument (file path)")
        ASSERT_IS_VALID_STRING(path);
#pragma polyspace_check_info
        /* Upon successful completion, 0 shall be returned. Otherwise, -1 shall be returned */
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(0);
    }
    PST_STUB_C_DEF_END
#undef __PST_RETURN_TYPE
#undef __PST_ARG_TYPE
#pragma POLYSPACE_POLYMORPHIC "unlink"
#else
#pragma POLYSPACE_NO_INSTRUMENT "unlink"
#endif
#endif /* __polyspace_unlink */

#if defined(__polyspace_vfork) && !defined(__polyspace_no_vfork)

#if __polyspace_use_customer_include
   #include <__polyspace__unistd.h>
#endif

#undef vfork

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(vfork, 0)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_0
    #define RETURN(x) RETURN_CUSTOM_TYPE(vfork, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_0
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, pid_t, vfork, NO_VARARGS, __PST_THROW)
    {
        volatile pid_t ret = 0;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(ret);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_PURE "vfork"
#pragma POLYSPACE_POLYMORPHIC "vfork"
#endif /* __polyspace_vfork */

#if (defined(__polyspace_write) && !defined(__polyspace_no_write)) || (defined(__polyspace_pwrite) && !defined(__polyspace_no_pwrite))
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_write)
    #pragma POLYSPACE_INLINE_CHECKS "write"
#endif /* !NO_CHECKS_INLINING */

#if __polyspace_use_customer_include
#if defined(PST_VISUAL)
    /* C++ : on visual we sometime need to define ssize_t */
    typedef int ssize_t;
    #ifdef PST_HAS_IO_H
       #include <io.h>
    #endif
#else
    #include <__polyspace__unistd.h>
#endif
#endif // __polyspace_use_customer_include


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(write, 3)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
    #define RETURN(x) RETURN_CUSTOM_TYPE(write, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
    #define RETURN(x) return (x)
#endif

#if (defined __OS_VXWORKS) && (defined __cplusplus)
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, ssize_t, write, int, fildes, char*, buf, size_t, nbyte, NO_VARARGS, )
#else /* __OS_VXWORKS */


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, ssize_t, write, int, fildes, const void *, buf, size_t, nbyte, NO_VARARGS, __PST_THROW_OLD_LIBC)
#endif /* __OS_VXWORKS */
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (input buffer)"
#pragma Inspection_Point buf
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (nbytes)"
#pragma Inspection_Point nbyte
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("second argument (input buffer)")
        ASSERT_IS_READABLE_ARRAY(char, buf, nbyte);
#pragma polyspace_check_info
        /* C/4992 : return error (-1) and set set errno if error */
        RET_ERROR_AND_SET_ERRNO(-1);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN((ssize_t) _polyspace_random_size_t() % (nbyte + 1));
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "write"
#else
#pragma POLYSPACE_NO_INSTRUMENT "write"
#endif
#endif /* __polyspace_write */

#if defined(__polyspace_pwrite) && !defined(__polyspace_no_pwrite)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_pwrite)
    #pragma POLYSPACE_INLINE_CHECKS "pwrite"
#endif /* !NO_CHECKS_INLINING */

#if __polyspace_use_customer_include
    #include <__polyspace__unistd.h>
#endif

#undef pwrite


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(pwrite, 4)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_4
    #define RETURN(x) RETURN_CUSTOM_TYPE(pwrite, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_4
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, ssize_t, pwrite, int, fildes, const void  *, buf, size_t , nbyte, off_t, offset, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (input buffer)"
#pragma Inspection_Point buf
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "third argument (nbytes)"
#pragma Inspection_Point nbyte
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("second argument (input buffer)")
        ASSERT_IS_READABLE_ARRAY(char, buf, nbyte);
#pragma polyspace_check_info

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(write(fildes, buf, nbyte)); /* the offset doesn't matter */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif

    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "pwrite"
#else

#endif
#endif /* __polyspace_pwrite */

    /*********************************************************************** fcntl.h */
#if (defined(__polyspace_open) && !defined(__polyspace_no_open)) || (defined(__polyspace_creat) && !defined(__polyspace_no_creat))
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_open)
    #pragma POLYSPACE_INLINE_CHECKS "open"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include &&  !(defined __OS_VXWORKS)
    #define __polyspace_open_has_varargs
#endif
#ifndef  __polyspace_open_has_varargs


    #undef PST_STUB_C_DEF_BEGIN
    #undef RETURN
    #if CUSTOM_STUB_TYPE(open, 3)
        #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_3
        #define RETURN(x) RETURN_CUSTOM_TYPE(open, x)
    #else
        #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_3
        #define RETURN(x) return (x)
    #endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, open, const char *, path, int, oflag, int, mode, NO_VARARGS, )

#else /* __polyspace_open_has_varargs */


    #undef PST_STUB_C_DEF_BEGIN
    #undef RETURN
    #if CUSTOM_STUB_TYPE(open, 2)
        #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
        #define RETURN(x) RETURN_CUSTOM_TYPE(open, x)
    #else
        #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
        #define RETURN(x) return (x)
    #endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, open, const char *, path, int, oflag, HAS_VARARGS, __PST_THROW_OLD_LIBC)
#endif /* __polyspace_open_has_varargs */
    {
        int position = _polyspace_random_int();
        APPLY_CONSTRAINT(position > 0);

#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (file path)"
#pragma Inspection_Point path
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (file path)")
        ASSERT_IS_VALID_STRING(path);
#pragma polyspace_check_info
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
        #endif
        RET_ERROR_AND_SET_ERRNO(-1);
        RETURN(position);
        #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
        #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "open"
#endif
#endif /* __polyspace_open */

#if defined(__polyspace_creat) && !defined(__polyspace_no_creat)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_creat)
    #pragma POLYSPACE_INLINE_CHECKS "creat"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include  && !defined(__mode_t_defined)

#if (defined _MSC_VER) && (_MSC_VER < 1900)
    // Visual have fcntl.h but does not define mode_t
    extern "C" typedef int mode_t;
#else
    #include <fcntl.h>
#endif

#endif

#undef creat

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(creat, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(creat, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif


    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, creat, const char *, path, mode_t, mode, NO_VARARGS, __PST_THROW_OLD_LIBC)
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (file path)"
#pragma Inspection_Point path
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info valid_string_message("first argument (file path)")
        ASSERT_IS_VALID_STRING(path);
#pragma polyspace_check_info

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(open(path, 0, mode)); /* the flags are not important */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#pragma POLYSPACE_POLYMORPHIC "creat"
#endif
#endif /* __polyspace_creat */

    /* C++/5930 : sigsetjmp nust be recognized on all mode */
#if defined(__cplusplus) && defined(__polyspace_sigsetjmp) && !defined(__polyspace_no_sigsetjmp)
#if __polyspace_use_customer_include
  #include <setjmp.h>
#endif
#undef sigsetjmp
#define __polyspace___sigsetjmp
    PST_STUB_C_DECL(int, __sigsetjmp, (sigjmp_buf env, int savemask)) __PST_THROW;


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
    /* Do not adapt type.
#if CUSTOM_STUB_TYPE(sigsetjmp, 2)
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
#define RETURN(x) RETURN_CUSTOM_TYPE(sigsetjmp, x)
#else */
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
#define RETURN(x) return (x)
    /*#endif */
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, sigsetjmp, sigjmp_buf, env, int, savemask, NO_VARARGS, )
    {
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (context/environment buffer)"
#pragma Inspection_Point env
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info writable_pointer_message("first argument (context/environment buffer)")
        ASSERT_IS_WRITABLE_POINTER(sigjmp_buf, env);
#pragma polyspace_check_info

    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(__sigsetjmp(env, savemask));
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif

    }
    PST_STUB_C_DEF_END
#endif /* C++ / __polyspace___sigsetjmp */

    /* C++/5930 : sigsetjmp nust be recognized on all mode */
#if (defined(__OS_LINUX) || defined(__cplusplus)) && defined(__polyspace___sigsetjmp) && !defined(__polyspace_no___sigsetjmp)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined___sigsetjmp)
    #pragma POLYSPACE_INLINE_CHECKS "__sigsetjmp"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <setjmp.h>
#endif

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
    /* Do not adapt type.
#if CUSTOM_STUB_TYPE(__sigsetjmp, 2)
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
#define RETURN(x) RETURN_CUSTOM_TYPE(__sigsetjmp, x)
#else*/
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
#define RETURN(x) return (x)
    /*#endif*/
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, __sigsetjmp, sigjmp_buf, env, int, savemask, NO_VARARGS, __PST_THROW)
    {
        /*
           The gcc compiler for Linux defines the 'setjmp' and 'sigsetjmp' macros as
           calls to the function '__sigsetjmp'.

           'sigsetjmp' is similar to 'setjmp'. If 'savemask' is nonzero, the set of
           blocked signals is saved in 'env' and will be restored if a 'siglongjmp'
           is later performed with this 'env'.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (context/environment buffer)"
#pragma Inspection_Point env
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info writable_pointer_message("first argument (context/environment buffer)")
        ASSERT_IS_WRITABLE_POINTER(sigjmp_buf, env);
#pragma polyspace_check_info

        /*
           If the return is from a direct invocation, the '__sigsetjmp' function
           returns the value zero.

           If the return is from a call to the 'longjmp' function, the 'sigsetjmp'
           macro returns a nonzero value.

           Caution : 'setjmp' and 'longjmp' are not fully supported. The
                     model assumes that 'setjmp' always returns 0 and that
                     'longjmp' never returns. This makes it possible to analyze
                     properly the nominal behaviour of an application, when
                     the 'longjmp' calls are not reached, considering that
                     reaching a 'longjmp' call is an error case.
        */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(0);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "__sigsetjmp"
#endif
#endif /* __OS_LINUX && __polyspace___sigsetjmp */

#if (defined(__OS_LINUX)||defined(__cplusplus)) && defined(__polyspace_sigsetjmp) && !defined(__polyspace_no_sigsetjmp)
    #if defined(POLYSPACE_INSTRUMENT)
        #pragma POLYSPACE_NO_INSTRUMENT "sigsetjmp"
    #endif
#endif /* __OS_LINUX && __polyspace_sigsetjmp */

    /* C++/5930 : siglongjmp must be recognized in all mode */
#if (defined(__OS_LINUX)||defined(__cplusplus)) && defined(__polyspace_siglongjmp) && !defined(__polyspace_no_siglongjmp)
#if !defined(POLYSPACE_INSTRUMENT)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_siglongjmp)
    #pragma POLYSPACE_INLINE_CHECKS "siglongjmp"
#endif /* !NO_CHECKS_INLINING */
#if __polyspace_use_customer_include
    #include <setjmp.h>
#endif

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
    /* Do not adapt type.
#if CUSTOM_STUB_TYPE(siglongjmp, 2)
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
#define RETURN(x) RETURN_CUSTOM_TYPE(siglongjmp, x)
#else*/
#define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
#define RETURN(x) return (x)
    /* #endif */
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, void, siglongjmp, sigjmp_buf, env, int, val, NO_VARARGS, __PST_THROW)
    {
        sigjmp_buf dummy;
        /*
           'siglongjmp' is similar to 'longjmp' except for the  type  of  its 'env'
           argument. If the 'sigsetjmp' call that set this 'env' used a nonzero
           'savemask' flag, 'siglongjmp' also  restores  the  set  of blocked signals.
        */
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "first argument (context/environment buffer)"
#pragma Inspection_Point env
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info readable_pointer_message("first argument (context/environment buffer)")
        *dummy = *env;
#pragma polyspace_check_info
        /*
           Caution : 'setjmp' and 'longjmp' are not fully supported. The
                     model assumes that 'setjmp' always returns 0 and that
                     'longjmp' never returns. This makes it possible to analyze
                     properly the nominal behaviour of an application, when
                     the 'longjmp' calls are not reached, considering that
                     reaching a 'longjmp' call is an error case.
        */
        for(;;);
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "siglongjmp"
#endif
#endif /* __OS_LINUX && __polyspace_siglongjmp */

#endif /* ifndef POLYSPACE_STRICT_ANSI_STANDARD_STUBS */

    /*
     * FD_ISSET macro defined as function (see macros_to_deactivate.txt)
     * The 2nd argument is defined with 'void *' instead of 'fd_set *'
     * which needs including non-ANSI C specified file <sys/time.h> (in
     * fact, the conversion from 'fd_set *' to 'void *' is implicite for
     * all calls to FD_ISSET).
     */
#if defined(__polyspace___polyspace_macro_FD_ISSET) && !defined(__polyspace_no_FD_ISSET) && !defined(POLYSPACE_INSTRUMENT)
#if defined(__cplusplus)
PST_LINK_C int __polyspace_macro_FD_ISSET(int fd, const void *fdset);
#endif /* __cplusplus */
#pragma POLYSPACE_INLINE_CHECKS "__polyspace_macro_FD_ISSET"

    int __polyspace_macro_FD_ISSET(int fd, const void *fdset)
    {
      volatile int random_int = 0 ;
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "first argument (fd)"
#pragma Inspection_Point fd
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (fdset)"
#pragma Inspection_Point fdset
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info arg_green_orange_red_message("fisrt argument (fd)", "is positive or null integer", "may be positive or null", "is not positive or null","")
      ASSERT_IS_VALID_CONDITION(fd>=0);
#pragma polyspace_check_info
#pragma polyspace_check_info arg_green_orange_red_message("second argument (fdset)", "is non null pointer", "may be a non null pointer", "is a null pointer","")
      ASSERT_IS_VALID_CONDITION(fdset != 0);
#pragma polyspace_check_info
      return random_int;
    }
#endif /* __polyspace_FD_ISSET */

#if defined(__polyspace___polyspace_macro_FD_SET) && !defined(__polyspace_no_FD_SET) && !defined(POLYSPACE_INSTRUMENT)
#if defined(__cplusplus)
PST_LINK_C void __polyspace_macro_FD_SET(int fd, void *fdset);
#endif /* __cplusplus */
#pragma POLYSPACE_INLINE_CHECKS "__polyspace_macro_FD_SET"
    void __polyspace_macro_FD_SET(int fd, void *fdset)
    {
        char tmp, *tmp2;
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "first argument (fd)"
#pragma Inspection_Point fd
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (fdset)"
#pragma Inspection_Point fdset
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info arg_green_orange_red_message("first argument (fd)", "is positive or null integer", "may be positive or null", "is not positive or null","")
        ASSERT_IS_VALID_CONDITION(fd>=0);
#pragma polyspace_check_info
#pragma polyspace_check_info arg_green_orange_red_message("second argument (fdset)", "is non null pointer", "may be a non null pointer", "is a null pointer","")
        ASSERT_IS_VALID_CONDITION(fdset != 0);
#pragma polyspace_check_info
        tmp2 = (char *) fdset;
        volatile int random_int = 0 ;
        volatile char random_char = 0 ;

        while (random_int) {
            tmp = *tmp2;
            *tmp2 = random_char ;
            tmp2 += random_int ;
        }
    }
#endif /* __polyspace_FD_SET */

#if defined(__polyspace___polyspace_macro_FD_ZERO) && !defined(__polyspace_no_FD_ZERO) && !defined(POLYSPACE_INSTRUMENT)
#if defined(__cplusplus)
PST_LINK_C void __polyspace_macro_FD_ZERO(void *fdset);
#endif /* __cplusplus */
#pragma POLYSPACE_INLINE_CHECKS "__polyspace_macro_FD_ZERO"
    void __polyspace_macro_FD_ZERO(void *fdset)
    {
        char tmp, *tmp2;
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "argument (fdset)"
#pragma Inspection_Point fdset
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info arg_green_orange_red_message("argument (fdset)", "is non null pointer", "may be a non null pointer", "is a null pointer","")
        ASSERT_IS_VALID_CONDITION(fdset != 0);
#pragma polyspace_check_info
        tmp2 = (char *) fdset;
        volatile int random_int = 0 ;
        volatile char random_char = 0 ;

        while (random_int) {
            tmp = *tmp2;
            *tmp2 = random_char ;
            tmp2 += random_int ;
        }
    }
#endif /* __polyspace_FD_ZERO */

#if defined(__polyspace___polyspace_macro_FD_CLR) && !defined(__polyspace_no_FD_CLR) && !defined(POLYSPACE_INSTRUMENT)
#if defined(__cplusplus)
PST_LINK_C void __polyspace_macro_FD_CLR(int fd, void *fdset);
#endif /* __cplusplus */
#pragma POLYSPACE_INLINE_CHECKS "__polyspace_macro_FD_CLR"
   void __polyspace_macro_FD_CLR(int fd, void *fdset)
    {
        char tmp, *tmp2;
#pragma polyspace_value_info STD_LIB_value_type("VALUE") "first argument (fd)"
#pragma Inspection_Point fd
        ;
#pragma polyspace_value_info
#pragma polyspace_value_info STD_LIB_value_type("POINTER_NULL") "second argument (fdset)"
#pragma Inspection_Point fdset
        ;
#pragma polyspace_value_info

#pragma polyspace_check_info arg_green_orange_red_message("fisrt argument (fd)", "is positive or null integer", "may be positive or null", "is not positive or null","")
        ASSERT_IS_VALID_CONDITION(fd>=0);
#pragma polyspace_check_info
#pragma polyspace_check_info arg_green_orange_red_message("second argument (fdset)", "is non null pointer", "may be a non null pointer", "is a null pointer","")
        ASSERT_IS_VALID_CONDITION(fdset != 0);
#pragma polyspace_check_info
        tmp2 = (char *) fdset;
        volatile int random_int = 0 ;
        volatile char random_char = 0 ;

        while (random_int) {
            tmp = *tmp2;
            *tmp2 = random_char ;
            tmp2 += random_int ;
        }
    }
#endif /* __polyspace_FD_CLR */

    /*********************************************************************** signal.h */

    /*
     * signal(SIG, FUNC) may store FUNC and return it later
     */

#if !defined(POLYSPACE_INSTRUMENT)
#if (defined(__polyspace_signal) && !defined(__polyspace_no_signal)) || \
    (defined(__polyspace_raise) && !defined(__polyspace_no_raise))
#ifdef __cplusplus
    /* C++ : extern "C" => easier to use a typedef */
    PST_LINK_C typedef void (*PST_DECL_C _polyspace_signal_function_type)(int);
    PST_LINK_C void _polyspace_default_signal(int x) { }
    static _polyspace_signal_function_type _polyspace_signal_handler = _polyspace_default_signal;
#else /* __cplusplus */
    void _polyspace_default_signal(int x) { }
    static void (*_polyspace_signal_handler)(int) = _polyspace_default_signal;
    typedef void (*_polyspace_signal_function_type)(int);
#endif /* __cplusplus */
#endif
#endif

#if defined(__polyspace_signal)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_signal)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_signal)
    #pragma POLYSPACE_INLINE_CHECKS "signal"
#endif /* !NO_CHECKS_INLINING */
#undef signal

#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(signal, 2)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_2
    #define RETURN(x) RETURN_CUSTOM_TYPE(signal, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_2
    #define RETURN(x) return (x)
#endif

void __polyspace_macro_SIG_ERR(int signum) {}
#ifndef SIG_DFL
#define SIG_DFL (0)  /* Default action.  */
#endif
#ifndef SIG_IGN
#define SIG_IGN (1)  /* Ignore signal.  */
#endif

    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, _polyspace_signal_function_type, signal, int, sig, _polyspace_signal_function_type, func, NO_VARARGS, __PST_THROW)
    {
      _polyspace_signal_function_type res = ((_polyspace_signal_function_type) &__polyspace_macro_SIG_ERR);
        int tmp;
        /*
           ISO/IEC 9899:1990 (E) : 7.7.1.1 The 'signal' function (page 121)

           The 'signal' function chooses one of three ways in which receipt of the
           signal number 'sig' is to be subsequently handled.

           At program startup, the equivalent of
           signal(sig, SIG_IGN);
           may be executed for some signals selected in an implementation-defined
           manner, the equivalent of
           signal(sig, SIG_DFL);
           is executed for all other signals defined by the implementation.
        */

        /*
          Caution : 'signal' and 'raise' are not fully supported. The model
          assumes that signal handlers that were given as
          arguments to 'signal' may be called only during a call
          to 'raise' and that they end before the 'raise' function
          returns.
        */
        if (_polyspace_random_int())
            res = ((_polyspace_signal_function_type) SIG_DFL);
        else if (_polyspace_random_int())
            res = _polyspace_signal_handler;
        else if (_polyspace_random_int()) {
            /*
               This is because, the model initializes all the signal handlers to
               SIG_DFL whether they can also equal SIG_IGN and so, SIG_IGN is a
               potential return value.
            */
            res = ((_polyspace_signal_function_type) SIG_IGN);
        } else {
            /*
              If the request cannot be honored, a value of SIG_ERR is returned and
              a positive value is stored in 'errno'.
            */
            tmp = _polyspace_random_int();
            APPLY_CONSTRAINT(tmp > 0);
            errno = tmp;
            res =  ((_polyspace_signal_function_type) &__polyspace_macro_SIG_ERR);
        }
        /*
          func shall point to a function to be called when that signal occurs.

          The model assumes that it may be stored in order to be called later.
        */
        if (_polyspace_random_int())
            _polyspace_signal_handler = func;
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(res);
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "signal"
#endif
#endif /* __polyspace_signal */

#if defined(__polyspace_raise)
#if !defined(POLYSPACE_INSTRUMENT) && !defined(__polyspace_no_raise)
#if !defined(NO_CHECKS_INLINING) && !defined(__polyspace_no_inlined_raise)
    #pragma POLYSPACE_INLINE_CHECKS "raise"
#endif /* !NO_CHECKS_INLINING */
#undef raise


#undef PST_STUB_C_DEF_BEGIN
#undef RETURN
#if CUSTOM_STUB_TYPE(raise, 1)
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_CUSTOM_TYPE_1
    #define RETURN(x) RETURN_CUSTOM_TYPE(raise, x)
#else
    #define PST_STUB_C_DEF_BEGIN PST_STUB_C_STD_TYPE_1
    #define RETURN(x) return (x)
#endif
    PST_STUB_C_DEF_BEGIN(PST_STUB_C_DEF, int, raise, int, sig, NO_VARARGS, __PST_THROW)
    {
        /*
           ISO/IEC 9899:1990 (E) : 7.7.2.1 The 'raise' function (page 121)

           The 'raise' function sends the signal 'sig' to the executing program.
        */

        /*
          Caution : 'signal' and 'raise' are not fully supported. The model
          assumes that signal handlers that were given as
          arguments to 'signal' may be called only during a call
          to 'raise' and that they end before the 'raise' function
          returns.
        */
        if (_polyspace_random_int())
            (*_polyspace_signal_handler)(_polyspace_random_int());

        if (_polyspace_random_int())
            for(;;) ; /* may not return (depends on the signal) */
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info returned_value_numeric
    #endif
        RETURN(_polyspace_random_int());
    #ifndef __polyspace_static_types_for_stubs
#pragma polyspace_check_info
    #endif
    }
    PST_STUB_C_DEF_END
#else
#pragma POLYSPACE_NO_INSTRUMENT "raise"
#endif
#endif /* __polyspace_raise */

    /* Specific stubs for VxWorks */
#if defined(__OS_VXWORKS)

#if defined(__polyspace_dosFsDateTimeInstall) && !defined(__polyspace_no_dosFsDateTimeInstall)
#include <dosFsLib.h>
#undef dosFsDateTimeInstall
    PST_STUB_C_DEF(void, dosFsDateTimeInstall, (FUNCPTR pDateTimeFunc))
    {
    }
#endif /* __polyspace_dosFsDateTimeInstall */


#if defined(__polyspace_wdStart) && !defined(__polyspace_no_wdStart)
#include <wdLib.h>
#undef wdStart
    PST_STUB_C_DEF(STATUS, wdStart, (WDOG_ID wdId, int delay, FUNCPTR pRoutine, int parameter))
    {
        volatile STATUS random;
        return random;
    }

#endif /* __polyspace_wdStart */


#endif /* ifdef __OS_VXWORKS */

#endif /* ifndef POLYSPACE_NO_STANDARD_STUBS */



    /* Include non standard stubs (only with -DPOLYSPACE_NON_STANDARD_STUBS) */
#ifndef __cplusplus
    #ifdef POLYSPACE_NON_STANDARD_STUBS
        #include <__polyspace__non_stdstubs.c>
    #endif
#endif /* !__cplusplus */

    /* Verifier does not allow tasks and main to be called.
       So such calls will be replaced by calls to polyspace_fake_main and polyspace_fake_task. Both are pure functions.
     */
#pragma POLYSPACE_PURE polyspace_fake_main
#pragma POLYSPACE_PURE polyspace_fake_task


#if defined(POLYSPACE_INSTRUMENT)
    #pragma POLYSPACE_NO_INSTRUMENT "HUGE_VAL"
    #pragma POLYSPACE_NO_INSTRUMENT "HUGE_VALF"
    #pragma POLYSPACE_NO_INSTRUMENT "HUGE_VALL"
    double HUGE_VAL;
    double HUGE_VALF;
    double HUGE_VALL;
#else
#ifndef __cplusplus
#ifdef __polyspace_HUGE_VAL
volatile double      HUGE_VAL;
#endif
#ifdef __polyspace_HUGE_VALF
volatile float       HUGE_VALF;
#endif
#ifdef __polyspace_HUGE_VALL
volatile long double HUGE_VALL;
#endif
#endif /* __cplusplus*/
#endif /* defined(POLYSPACE_INSTRUMENT) */

    /****************************************************************************
     ****************************************************************************
     ********  VARIABLES STUBS
     ****************************************************************************
     ****************************************************************************/

#if !defined(POLYSPACE_NO_STANDARD_STUBS) && !defined(__cplusplus)

    /****************************************************************************
    *  STANDARD LIBRARIES - OS-TARGET LINUX
    ****************************************************************************/
    #if defined(__OS_LINUX)

        /*
        * ctypes.h / stdio.h variables stubs ( C/8838 )
        */
        #if defined(__polyspace___ctype_b) && !defined(__polyspace_no___ctype_b)
            #if !defined(POLYSPACE_INSTRUMENT)
                ////#include <ctype.h>
                #undef __ctype_b
                extern unsigned short __pst__ctype_b[257];
                const unsigned short int *__ctype_b = &__pst__ctype_b[1];
            #else
                extern const unsigned short int *__ctype_b;
                #pragma POLYSPACE_NO_INSTRUMENT "__ctype_b"
            #endif
        #endif

        #if defined(__polyspace___ctype_tolower) && !defined(__polyspace_no___ctype_tolower)
            ////#include <ctype.h>
            #undef __ctype_tolower
            extern __const __int32_t *__ctype_tolower;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "__ctype_tolower"
            #endif
        #endif

        #if defined(__polyspace___ctype_toupper) && !defined(__polyspace_no___ctype_toupper)
            ////#include <ctype.h>
            #undef __ctype_toupper
            extern __const __int32_t *__ctype_toupper;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "__ctype_toupper"
            #endif
        #endif

        #if defined(__polyspace__ctype) && !defined(__polyspace_no__ctype)
            /*  #include <linux/ctype.h> */
            #undef _ctype
            extern unsigned char _ctype[];
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_ctype"
            #endif
        #endif

        #if defined(__polyspace_errno) && !defined(__polyspace_no_errno)

            #undef errno
            extern int errno;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "errno"
            #endif
        #endif

        #if defined(__polyspace_program_invocation_name) && !defined(__polyspace_no_program_invocation_name)

            #undef program_invocation_name
            extern char *program_invocation_name;
        #endif

        #if defined(__polyspace_program_invocation_short_name) && !defined(__polyspace_no_program_invocation_short_name)

            #undef program_invocation_short_name
            extern char *program_invocation_short_name;
        #endif

        #if defined(__polyspace_signgam) && !defined(__polyspace_no_signgam)
            /*  #include <math.h> */
            #undef signgam
            extern int signgam;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "signgam"
            #endif
        #endif

        #if defined(__polyspace__LIB_VERSION) && !defined(__polyspace_no__LIB_VERSION)
//#include <math.h>
            #undef _LIB_VERSION
            extern _LIB_VERSION_TYPE _LIB_VERSION;
        #endif

#ifndef _NSIG
#define _NSIG  65 /* Biggest signal number + 1
       (including real-time signals).  */
#endif


        #if defined(__polyspace__sys_siglist) && !defined(__polyspace_no__sys_siglist)
//#include <signal.h>
            #undef _sys_siglist
            extern __const char *__const _sys_siglist[_NSIG];
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_sys_siglist"
            #endif
        #endif

        #if defined(__polyspace_sys_siglist) && !defined(__polyspace_no_sys_siglist)
//#include <signal.h>
            #undef sys_siglist
            extern __const char *__const sys_siglist[_NSIG];
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "sys_siglist"
            #endif
        #endif

        #if defined(__polyspace_stdin) && !defined(__polyspace_no_stdin)
            #if !defined(POLYSPACE_INSTRUMENT)


                #undef stdin
                /*    extern FILE __pst__stdin; */
                /*    FILE* stdin = &__pst__stdin; */
                extern FILE* stdin;
            #else
                #pragma POLYSPACE_NO_INSTRUMENT "stdin"
            #endif
        #endif

        #if defined(__polyspace_stdout) && !defined(__polyspace_no_stdout)
            #if !defined(POLYSPACE_INSTRUMENT)


                #undef stdout
                /*      extern FILE __pst__stdout; */
                /*      FILE* stdout = &__pst__stdout; */
                extern FILE* stdout;
            #else
                #pragma POLYSPACE_NO_INSTRUMENT "stdout"
            #endif
        #endif

        #if defined(__polyspace_stderr) && !defined(__polyspace_no_stderr)
            #if !defined(POLYSPACE_INSTRUMENT)


                #undef stderr
                /*      FILE __pst__stderr; */
                /*      FILE* stderr = &__pst__stderr; */
                extern FILE* stderr;
            #else
                #pragma POLYSPACE_NO_INSTRUMENT "stderr"
            #endif
        #endif

        #if defined(__polyspace__sys_nerr) && !defined(__polyspace_no__sys_nerr)
            #undef _sys_nerr
            extern int _sys_nerr;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_sys_nerr"
            #endif
        #endif

        #if defined(__polyspace__sys_errlist) && !defined(__polyspace_no__sys_errlist)


            #undef _sys_errlist
            extern __const char *__const _sys_errlist[];
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_sys_errlist"
            #endif
        #endif

        #if defined(__polyspace_getopt) && !defined(__polyspace_no_getopt)
            #undef getopt
            extern int getopt(int, char *const *, const char *);
        #endif

        #if defined(__polyspace_optarg) && !defined(__polyspace_no_optarg)
            #undef optarg
            extern char *optarg;
        #endif

        #if defined(__polyspace_optind) && !defined(__polyspace_no_optind)
            #undef optind
            extern int optind;
        #endif

        #if defined(__polyspace_opterr) && !defined(__polyspace_no_opterr)
            #undef opterr
            extern int opterr;
        #endif

        #if defined(__polyspace_optopt) && !defined(__polyspace_no_optopt)
            #undef optopt
            extern int optopt;
        #endif

        #if defined(__polyspace___tzname) && !defined(__polyspace_no___tzname)

            #undef __tzname
            extern char *__tzname[2];
        #endif

        #if defined(__polyspace___daylight) && !defined(__polyspace_no___daylight)

            #undef __daylight
            extern int __daylight;
        #endif

        #if defined(__polyspace___timezone) && !defined(__polyspace_no___timezone)

            #undef __timezone
            extern long int __timezone;
        #endif

        #if defined(__polyspace_tzname) && !defined(__polyspace_no_tzname)

            #undef tzname
            extern char *tzname[2];
        #endif

        #if defined(__polyspace_daylight) && !defined(__polyspace_no_daylight)

            #undef daylight
            extern int daylight;
        #endif

        #if defined(__polyspace_timezone) && !defined(__polyspace_no_timezone)

            #undef timezone
            extern long int timezone;
        #endif

        /****************************************************************************
        *  STANDARD LIBRARIES - OS-TARGET VXWORKS
        ****************************************************************************/
    #elif defined(__OS_VXWORKS)


        #if defined(__polyspace___ctype) && !defined(__polyspace_no___ctype)

            #undef __ctype
            extern const unsigned char *__ctype;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "__ctype"
            #endif
        #endif

        #if defined(__polyspace_errno) && !defined(__polyspace_no_errno)
            /*  #include <errno.h> */
            #undef errno
            extern int errno;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "errno"
            #endif
        #endif


        /****************************************************************************
        *  STANDARD LIBRARIES - OS-TARGET VISUAL
        ****************************************************************************/
    #elif defined(__OS_VISUAL)

        #if defined(__polyspace__ctype) && !defined(__polyspace_no__ctype)

            #undef _ctype
            extern unsigned short _ctype[];
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_ctype"
            #endif
        #endif

        #if defined(__polyspace__pctype) && !defined(__polyspace_no__pctype)

            #undef _pctype
            extern unsigned short *_pctype;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_pctype"
            #endif
        #endif

        #if defined(__polyspace__pwctype) && !defined(__polyspace_no__pwctype)
            //#include <ctype.h>
            #undef _pwctype
            extern wctype_t *_pwctype;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_pwctype"
            #endif
        #endif

        #if defined(__polyspace___mb_cur_max) && !defined(__polyspace_no___mb_cur_max)

            #undef __mb_cur_max
            extern int __mb_cur_max;
        #endif

        #if defined(__polyspace_errno) && !defined(__polyspace_no_errno)
            /*  #include <errno.h> */
            #undef errno
            extern int errno;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "errno"
            #endif
        #endif

        #if defined(__polyspace__fpecode) && !defined(__polyspace_no__fpecode)
            /*  #include <float.h> */
            #undef _fpecode
            extern int _fpecode;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_fpecode"
            #endif
        #endif

        #if defined(__polyspace__pxcptinfoptrs) && !defined(__polyspace_no__pxcptinfoptrs)
            #undef _pxcptinfoptrs
            extern void * _pxcptinfoptrs;
        #endif

        #if defined(__polyspace__iob) && !defined(__polyspace_no__iob)


            #undef _iob
            #if defined(__polyspace__iob_array_size_d1_needed)
                extern FILE _iob[3]; /* Overwrite user tentative of definition */
            #else
                extern FILE _iob[];
            #endif
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_iob"
            #endif
        #endif

        #if defined(__polyspace__doserrno) && !defined(__polyspace_no__doserrno)
            #undef _doserrno
            extern unsigned long _doserrno;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_doserrno"
            #endif
        #endif

        #if defined(__polyspace__sys_errlist) && !defined(__polyspace_no__sys_errlist)
            #undef _sys_errlist
            extern char * _sys_errlist[];
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_sys_errlist"
            #endif
        #endif

        #if defined(__polyspace__sys_nerr) && !defined(__polyspace_no__sys_nerr)
            #undef _sys_nerr
            extern int _sys_nerr;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_sys_nerr"
            #endif
        #endif

        #if defined(__polyspace_environ) && !defined(__polyspace_no_environ)
            #undef environ
            extern char ** environ;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "environ"
            #endif
        #endif

        #if defined(__polyspace__environ) && !defined(__polyspace_no__environ)
            #undef _environ
            extern char ** _environ;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_environ"
            #endif
        #endif

        #if defined(__polyspace__wenviron) && !defined(__polyspace_no__wenviron)
            #undef _wenviron
            extern wchar_t ** _wenviron;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_wenviron"
            #endif
        #endif

        #if defined(__polyspace___argc) && !defined(__polyspace_no___argc)
            #undef __argc
            extern int __argc;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "__argc"
            #endif
        #endif

        #if defined(__polyspace___argv) && !defined(__polyspace_no___argv)
            #undef __argv
            extern char ** __argv;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "__argv"
            #endif
        #endif

        #if defined(__polyspace___wargv) && !defined(__polyspace_no___wargv)
            #undef __wargv
            extern wchar_t ** __wargv;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "__wargv"
            #endif
        #endif

        #if defined(__polyspace__pgmptr) && !defined(__polyspace_no__pgmptr)
            #undef _pgmptr
            extern char * _pgmptr;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_pgmptr"
            #endif
        #endif

        #if defined(__polyspace__wpgmptr) && !defined(__polyspace_no__wpgmptr)
            #undef _wpgmptr
            extern wchar_t * _wpgmptr;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_wpgmptr"
            #endif
        #endif

        #if defined(__polyspace__fmode) && !defined(__polyspace_no__fmode)
            /*   */
            #undef _fmode
            extern int _fmode;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_fmode"
            #endif
        #endif

        #if defined(__polyspace__fileinfo) && !defined(__polyspace_no__fileinfo)
            /*   */
            #undef _fileinfo
            extern int _fileinfo;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_fileinfo"
            #endif
        #endif

        #if defined(__polyspace__osver) && !defined(__polyspace_no__osver)
            /*   */
            #undef _osver
            extern unsigned int _osver;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_osver"
            #endif
        #endif

        #if defined(__polyspace__winver) && !defined(__polyspace_no__winver)
            /*   */
            #undef _winver
            extern unsigned int _winver;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_winver"
            #endif
        #endif

        #if defined(__polyspace__winmajor) && !defined(__polyspace_no__winmajor)
            /*   */
            #undef _winmajor
            extern unsigned int _winmajor;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_winmajor"
            #endif
        #endif

        #if defined(__polyspace__winminor) && !defined(__polyspace_no__winminor)
            /*   */
            #undef _winminor
            extern unsigned int _winminor;
            #if defined(POLYSPACE_INSTRUMENT)
                #pragma POLYSPACE_NO_INSTRUMENT "_winminor"
            #endif
        #endif

        #if defined(__polyspace__daylight) && !defined(__polyspace_no__daylight)

            #undef _daylight
            extern int _daylight;
        #endif

        #if defined(__polyspace_daylight) && !defined(__polyspace_no_daylight)

            #undef daylight
            extern int daylight;
        #endif

        #if defined(__polyspace__dstbias) && !defined(__polyspace_no__dstbias)

            #undef _dstbias
            extern long _dstbias;
        #endif

        #if defined(__polyspace__timezone) && !defined(__polyspace_no__timezone)

            #undef _timezone
            extern long _timezone;
        #endif

        #if defined(__polyspace_timezone) && !defined(__polyspace_no_timezone)

            #undef timezone
            extern long timezone;
        #endif

        #if defined(__polyspace__tzname) && !defined(__polyspace_no__tzname)

            #undef _tzname
            extern char * _tzname[2];
        #endif

        #if defined(__polyspace_tzname) && !defined(__polyspace_no_tzname)

            #undef tzname
            extern char * tzname[2];
        #endif

    #endif

    /*********************************************************************************
    *  STANDARD LIBRARIES - FOR ALL OS-TARGET with non-macro based stdin/stdout/stderr
    ***********************************************************************************/
    #if !defined(__OS_LINUX)

        #if defined(__polyspace_stdin) && !defined(__polyspace_no_stdin)
            #if !defined(POLYSPACE_INSTRUMENT)


                #undef stdin
                /*    extern FILE __pst__stdin; */
                /*    FILE* stdin = &__pst__stdin; */
                extern FILE* stdin;
            #else
                #pragma POLYSPACE_NO_INSTRUMENT "stdin"
            #endif
        #endif


        #if defined(__polyspace_stdout) && !defined(__polyspace_no_stdout)
            #if !defined(POLYSPACE_INSTRUMENT)


                #undef stdout
                /*      extern FILE __pst__stdout; */
                /*      FILE* stdout = &__pst__stdout; */
                extern FILE* stdout;
            #else
                #pragma POLYSPACE_NO_INSTRUMENT "stdout"
            #endif
        #endif


        #if defined(__polyspace_stderr) && !defined(__polyspace_no_stderr)
            #if !defined(POLYSPACE_INSTRUMENT)


                #undef stderr
                /*      FILE __pst__stderr; */
                /*      FILE* stderr = &__pst__stderr; */
                extern FILE* stderr;
            #else
                #pragma POLYSPACE_NO_INSTRUMENT "stderr"
            #endif
        #endif

    #endif

    /****************************************************************************
    *  /  STANDARD LIBRARIES VARIABLES STUBS
    ****************************************************************************/

#endif /* ifndef POLYSPACE_NO_STANDARD_STUBS */


    /* Definition of some global variables necessary for Polyspace */

    /* Absolute addresses are modelized by an access to one variable */
    /* We need it in c mode and also in cpp bf mode*/
#if !defined __cplusplus || defined PST_BUG_FINDER
    #undef char
    char * volatile __polyspace_absolute_address; /* C/7355: do not redefine this 'char' */
#endif /* __cplusplus */
    /* Warning: do not put any 'char' below */


    /* LocalWords:  iob DECL varargs KEIL IAR ctype errno informations stdarg
     * LocalWords:  stdlib va incr decls SCHAR isalnum IEC UCHAR isalpha iscntrl
     * LocalWords:  isdigit isgraph islower isblank isprint ispunct isupper isxdigit
     * LocalWords:  tolower toupper setlocale localeconv VXWORKS lconv frexp ldexp
     * LocalWords:  modf iptr ized jmp buf FUNC sysv IGN DFL func tmpnam char's
     * LocalWords:  setbuf setvbuf fflush Cie tmpfile freopen IOFBF BUFSIZ IONBF
     * LocalWords:  IOLBF vfprintf vprintf vsprintf scanf fgetc fputc fputs getchar
     * LocalWords:  filbuf putc putchar flsbuf ungetc nitems vxworks fgetpos
     * LocalWords:  fsetpos clearerr perror fileno atof atoi strtod endptr ERANGE
     * LocalWords:  strtol strtoul ULONG pst srand atexit bsearch nel compar numer
     * LocalWords:  denom ldiv lldiv mblen mbtowc wchar pwc wctomb mbstowcs pwcs wcstombs
     * LocalWords:  realloc memalign alloca valloc memmove strcpy strncpy strncat
     * LocalWords:  memcmp strcoll strxfrm memchr strchr strpbrk strrchr strstr QNx
     * LocalWords:  strcspn strspn strerror errnum difftime mktime timeptr tm
     * LocalWords:  asctime ctime localtime gmtime strftime maxsize unistd fcntl
     * LocalWords:  bzero bcopy bcmp bf
     */
