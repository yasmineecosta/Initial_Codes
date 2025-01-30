#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valor;

        printf("Diga o valor do produto:\n");
        scanf("%f", &valor);

    if(valor >= 100){
        valor *= 1.2;
        printf("O novo valor e: %.2f", valor);
    }else{
        valor *= 1.1;
        printf("O novo valor e: %.2f", valor);
    }
return 0;
}
