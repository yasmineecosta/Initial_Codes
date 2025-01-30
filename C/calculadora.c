#include <stdio.h>
#include <stdlib.h>

// o usuario fala o numero inicial e final e em quanto o numero aumentara
int main(){
    int a,b,pa;
        printf("Digite o numero inicial:");
        scanf("%d", &a);

        printf("Digite o numero final:");
        scanf("%d", &b);

        printf("Digite o valor da pa:");
        scanf("%d", &pa);

            for(a;a<b; a = a + pa){
                printf("%d + %d = %d \n", a,pa,a + pa);
            }

    return 0;

}
