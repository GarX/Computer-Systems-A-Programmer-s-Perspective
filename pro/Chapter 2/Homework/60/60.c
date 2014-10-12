#include <stdio.h>

unsigned replace_byte(unsigned x,int i,unsigned char b){
	char* p = &x;
	p[i] = b;
	return x;
}

int main(){
	unsigned n = 0x12345678;
	unsigned r1,r2;
	printf("%x\n%x\n",replace_byte(n,2,0xAB),replace_byte(n,0,0xAB));
}
