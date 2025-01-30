#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, sum;
    printf("Digite os numeros a serem somados: ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("A soma dos numeros e: %d", sum);

    return 0;
}
