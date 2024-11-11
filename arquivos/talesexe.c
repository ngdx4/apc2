#include<stdio.h>

char buffer[100] = {'5','0','\0'};

void sla(){
    int n;
    //leitura do buffer
    sscanf(buffer,"%d",&n);
    //escrita para buffer
    sprintf(buffer,"o numero lido foi: %d\n",n);
    printf("%s",buffer);
}
int main(){
    sla();
    return 0;
}