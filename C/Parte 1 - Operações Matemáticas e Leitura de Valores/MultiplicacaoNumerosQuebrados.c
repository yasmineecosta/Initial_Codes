#include <stdio.h>
#include <stdlib.h>

int main(){
    float a; //Define valor a
    float b; //Define valor b
    
    scanf("%f", &a); //L� valor a
    scanf("%f", &b); //L� valor b
    
    //Resultado da multiplica��o
    float resultado = a * b; 
    
    //Exibe o resultado na tela
    printf("Resultado: %f", resultado); 
    return 0;
}

