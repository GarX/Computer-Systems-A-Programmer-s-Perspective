#include <stdio.h>

int bad_int_size_is_32(){
	int set_msb = 1 << 31;
	// A. left shift 32 >= 32 cause the problem.
	int beyond_msb = 1 << 32;
	return set_msb && ! beyond_msb;
}

int least_32_int_size_is_32(){
	int set_msb = 1 << 31;
	int beyond_msb = set_msb << 1;
	return set_msb &&  ! beyond_msb;
}

int least_16_int_size_is_32(){
	int set_msb = 1 << 15;
	int beyond_msb0 = set_msb << 15;
	int beyond_msb1 = beyond_msb0 << 1;
	int beyond_msb2 = beyond_msb1 << 1;
	return beyond_msb1 && ! beyond_msb2;
}
int main(){
	printf("%d\n",bad_int_size_is_32());
	printf("%d\n",least_32_int_size_is_32());
	printf("%d\n",least_16_int_size_is_32());
}
