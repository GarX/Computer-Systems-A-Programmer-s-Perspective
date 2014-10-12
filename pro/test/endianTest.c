#include "endian.h"
#include <string.h>
void test_show_bytes(int val){
	int ival = val;
	float fval = (float)ival;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int main(){
	const char *s = "abcdef";
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer)&val;

	show_bytes(valp,1);
	show_bytes(valp,2);
	show_bytes(valp,3);

	test_show_bytes(3510593);
	
	show_bytes((byte_pointer)s,strlen(s));
	
	show_float(23.0);
}
