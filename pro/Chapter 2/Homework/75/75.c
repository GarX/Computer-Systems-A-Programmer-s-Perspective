#include <stdio.h>

unsigned int unsigned_high_prod(unsigned x,unsigned y){
	unsigned w = sizeof(int) << 3;
	unsigned wd2 = w >> 1;
	unsigned minus1 = -1;
	unsigned mask0 = minus1 >> wd2;
	unsigned mask1 = ~(mask0);

	unsigned x0 = mask0 & x;
	unsigned x1 = mask1 & x;
	unsigned y0 = mask0 & y;
	unsigned y1 = mask1 & y;

	unsigned result = ((x0 * (y1 >> wd2)) >> wd2) + ((y0 * (x1 >> wd2)) >> wd2) + ((x1 >> wd2) * (y1 >> wd2));

	unsigned l0 = ((x & mask0) * (y & mask0));
	unsigned l1 = ((x & mask0) * (y & mask1));
	unsigned l2 = ((x & mask1) * (y & mask0));
	printf("%x %x %x\n",l0,l1,l2);
	
	unsigned p = ((((l0 & mask0) + (l1 & mask0) + (l2 & mask0)) >> wd2) + (l0 >> wd2) + (l1 >> wd2) + (l2 >> wd2)) >> wd2;
	
	return result + p;
}

int signed_high_prod(int x,int y){

}

int main(){
	printf("%x\n",unsigned_high_prod(0xFFFFFFFFu,0xFFFFFFFFu));
}
