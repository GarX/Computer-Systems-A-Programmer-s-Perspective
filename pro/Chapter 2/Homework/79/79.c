#include <stdio.h>

int threefourth(int x){
    int x0 = x >> 2;
    int x1 = x - (x0 << 2);

    // revise the result when x is negative and cannot divide by four
    int mod4 = (0x00000003 & x) == 0;
    int negative = (0x80000000 & x) != 0;
    return x0 + (x0 << 1) + ((x1 + (x1 << 1)) >> 2) + negative * (!mod4);
}


int main(){
    int i;
    printf("%d %d\n",threefourth(5),(5) * 3 / 4);
    printf("%d %d\n",threefourth(-5),(-5) * 3 / 4);
}
