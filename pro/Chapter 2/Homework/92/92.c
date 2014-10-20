#include <stdio.h>
#include "float.h"

float_bits float_absval(float_bits f){
  unsigned exp = f & 0x7F800000;
  unsigned frac = f & 0x007FFFFF;

  unsigned isNaN = (exp == 0x7F800000 && frac != 0);
  return f & ~((!isNaN) << 31);
}

int main(){
  printf("%f\n",fb2f(float_absval(f2fb(-5.3))));
  printf("%f\n",fb2f(float_absval(f2fb(5.3))));
}
