#include <stdio.h>
#include "float.h"

int float_f2i(float_bits f){
  unsigned exp = f & 0x7F800000;
  unsigned frac = f & 0x007FFFFF;

  int e = (exp == 0) + exp - 127;
}


int main() {

}
