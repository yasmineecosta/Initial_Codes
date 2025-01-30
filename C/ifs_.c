#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    int b;

        printf("Escolha o primeiro numero: \n");
        scanf("%d", &a);

        printf("\nEscolha o segundo numero: \n");
        scanf("%d", &b);

        if(a < b){
            printf("%d ; %d", a,b);
        }else if(a > b){
            printf("\n%d ; %d", b,a);
        }else{
            printf("Valores iguais");
        }
    return 0;
}
