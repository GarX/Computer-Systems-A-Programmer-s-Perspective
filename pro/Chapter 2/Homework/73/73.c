#include <stdio.h>
int saturating_add(int x,int y){
	int w = sizeof(int) << 3;
	int l_mask = 0x0000FFFF;
	int m_mask = ~(l_mask << (w - 16));

	int lx = l_mask & x;
	int ly = l_mask & y;
	int lz = (lx + ly) >> 16;

    int sign_equal = ((x >> (w - 1)) == (y >> (w - 1))) << (w - 1) >> (w - 1);

	int mx = (x >> 16) & m_mask;
	int my = (y >> 16) & m_mask;
	int mz = mx + my + lz;
	int two_sign = mz >> (w - 16 - 1);
	int first_sign = two_sign & 0x1;
	int second_sign = two_sign >> 1;
	int overflow = ~((first_sign ^ second_sign) - 1);
	int min = 0x1 << (w - 1);
	int max = ~min;

	return (sign_equal & overflow & (-first_sign) & max) + (sign_equal & overflow & (~(-first_sign)) & min) + (sign_equal & (~overflow) & (x + y)) + (~sign_equal & (x + y));
}

int main(){
	printf("%d\n",saturating_add(0x7FFFFFF0,0x000000FF));
	printf("%d\n",saturating_add(0x80000000,0xFFFFFFF0));
	printf("%d\n",saturating_add(20000000,1));
    printf("%d\n",saturating_add(-1,1));
    printf("%d\n",saturating_add(-5,1));
    printf("%d\n",saturating_add(-1,5));
    printf("%d\n",saturating_add(-1,100000));
}
