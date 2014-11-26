int test(int x,int y) {
  int val = x ^ y;
  if (y <= 0){
    if (y >= -2){
      val = 4 * x;
    } else {
      val = x + y;
    }
  } else if(x < y){
    val = x - y;
  }
  return val;
}
