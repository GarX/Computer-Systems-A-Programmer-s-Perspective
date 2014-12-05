// A.       p   : 0
//          s.x : 4
//          s.y : 8
//          next: 12
//
// B. 16 bytes
//
// C.


struct prob {
  int *p;
  struct {
    int x;
    int y;
  } s;
  struct prob *next;
}

void sp_init(struct prob *ap) {
  sp -> s.x = sp -> s.y;
  sp -> p = &(sp -> s.x);
  sp -> next = sp;
}
