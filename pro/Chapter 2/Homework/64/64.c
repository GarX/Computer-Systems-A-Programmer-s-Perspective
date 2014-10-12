#include <stdio.h>

int any_odd_one(unsigned x){
	return (x & 0x55555555) || 0x0;
}

int main(){
	printf("%d\n",any_odd_one(0xAAAAAAAA));
	printf("%d\n",any_odd_one(0xAAAAAAAB));
}
