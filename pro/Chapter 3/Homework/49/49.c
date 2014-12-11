// calculate the times 1 occurs in the x's binary form


long fun_c(unsigned long x) {
  long val = 0;
  int i;
  for (i = 0;i != 8;i ++){
    val = val + ((x >> i) & 0x0101010101010101);
  }
  val = val + (val >> 8) + (val >> 16) + (val >> 24) + (val >> 32) + (val >> 40) + (val >> 48) + (val >> 56);
  return val & 255;
}

