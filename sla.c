#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int *ptr1 = (int*)malloc(20*sizeof(int));
    for(int i; i<20;i++){
        ptr1[i] = 10;
    }
    printf("%ld\n",sizeof(*ptr1));
    int *ptr2 = (int*)realloc(ptr1, 40*(sizeof(int)));
    for(int i; i<20;i++){
        ptr2[i] = 10;
    }
    printf("%ld\n",sizeof(*ptr2));
    ptr1 = ptr2;
    free(ptr2);
    printf("%ld\n",sizeof(*ptr1));

    return 0;
}