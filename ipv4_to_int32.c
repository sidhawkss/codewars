#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

// Function to convert IPv4 to 32 bit number
uint32_t ip_to_uint32(const char *ip){
  // Convert the input to a buf.
	char token_buf[16];
	snprintf(token_buf, sizeof(token_buf), "%s", ip);
	
  // Convert each byte of the char array to unsigned int
	char *token = strtok(token_buf, ".");
	uint32_t byte_tk = strtoul(token, NULL, 10);
	uint32_t token_bytes_str[4] = { byte_tk, 0, 0, 0 };

	token = strtok(NULL, ".");
	uint32_t byte_tk2 = strtoul(token, NULL, 10);
	token_bytes_str[1] = byte_tk2;

	token = strtok(NULL, ".");
	uint32_t byte_tk3 = strtoul(token, NULL, 10);
	token_bytes_str[2] = byte_tk3;

	token = strtok(NULL, ".");
	uint32_t byte_tk4 = strtoul(token, NULL, 10);
	token_bytes_str[3] = byte_tk4;

	uint32_t result = ((token_bytes_str[0] << 24) | (token_bytes_str[1] << 16) | (token_bytes_str[2] << 8) | (token_bytes_str[3]));
	
	printf("%u\n", result);
	return result;
}

