#include "show-bytes.h"

int main(){
	int i = 123456;
	float f = 123456.0;
	show_bytes(&i,4);
	show_bytes(&f,4);
}
