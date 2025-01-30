#include <stdio.h>
#include <stdlib.h>
int valor = 0;

void adicionaUmAte10(){
    if(valor < 10){

        printf("%d \n", valor);
        valor++;
            //chama a função de novo
        adicionaUmAte10();
    }
}

int main(){

    adicionaUmAte10();
        //encerrou a recursão
    printf("Fim");
    return 0;
}
