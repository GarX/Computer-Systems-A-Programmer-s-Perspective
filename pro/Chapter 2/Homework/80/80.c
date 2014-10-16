#include <stdio.h>

int gen_a(int k){
  return -1 << k;
}

int gen_b(int j,int k){
  return 0x7FFFFFFF >> ((sizeof(int) << 3)- 1 - k) << j;
}

int main(){
    printf("%d\n",gen_a(1));
    printf("%d\n",gen_a(2));
    printf("%d\n",gen_a(3));
    printf("%d\n",gen_a(4));
    printf("%d\n",gen_a(31));

    printf("%d\n",gen_b(1,1));
    printf("%d\n",gen_b(2,2));
    printf("%d\n",gen_b(1,2));
    printf("%d\n",gen_b(5,3));
}
