#include <stdio.h>

unsigned srl(unsigned x,int k){
	unsigned xsra = (int)x >> k;
	int w = sizeof(int) << 3;
    unsigned all_one = -1;
	unsigned mask = ~(all_one << (w - k));
	return xsra & mask;
}

int sra(int x,int k){
	int xsrl = (unsigned)x >> k;
	int w = sizeof(int) << 3;
	int sign_mask = 1 << (w - 1);
	int sign = (x & sign_mask) || 0x0;
	int mask = ((-sign) << (w - k)) | (~(-1 << (w - k)));
	return (xsrl | (-1 << (w - k))) & mask;
}

int main(){
	printf("%d\n",srl(-1,1));
	printf("%d\n",sra(-1,5));
}
