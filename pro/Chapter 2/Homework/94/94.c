#include <stdio.h>
#include "float.h"


float_bits float_half(float_bits f){
  unsigned exp = f & 0x7F800000;
  unsigned frac = f & 0x007FFFFF;
  unsigned sign = f & 0x80000000;
  unsigned carry = (exp == (1 << 23));

  unsigned isNaN = (exp == 0x7F800000 && frac != 0);
  exp = exp - ((exp != 0) << 23);

  frac = (frac >> (exp == 0)) + (carry & (-(exp == 0)));
  return ((-(!isNaN)) & (exp + frac + sign)) + ((-isNaN) & f);
}

int main() {
  printf("%f\n",fb2f(float_half(f2fb(5.3))));
  printf("%f\n",fb2f(float_half(f2fb(-5.3))));
}
