#include <stdio.h>
#include <stdlib.h>

void imprimeA(){
    int a = 10;
    printf("Valor de A na funcao: %d\n", a);
}

int main(){

        //Defino um valor de a no escopo da main
    int a = 15;
    printf("Valor de A fora da funcao: %d \n", a);
        //imprimo a vari�vel A da fun��o imprimeA()
    imprimeA();
        //Imprime a vari�vel A da fun��o main()
    printf("Valor de A fora da funcao: %d\n", a);

    return 0;
}
