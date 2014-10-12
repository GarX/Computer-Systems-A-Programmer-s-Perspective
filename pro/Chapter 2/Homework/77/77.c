#include <stdio.h>
int divide_power2(int x,int k){
	return x >> k;
}

int main(){
	printf("%d\n",divide_power2(-31,4));
}
