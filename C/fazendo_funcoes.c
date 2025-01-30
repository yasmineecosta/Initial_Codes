#include <stdio.h>
#include <stdlib.h>

        //função void(não retorna nada no fim)
void desenhaSeparador(){
    printf("\n---------\n");
}

int main(){
        //chama a função e executa oq estiver dentro dela
    desenhaSeparador();
    printf("Oi");
    desenhaSeparador();
    printf("Fim.");
    desenhaSeparador();

    return 0;
}
