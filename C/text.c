#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

        srand(time(NULL));

        int dado1 = (rand() % 6) + 1;
        int dado2 = (rand() % 6) + 1;
        int dado3 = (rand() % 6) + 1;

        int soma = dado1 + dado2 + dado3;

        printf("Valores %d %d %d \n", dado1,dado2,dado3);
        printf("Resultado da soma: %d",soma);

        return 0;

}
