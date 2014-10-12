#include <stdio.h>

int tsub_ok(int x,int y){
	int w = sizeof(int) << 3;
	
	int l_mask = 0x0000FFFF;
	int m_mask = ~(l_mask << (w - 16));
	
	y = -y;
	int lx = l_mask & x;
	int ly = l_mask & y;
	int lz = (lx + ly) >> 16;

	int mx = (x >> 16) & m_mask;
	int my = (y >> 16) & m_mask;
	int mz = mx + my + lz;
	int two_sign = mz >> (w - 16 -1);
	int first_sign = two_sign & 0x1;
	int second_sign = two_sign >> 1;
	return (first_sign ^ second_sign);
}

int main(){
	printf("%d\n",tsub_ok(0x7FFFFFFF,-1));
}
