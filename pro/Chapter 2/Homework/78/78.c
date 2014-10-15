#include <stdio.h>

int mul3div4(int x){
    int x0 = x >> 2;
    int x1 = x - (x0 << 2);
    return x0 + (x0 << 1) + ((x1 + (x1 << 1)) >> 2);
}




int main(){
    int i;
    for(i = -10;i <= 10;i ++){
      printf("%d\n",mul3div4(i));
    }
}
