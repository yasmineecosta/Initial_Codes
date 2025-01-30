#include <stdio.h>
#include <stdlib.h>

void imprimeSoma(int a, int b){     //tambem poderia ser int a, float b. Ler a proxima observação
    printf("\nSoma: %d", a + b);
}

int retornaSoma(int a, int b){
    int soma = a + b;
    return soma;
}

float retornaComMais10(float a){
    return a + 10.0;
}

int main(){
    //enviando só para imprimir
    int valor1, valor2;     //se fosse colocado int valor1 e float valor2
    printf("Insira dois valores inteiros:");
    scanf("%d %d", &valor1, &valor2);
    imprimeSoma(valor1, valor2);

    printf("\n\nResultado Soma 20 + 30: %d \n", retornaSoma(20,30));

        //recebendo valor de uma função para uma variável
    float valorFinal = retornaComMais10(15.5);
    printf("\nValor com mais 10: %f\n", valorFinal);

    return 0;
}
