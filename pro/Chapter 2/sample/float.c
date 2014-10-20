#include "float.h"

float_bits float_denorm_zero(float_bits f) {
  unsigned sign = f >> 31;
  unsigned exp = f >> 23 & 0xFF;
  unsigned frac = f & 0x7FFFF;
  if (exp == 0){
    frac = 0;
  }
  return (sign << 31) | (exp << 23) | frac;
}

float fb2f(float_bits f) {
  return *(float*)&f;
}

float_bits f2fb(float f) {
  return *(float_bits*)&f;
}
