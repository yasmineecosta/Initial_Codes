#include <stdio.h>
#include <stdlib.h>

int main(){
    char a;//Define valor a
    char b;//Define valor b
    
    scanf("%c", &a); //L� valor a
    fflush(stdin);   //limpa o buffer
    scanf("%c", &b); //L� valor b
    fflush(stdin);   //limpa o buffer
    
    //Exibe o resultado na tela
    printf("Resultado: %c %c", a,b); 
    return 0;
}

