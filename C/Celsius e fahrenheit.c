#include <stdio.h>
#include <stdlib.h>

int main(){
    int f, C;

    printf("Digite a temperatura em fahrenheit:\n\n");
    scanf("%d", &f);

    C = (f-32.0)*(5.0/9.0);

    printf("O valor %d fahrenheit para celsius:\n", f);
    printf("Usando variavel inteira: %d\n\n", C);
    return 0;
}
