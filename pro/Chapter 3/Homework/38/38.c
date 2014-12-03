#define N 16

#include <stdio.h>

typedef int fix_matrix[16][16];

void fix_set_diag(fix_matrix A, int val) {
  int i;
  for(i = 0;i < N;i ++){
    A[i][i] = val;
  }
}

void fix_set_diag_opt(fix_matrix A, int val) {
  int i;
  int* p = &A[0][0];
  for (i = 0;i < N;i ++){
    *p = val;
    p = p + N + 1;
  }
}

void print_fix_matrix(fix_matrix A) {
  int i,j;

  for (i = 0;i < N;i ++){
    for (j = 0;j < N;j ++){
      printf("%16d",A[i][j]);
    }
    printf("\n");
  }
}

int main(){
  fix_matrix a;
  fix_set_diag_opt(a,10);
  print_fix_matrix(a);
  fix_set_diag(a,5);
  print_fix_matrix(a);
}
