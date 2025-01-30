#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;

    printf("Qual seu nome e sobrenome?\n");
    scanf("%s",nome);
    scanf("%s",sobrenome);

    printf("\nShow de bola, %s %s... Qual sua idade?\n",nome);
    scanf("%d",&idade);

    printf("\nMuito bom! A %s tem %d anos",nome,idade);

    return 0;
}
