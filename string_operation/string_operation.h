#include <stdint.h>
#include <string.h>

typedef enum{
	IF_OK,
	IF_NG,
}IF_RESULT;
  
typedef unsigned char           uint8_t;  
typedef unsigned short int      uint16_t;  
typedef unsigned int            uint32_t;  
typedef unsigned long int       uint64_t;  

extern char *hex_to_str_ascii(const uint8_t *hex);
extern void hex_to_str_hex(char *str_hex,const uint8_t *hex);
