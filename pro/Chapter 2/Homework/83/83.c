#include <stdio.h>

unsigned f2u(float x){
    return *((unsigned*)(&x));
}

int float_le(float x,float y){
    unsigned ux = f2u(x);
    unsigned uy = f2u(y);

    unsigned sx = ux >> 31;
    unsigned sy = uy >> 31;

    return (sy + 1 == sx) // y is positive and x is negative and return 1
      + (sy == 1 && sx == 1 && ux >= uy) // x,y is both negative
      + (sy == 0 && sx == 0 && uy >= ux); // x,y is both positive
}

int main(){
  printf("%d\n",float_le(5.3,6.7));
  printf("%d\n",float_le(-5.3,-6.7));
  printf("%d\n",float_le(5.3,-6.7));
  printf("%d\n",float_le(-5.3,6.7));
}
