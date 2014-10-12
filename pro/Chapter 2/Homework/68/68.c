#include <stdio.h>

int lower_one_mask(int n){
	int n0 = n - 1;
	return ((~(-1 << n0)) << 1) + 0x1;
}

int main(){
	int i;
	for(i = 1;i <= 32;i ++){
		printf("%x\n",lower_one_mask(i));
	}
}
