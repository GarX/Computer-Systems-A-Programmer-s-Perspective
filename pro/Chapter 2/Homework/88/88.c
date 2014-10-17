#include <stdio.h>
#include "show-bytes.h"

void func(int x,int y,int z){
    double dx = (double)x;
    double dy = (double)y;
    double dz = (double)z;

    printf("%d",(float)x == (float)dx);
    printf("%d",dx - dy == (double)(x - y));
    printf("%d",(dx + dy) + dz == dx + (dy + dz));
    printf("%d",(dx * dy) * dz == dx * (dy * dz));
    printf("%d",dx / dx == dz / dz);
}

double u2d(unsigned u) {
    int k;
    char d[8];
    double ret;
    unsigned EE = 0x80000000, E,e,f;
    for (k = 0;k < 8;k ++){
        d[k] = 0;
    }
    for(k = 0;;k ++){
        if(u < EE){
            EE = EE >> 1;
        } else {
            break;
        }
    }
    f = ((u << k) - 0x80000000);
    E = 31 - k;
    e = E + 1023;
    f = f << 1;
    d[7] += (e >> 4);
    d[6] += ((e & 0x0000000F) << 4);
    d[6] += ((f & 0xF0000000) >> 28);
    d[5] += ((f & 0x0FF00000) >> 20);
    d[4] += ((f & 0x000FF000) >> 12);
    d[3] += ((f & 0x00000FF0) >> 4);
    d[2] += (f & 0x0000000F);

    ret = *((double*)d);
    return ret;
}

int main() {
    unsigned i;
    for(i = 0;i <= 10000;i ++){
        printf("%f\n",u2d(i));
    }
    return 0;
}
