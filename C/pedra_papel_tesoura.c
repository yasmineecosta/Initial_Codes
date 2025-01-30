#include <stdio.h>
#include <stdlib.h>

    int main()
{
    //strcmp(strgl, strg2)==0
    char player1[256];
    char player2[256];

    printf("Player 1, Sua vez...\n");
    scanf("%s",&player1);

    printf("\nPlayer 2, Sua vez...\n");
    scanf("%s",&player2);

    printf("\nAguarde, estamos calculando o resultado...\n");
    if(strcmp(player1,"papel")==0){

                    if(strcmp(player2,"papel")==0){
                        printf("Empate!");
                    }else if(strcmp(player2,"tesoura")==0){
                        printf("Player 2 ganhou, pois corta papel!");
                    }else if(strcmp(player2,"pedra")==0){
                        printf("Player 2 perdeu, pois papel embrulha/ganha da pedra!");
                    }else{
                        printf("O player 2 jogou uma informacao invalida");
                    }

    }else if(strcmp(player1,"tesoura")==0){
                    if(strcmp(player2,"papel")==0){
                        printf("Player 2 perdeu, pois tesoura corta papel!");
                    }else if(strcmp(player2,"tesoura")==0){
                        printf("Empate!");
                    }else if(strcmp(player2,"pedra")==0){
                        printf("Player 2 ganhou, pois pedra esmaga tesoura!");
                    }else{
                        printf("O player 2 jogou uma informacao invalida");
                    }
    }else if(strcmp(player1,"pedra")==0){
                    if(strcmp(player2,"papel")==0){
                        printf("Player 2 ganhou, pois papel embrulha pedra!");
                    }else if(strcmp(player2,"tesoura")==0){
                        printf("Player 2 perdeu, pois pedra esmaga tesoura!");
                    }else if(strcmp(player2,"pedra")==0){
                        printf("Empate!");
                    }else{
                        printf("O player 2 jogou uma informacao invalida");
                    }

    }else{
        printf("O player 1 jogou uma informacao invalida");
    }
    return 0;
}
