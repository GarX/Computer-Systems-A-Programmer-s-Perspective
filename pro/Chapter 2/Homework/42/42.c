#include <stdio.h>
#include <stdlib.h>
int div16(int x){
	return x >> 4;
}

int main(int argc,char* argv[]){
	int x = atoi(argv[1]);
	printf("%d\n",div16(x));
}
