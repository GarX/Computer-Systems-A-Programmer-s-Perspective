#include <stdio.h>

int K17(int x){
	return (x << 4) + x;
}

int K_7(int x){
	return - (x << 3) + x;
}

int K60(int x){
	return (x << 6) - (x << 2);
}

int K_112(int x){
	return -(x << 7) + (x << 4);
}

int main(){
	printf("%d %d %d %d\n",K17(5),K_7(5),K60(5),K_112(5));
}
