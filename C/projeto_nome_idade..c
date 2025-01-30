#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;

    printf("Ola! Qual seu nome?\n");
    scanf("%s",&nome);

    printf("\nQual sua idade?\n");
    scanf("%d",&idade);

    printf("\nNome: %s\nIdade: %d\n",nome,idade);

    printf("\nAguarde enquanto lemos seus dados...");

    printf("\nA primeira letra do seu nome e: %c",nome[0]);

    //fazer simulação usando os anos ex-tem mais de 30 anos nasceu na decada de x
    if (idade >= 18){
        printf("\nVoce e adulto!");
    } else if(idade >= 12){
        printf("\nVoce e Adolescente!");
    }else{
        printf("\nVoce e crianca!");
    }
    return 0;
}
