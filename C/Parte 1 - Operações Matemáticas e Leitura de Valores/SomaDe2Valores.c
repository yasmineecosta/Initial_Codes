#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;//Define valor a
    int b;//Define valor b
    
    printf("Digite o valor de a:");
    scanf("%d", &a); //L� valor a
    printf("Digite o valor de b:");
    scanf("%d", &b); //L� valor b
    
    //Resultado da soma
    int resultado = a + b; 
    
    //Exibe o resultado na tela
    printf("Resultado: %d", resultado); 
    return 0;
}

