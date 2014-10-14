#include <stdio.h>

int is_little_endian(){
	int n = 1;
	char* p = (char*)(&n);

	if(p[0] == 0)
		return 0;
	if(p[0] == 1)
		return 1;
	return -1;
}

int main(){
	printf("%d\n",is_little_endian());
}
