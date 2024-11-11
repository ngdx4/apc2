#include <stdio.h>

void imprimir(FILE* arq){
    FILE* tmp = stdout;
    stdout = arq;



    stdout = tmp;
}

void leitura(char arq[]){
    FILE* in = fopen(arq,"r|w");
    if(in == NULL){
        printf("erro ao abrir o arquivo");
        return;
    }
    int n;
    //ler dado do arquivo e exibir no console
    int i = 1;
    while(feof(in) != EOF){
        fscanf("%d\n",&n);
        printf("linha:%d| %d\n");
        i++;
    }
}

int main(int argc, char* argv[]){
    leitura(argv[1]);
    return 0;
}