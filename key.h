#ifndef __CRYPT4GH_KEYS_H_INCLUDED__
#define __CRYPT4GH_KEYS_H_INCLUDED__

#include "includes.h"

int crypt4gh_private_key_from_file(const char* filename, char* passphrase,
				   uint8_t seckey[crypto_kx_SECRETKEYBYTES],
				   uint8_t pubkey[crypto_kx_PUBLICKEYBYTES]);

int crypt4gh_public_key_from_blob(const char* line,
				  size_t len,
				  uint8_t pk[crypto_kx_PUBLICKEYBYTES]);


#endif /* !__CRYPT4GH_KEYS_H_INCLUDED__ */
