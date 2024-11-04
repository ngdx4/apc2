#include<stdio.h>

long int produtorio(long int n){
    if(n == 1) return n;
    return n * produtorio(n-1);
}

int somatorio(int n){
    if(n < 0)return n;
    return n + somatorio(n-1);
}
int s3(int n){
    printf("%d\n", n);
    if(n>2)return s3(n-3);
    if(n == 2) return 2;
    return 0;
}
void som3(int n){
    if(n<100)printf("%d,",n);
    else printf("%d\n",n);
    if(n>100) return;
    som3(n+3);
}
int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
/*    printf("produtorio: %ld\n", produtorio(9999));
//    printf("somatorio: %d\n", somatorio(10));
    int a;
    a = s3(65);
    printf("%d\n", a);
    printf("\n");*/
    
    printf("%d\n",fibonacci(9999));
    
    return 0;
}