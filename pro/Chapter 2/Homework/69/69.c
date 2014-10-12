#include <stdio.h>

unsigned rotate_left(unsigned x,int n){
	int w = sizeof(int) << 3;
	return (x >> (w - n - 1) >> 1) + (x << n);
}

int main(){
	printf("%x\n",rotate_left(0x12345678,4));
	printf("%x\n",rotate_left(0x12345678,20));
	printf("%x\n",rotate_left(0x12345678,0));
}
