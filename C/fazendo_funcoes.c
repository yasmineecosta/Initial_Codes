#include <stdio.h>
#include <stdlib.h>

        //fun��o void(n�o retorna nada no fim)
void desenhaSeparador(){
    printf("\n---------\n");
}

int main(){
        //chama a fun��o e executa oq estiver dentro dela
    desenhaSeparador();
    printf("Oi");
    desenhaSeparador();
    printf("Fim.");
    desenhaSeparador();

    return 0;
}
