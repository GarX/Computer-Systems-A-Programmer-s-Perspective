#include <stdio.h>

int main(){
	long x = 0x89ABCDEF;
	long y = 0x76543210;
	printf("%lx\n",(y & (-256L)) | (x & 0xFF));
}
