#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fogefoge.h"
#include "mapa.c"
#include "ui.h"
#include "ui.c"
/*
char** mapa;        //[5][10+1]
int linhas;
int colunas;
*/
MAPA m;
POSICAO heroi;
int tempilula = 0;

//parte sem explicacao
int praondefantasmavai(int xatual, int yatual,
    int* xdestino, int* ydestino){

    int opcoes[4][2] = {
        { xatual, yatual +1},
        { xatual +1, yatual},
        { xatual, yatual -1},
        { xatual -1, yatual},
    };

    srand(time(0));
    for(int i=0; i<10; i++){
        int posicao = rand() % 4;

        if(podeandar(&m, FANTASMA, opcoes[posicao][0], opcoes[posicao][1])){
            *xdestino = opcoes[posicao][0];
            *ydestino = opcoes[posicao][1];

            return 1;
        }
    }
    return 0;
}

void fantasmas(){
    MAPA copia;

    copiamapa(&copia, &m);

    for(int i=0; i<m.linhas; i++){
        for(int j=0; j<m.colunas; j++){
            if(copia.matriz[i][j] == FANTASMA){
                int xdestino;
                int ydestino;

                int encontrou = praondefantasmavai(i, j,
                    &xdestino, &ydestino);

                if(encontrou){
                    andanomapa(&m, i, j, xdestino, ydestino);
                }
            }
        }
    }
    liberamapa(&copia);
}

//acaba aqui

int acabou(){
    POSICAO pos;    //nao vi
    int fogefogenomapa = encontramapa(&m, &pos, HEROI); //nao vi
    return !fogefogenomapa;
    //return 0;
}

int ehdirecao(char direcao){    //nova funcao n vista tbm
    return direcao == 'a' ||
        direcao == 'w' ||
        direcao == 's' ||
        direcao == 'd';
}

void move(char direcao){
    //para tirar o outro pacman do mapa:
    /*m.matriz[heroi.x][heroi.y] = '.';

    switch(direcao){
    case 'a':
        m.matriz[heroi.x][heroi.y-1] = '@';
        heroi.y--;
        break;
    case 'w':
        m.matriz[heroi.x-1][heroi.y] = '@';
        heroi.x--;
        break;
    case 's':
        m.matriz[heroi.x+1][heroi.y] = '@';
        heroi.x++;
        break;
    case 'd':
        m.matriz[heroi.x][heroi.y+1] = '@';
        heroi.y++;
        break;
    }*/
    if(!ehdirecao(direcao))
        return;

    int proximox = heroi.x;
    int proximoy = heroi.y;

    switch(direcao){
        case ESQUERDA:
            proximoy--;
            break;
        case CIMA:
            proximox--;
            break;
        case BAIXO:
            proximox++;
            break;
        case DIREITA:
            proximoy++;
            break;
    }

    if(!podeandar(&m, HEROI, proximox, proximoy))
        return;

    if(ehpersonagem(&m, PILULA, proximox, proximoy)){
        tempilula = 1;
    }
    andanomapa(&m, heroi.x, heroi.y,
        proximox, proximoy);
    heroi.x = proximox;
    heroi.y = proximoy;
}

void explodepilula(){

    if(!tempilula) return;
    explodepilula2(heroi.x, heroi.y, 0, 1, 3);
    explodepilula2(heroi.x, heroi.y, 0, -1, 3);
    explodepilula2(heroi.x, heroi.y, 1, 0, 3);
    explodepilula2(heroi.x, heroi.y, -1, 0, 3);

    tempilula = 0;
}

void explodepilula2(int x, int y, int somax, int somay, int qtd){
    //printf("explodiu");
    /*for(int i=1; i<=3; i++){
        if(ehvalida(&m, heroi.x, heroi.y+i)){

               if(ehparede(&m, heroi.x, heroi.y+i)){
                    break;
               }
    m.matriz[heroi.x][heroi.y+1] = VAZIO;*/
    if(qtd == 0) return;

    int novox = x + somax;
    int novoy = y + somay;
    if(!ehvalida(&m, novox, novoy)) return;
    if(ehparede(&m, novox, novoy)) return;

    m.matriz[novox][novoy] = VAZIO;
    explodepilula2(novox, novoy, somax, somay, qtd - 1);
}

int main(){
    //matriz de 5 x 10  - matriz � ponteiro de ponteiro
    //linhas / colunas

    //mapa[0][0] = '|';
    //mapa[4][9] = '@';
    //printf("%c %c\n", mapa[0][0], mapa[4][9]);
    /* int* v = malloc(4)   //de memory allocation, e pode-se
    mudar o valor pra char, double, enfim, e ao inves de 4 bites,
    pode-se usar (sizeof(int) * x); em q x seria a quantidade de
    posi��es
    *v = 10;
    printf("inteiro alocado %d\n",*v);
    free(v);   sempre tem que esvaziar a mem�ria alocada
    */
    lemapa(&m);
    encontramapa(&m, &heroi, HEROI);
    do{
        printf("Tem pilula: %s\n", (tempilula ? "SIM" : "NAO"));
        imprimemapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);
        if(comando == BOMBA) explodepilula();
        fantasmas();

    }while(!acabou());
    /*    OU
    for(int i=0; i>5; i++){
        for(int j=0; j<10; j++){
            printf("%c", mapa[i][j]);
        }
        printf("\n");
    }   */

    liberamapa(&m);
}
