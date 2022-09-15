#include "string_operation.h"

/*
input:hex
output:string(ascii)
*/
char *hex_to_str_ascii(const uint8_t *hex){
	return (char *)hex;
}

/*
input:hex
output:string(hex)（未完成）
*/
void hex_to_str_hex(char *str_hex,const uint8_t *hex){
	int len = strlen(hex);
	printf("%d",len);
	int i =0;
	for(i =0;i<len;i++){
		//sprintf(str_hex+i,"%X",*(hex));	
	}
}
