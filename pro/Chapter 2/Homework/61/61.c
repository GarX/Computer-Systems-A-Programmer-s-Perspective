#include <stdio.h>

int main(){
	int x = -1;
	printf("%d\n", x || 0x0);
	printf("%d\n", (~x) || 0x0);
	printf("%d\n", (x & 0xFF) || 0x0);
	printf("%d\n", ~((x >> ((sizeof(int) - 1) << 3)) | (~255)) || 0x0);
}
