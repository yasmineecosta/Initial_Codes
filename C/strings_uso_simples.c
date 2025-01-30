#include <stdio.h>
#include <stdlib.h>

int main(){
            //Strings feitas de diferentes formas
    char palavra1[] = "boi";
    char palavra2[5] = "bala";
    char palavra3[] = {'a','b','c','d','\0'};
    char palavra4[5] = {'f','o','n','e','\0'};

            //Imprimindo String-sem usar espaços
    printf("%s \n", palavra1);

            //Lendo uma String-sem espaços
    printf("\nDigite uma palavra com ate 4 letras\n");
    fflush(stdin);   //para "limpar" o buffer do teclado antes de ler uma nova string
    scanf("%s", palavra2);

            //Lendo uma String-com espaços
    char fruta[255];
    fflush(stdin);
    printf("Digite o nome de uma fruta:");
    fgets(fruta, sizeof(fruta), stdin);

            //Imprimindo a fruta lida
    printf("Fruta lida:");
    puts(fruta);

    return 0;

}
