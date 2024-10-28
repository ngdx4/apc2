#include<stdio.h>

int modulo(int n){
    n << 1;
    n >> 1;
    return n;
}

int main(){
    int a = -6;
    printf("%d\n", modulo(a));
    return 0;
}