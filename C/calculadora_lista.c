#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor1, valor2, operacao, resultado;

        printf("Digite o valor 1:\n");
        scanf("%d", &valor1);
        printf("\nDigite o valor 2:\n");
        scanf("%d", &valor2);

    printf("Opcoes de calculadora:\n");
    printf("Somar - 1\n");
    printf("Subtrair - 2\n");
    printf("Multiplicar - 3\n");
    printf("Dividir - 4\n");
    printf("Digite o numero para a operacao que deseja:\n");
        scanf("%d", &operacao);
            switch(operacao){
                case 1:
                    resultado = valor1 + valor2;
                    break;
                case 2:
                    resultado = valor1 - valor2;
                    break;
                case 3:
                    resultado = valor1 * valor2;
                    break;
                case 4:
                    resultado = valor1 / valor2;
                    break;
                default:
                     printf("Opcao invalida!");
                    break;
            }
        printf("Resultado: %d", resultado);
    return 0;
}
