#include<stdio.h>
#include<stdlib.h>

int *build_int_array(unsigned int size){
int *array = (int*)malloc(size* sizeof(int));
if(array == NULL) printf("ERRO NA ALOCAÇÃO DE MEMORIA\n");
return array;
}
//b:
float *medias_das_notas(int m, int n, float matriz[m][n]){

float *vet_media = (float*)malloc(sizeof(float) * m);
if(vet_media == NULL) printf("ERRO NA ALOCAÇÃO DE MEMORIA\n");
float media = 0;
for(int i=0;i<m;i++){

for(int j=0;j<n;j++){
media = media + matriz[i][j];
}
vet_media[i] = media/n;
media = 0;
}
return vet_media;
}
//c:
char *repete_string(char str[], int n){
int t = 0;
while(str[t]) t++;
char *repetir = (char*)malloc(sizeof(char)*t*n + 1);
if(repetir == NULL) printf("ERRO NA ALOCAÇÃO DE MEMORIA\n");
int i = 0;
while(i < t*n){
repetir[i] = str[i%t];
i++;
}
repetir[i] = '\0';
return repetir;
}

int main(int argc, char *argv[]){
    int *ptr = build_int_array(10);
    for(int i = 0; i<10; i++){
        ptr[i] = 10+2*i;
        printf("&ptr[%d]: %p | ptr[i] = %d\n",i, &ptr[i], ptr[i]);
    }

    float matriz[3][3] = {{6,8,4},{9,8,9},{3,9,7}};
    float *media = medias_das_notas(3,3,matriz);
    for(int i = 0; i<3;i++){
        printf("media[%d]: %.2f\n", i, media[i]);
    }

    char str[] = "qualquer coisa ";
    char *rap = repete_string(str, 5);
    printf("%s\n", rap);


    return 0;
}