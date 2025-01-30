#include <stdio.h>
#include <stdlib.h>

int main(){
        int i, tabuada;
        printf("Digite um numero:\n");
        scanf("%d",&tabuada);

        for(i = 1; i<=10; i++){

            printf("%d x %d = %d \n", i, tabuada, i*tabuada);

        }
    return 0;
}
