#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, valorInicial, valorFinal,passos;

    printf("Digite um valor inicial:");
    scanf("%d", &valorInicial);

    printf("Digite um valor final:");
    scanf("%d", &valorFinal);

    printf("Digite um valor de passos:");
    scanf("%d", &passos);

    for(i = valorInicial; i <= valorFinal; i = i + passos){

        printf("%d\n", i);

    }

    return 0;
}
