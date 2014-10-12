#include <stdio.h>

int odd_ones(unsigned x){
	unsigned p16 = x ^ (x >> 16);
	unsigned p8 = p16 ^ (p16 >> 8);
	unsigned p4 = p8 ^ (p8 >> 4);
	unsigned p2 = p4 ^ (p4 >> 2);
	unsigned p1 = p2 ^ (p2 >> 1);
	return p1 & 1;
}

int main(){
	unsigned i;
	for(i = 0;i < 16;i ++)
		printf("%d\n",odd_ones(i));
} 
