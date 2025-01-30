#include <stdio.h>
#include <stdlib.h>

int exemploGlobal = 20;

void imprimeA(){
    int a = 10;
    printf("Valor de A na funcao: %d\n", a);
    exemploGlobal = 50;
}

int main(){

        //definir um valor de a no escopo da main
    int a = 15;
    printf("Valor de A fora da funcao: %d \n", a);
    printf("Valor do Exemplo Global: %d\n", exemploGlobal);

        //imprimo a variável A da função imprimeA()
    imprimeA();

        //imprimo a variável A da função main()
    printf("Valor de A fora da funcao: %d\n", a);
    printf("Valor do Exemplo Global NOVO: %d\n", exemploGlobal);

    return 0;
}
