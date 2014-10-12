#include "show-bytes.h"

int main(){
	short s = 12345;
	long l = 12345L;
	double d = 12345.0;
	
	show_short(s);
	show_long(l);
	show_double(d);
}
