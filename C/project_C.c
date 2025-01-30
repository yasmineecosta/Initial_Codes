#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, opcao, resultado;
            printf("Digite dois valores:\n");
            scanf("%d %d",&a, &b);

        printf("Menu     \n");
        printf("1 - Somar     \n");
        printf("2- Subtrair    \n");
        printf("Escolha uma opcao: \n");

        scanf("%d", &opcao);
            switch(opcao){
                case 1:
                    resultado = a + b;
                    break;
                case 2:
                    resultado = a - b;
                    break;
                default:
                     printf("Opcao invalida!");
                    break;
            }
        printf("Resultado: %d", resultado);
}
