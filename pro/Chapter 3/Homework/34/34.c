// A. rfun saved x in %ebx

// B.
int rfun(unsigned x) {
  if (x == 0)
    return 0;
  unsigned nx = x >> 1;
  int rv = rfun(nx);
  return rv + x % 2;
}

// C. the function computes the times of 1 shows in the variable x's binary form
