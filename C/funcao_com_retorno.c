#include <stdio.h>
#include <stdlib.h>

int retorna10(){
    int a = 10;
    return a;
}

float retornaQuebrado(){
    float a = 5.5;
    return a;
}

char retornaLetra(){
    return 'a';
}

int main(){
        //fun��o direto no printf
    printf("Retorna 10 da funcao: %d \n", retorna10());
        //fun��o retornando valor para uma vari�vel
    float numeroQuebrado = retornaQuebrado();
    printf("Numero quebrado: %.2f\n", numeroQuebrado);
        //retornando direto no printf
    printf("Retorna Letra: %c\n", retornaLetra());

    return 0;
}
