#include <stdio.h>
#include <stdlib.h>
#define LINHA 2
#define COLUNA 3

int main(){

        //criando a matriz
    int matriz[LINHA][COLUNA];
    int i,j;

        //le os valores para a matriz
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }

        //imprime os valores lidos na tela
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
