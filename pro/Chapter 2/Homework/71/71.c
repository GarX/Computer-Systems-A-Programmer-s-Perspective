#include <stdio.h>

typedef unsigned packed_t;

int xbyte(packed_t word,int bytenum){
	return (word >> (bytenum << 3)) & 0xFF; // A.Failed when the byte refers to a minus number
}

int xbyte_new(packed_t word,int bytenum){
	return xbyte(word,bytenum) << 24 >> 24;
}

int main(){
	printf("%x\n",xbyte_new(0x12345678u,2));
	printf("%x\n",xbyte_new(0x89ABCDEFu,2));
}
