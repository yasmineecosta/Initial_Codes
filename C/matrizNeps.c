#include <stdio.h>

int main(){
    int m[5][5];

    printf("Tamanho em bytes de um inteiro -> %d\n", sizeof(int));
    printf("Tamanho em bytes do vetor m[0] -> %d\n", sizeof(m[0]));
    printf("Tamanho em bytes da matriz m -> %d\n", sizeof(m));
    printf("Quantidade de vetores da matriz m -> %d\n", sizeof(m)/sizeof(m[0]));
    printf("Quantidade de elementos da matriz m -> %d\n", sizeof(m)/sizeof(int));
}

/*
    Tamanho em bytes de um inteiro -> 4
    Tamanho em bytes do vetor m[0] -> 20
    Tamanho em bytes da matriz m -> 100
    Quantidade de vetores da matriz m -> 5
    Quantidade de elementos da matriz m -> 25
*/
