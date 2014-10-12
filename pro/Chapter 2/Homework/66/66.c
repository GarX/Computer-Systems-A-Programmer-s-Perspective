#include <stdio.h>

int leftmost_one(unsigned x){
	unsigned p2 = x | (x >> 1);
	unsigned p4 = p2 | (p2 >> 2);
	unsigned p8 = p4 | (p4 >> 4);
	unsigned p16 = p8 | (p8 >> 8);
	unsigned p32 = p16 | (p16 >> 16);
	return (p32 >> 1) + 0x1u;
}

int main(){
	printf("%x\n",leftmost_one(0xFF00u));
}
