#include <stdio.h>
#include "libc.h"
typedef union {
	unsigned short value;
	unsigned char mang[2];
} union_t;

void function(unsigned short val) {
	unsigned char low;
	unsigned char high;
	union_t num;
	num.value = val;
	low = num.mang[0];
	high = num.mang[1];
	printf("%d (0x%02x)\n", low, low); 
	printf("%d (0x%02x)", high, high);   
}
void ques3() {
	function(0x04D2);
}
