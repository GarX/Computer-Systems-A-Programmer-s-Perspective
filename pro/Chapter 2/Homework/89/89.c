#include <stdio.h>


float u2f(unsigned x){
  return *((float*)&x);
}

float fpwr2(int x) {
  unsigned exp,frac;
  unsigned u;

  if (x < -149){
    exp = 0;
    frac = 0;
  } else if (x < -126){
    exp = 0;
    frac = x + 149;
  } else if (x < 150){
    exp = x + 127;
    frac = 0;
  } else {
    exp = 0xFF;
    frac = 0;
  }

  u = exp << 23 | frac;

  return u2f(u);
}

int main() {
  printf("%f\n",fpwr2(2));
  printf("%f\n",fpwr2(-2));
  printf("%f\n",fpwr2(0));
}
