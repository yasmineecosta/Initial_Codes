#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;//Define valor a
    int b;//Define valor b
    int c;//Define valor c
    
    scanf("%d", &a); //L� valor a
    scanf("%d", &b); //L� valor b
    scanf("%d", &c); //L� valor c
    
    //Resultado da soma
    int resultado = a + b + c; 
    
    //Exibe o resultado na tela
    printf("Resultado: %d", resultado); 
    return 0;
}

