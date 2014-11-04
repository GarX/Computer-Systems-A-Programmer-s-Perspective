void decode1(int *xp,int *yp,int *zp) {
  int tmp = *xp;
  *xp = *zp;
  *zp = *yp;
  *yp = tmp;
}
