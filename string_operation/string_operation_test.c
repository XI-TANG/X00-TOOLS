 /**/
#include <stdio.h>
#include "string_operation.h"
int main()
{
	uint8_t hex[3] = { 0x30, 0x31, 0x35 };
	char *str = "XXXXXXXXXX";
	str = hex_to_str_ascii(hex);
	printf("%s\n", str);
	hex_to_str_hex(str,hex);
	printf("%s\n", str);
	return 0;
}

/*
#include <stdio.h>
#include <stdint.h>
#include <string.h>
int main()
{
	uint8_t datarcv[64] = { 0 };
	datarcv[1] = 0x2;
	uint8_t *datarcv2;
	datarcv2 = datarcv;
	uint8_t data[2] = { 0x02, 0x08 };
	int i;
	char infoDID[64] = "ENTER to get info";
	//puts((char *)data);
	//strcpy(infoDID,(char *)(data));
	//sprintf(infoDID,"%02X %02X",data[0],data[1]);
	for (i = 0; i < sizeof(data); i++) {
		sprintf(infoDID + 3 * i, "%02X ", data[i]);	//for "%02X ", length = 3
	}
	puts(infoDID);
	printf("%ld\n", sizeof(datarcv2));
	printf("%ld\n", sizeof(datarcv));

	return (0);
}*/
