#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int main(){

    int vetorDeInt[] = {1,2,3,4};
    float vetorDeFloat[3] = {1.5,2.2,3.0};
    char vetorDeChar[TAM] = {'a','b'};

    vetorDeInt[0] = 9;

    float novoValor = 5.0;
    vetorDeFloat[2] = novoValor;

    printf("Digite uma letra nova:");
    fflush(stdin);
    scanf("%c", &vetorDeChar[0]);

    int i = 0;
    printf("\nVetor 1: \n");
    for(i=0; i<4; i++){
        printf("%d \n", vetorDeInt[i]);
    }

    printf("\nVetor 2: \n");
    for(i=0; i<3; i++){
        printf("%f \n", vetorDeFloat[i]);
    }

    printf("\nVetor 3: \n");
    for(i=0; i<TAM; i++){
        printf("%c \n", vetorDeChar[i]);
    }

    printf("\n Digite inteiros \n");
    for(i=0; i<4; i++){
        printf("Lendo em vetor[%d]:", i);
        scanf("%d", &vetorDeInt[i]);
    }

    for(i=0; i<4; i++){
        printf("%d \n", vetorDeInt[i]);
    }
    return 0;

}
