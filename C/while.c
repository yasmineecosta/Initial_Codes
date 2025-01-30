#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;
    int limite = 10;

    while(contador <= limite) {
        printf("Ola Mundo!\n");
        printf("%d", contador);
        printf("----\n");
        contador++;
    }
    return 0;
}
