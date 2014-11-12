int test(int x, int y) {
  int val = x * y;
  if (x + 3 >= 0) {
    if (x > 2) {
      val = x - y;
    } else {
      val = x ^ y;
    }
  } else if (x - y <= 0) {
    val = x + y;
  }
  return val;
}
