#include <stdio.h>

int fits_bits(int x,int n){
	int sign = x >> ((sizeof(int) << 3) - 1);
	int mask = (sign >> (n - 1)) << (n - 1);
	int maskNum = ~(-1 << (n - 1));
	int newNum = mask + (x & maskNum);
	return newNum == x;
}

int main(){
	printf("%d\n",fits_bits(0x000000FF,9));
	printf("%d\n",fits_bits(0x000000FF,8));
	printf("%d\n",fits_bits(0xFFFFFF00,9));
	printf("%d\n",fits_bits(0xFFFFFF00,8));
	printf("%d\n",fits_bits(0x80000000,64));
	printf("%d\n",fits_bits(0x80000000,63));
	printf("%d\n",fits_bits(0x7FFFFFFF,64));
	printf("%d\n",fits_bits(0x7FFFFFFF,63));
}
