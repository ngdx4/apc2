#include <stdio.h>

// leitura
void exemplo1() {
    FILE *input;
    // abertura do arquivo
    input = fopen("./data/notas.txt", "r");
    // if(input == NULL) {
    if(!input) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // leitura
    float media[4];
    float notas[8];
    // extraia do arquivo as notas separadas por tabulação,
    // para cada linha. Após, a extração exiba a média das notas
    // de cada aluno.
    // feof()
    // fscanf
    while(!feof(input)){
        for(int i=0;i<8;i+=2){
            fscanf(input,"%f\t%f", &notas[i], &notas[i+1]);
            media[(i/2)] = (notas[i] + notas[i+1])/2;
        }
    }
    for(int i =0; i<4;i++){
        printf("media do aluno %d: %.2f\n",i, media[i]);
    }
    fclose(input);
}

// escrita
void exemplo2(int m, int n,float notas[m][n]) {
    FILE *out;
    out = fopen("./data/notas.txt", "w");
    // if(out == NULL)
    if(!out) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // escrita
    // Salvar um vetor de notas no arquivo
    // Para cada linha, salvar as duas notas
    // separadas por tabulação ('\t')
    for(int i =0; i<m;i++){
        for(int j = 0; j<n;j++){
            if(j%2 == 1) fprintf(out,"\t");
            fprintf(out, "%.2f", notas[i][j]);
        }
        fprintf(out,"\n");
    }
    fclose(out);
}

int main() {
    // exemplo1();
    float notas[4][2] = {
        {7,   8},
        {4,   3},
        {9, 9.5},
        {3,   7}
    };
    exemplo2(4,2,notas);
    exemplo1();
    return 0;
}