#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a=0;
    printf("Imprimindo tabela ASCII\n");
    for(a=1;a<127;a++)
    printf("Decimal: %i; Octal: %o; Hexadecimal: %x; Caractere: %c \n",a,a,a,a);
   printf("\n\t\tFIM\n\n");
   system("pause");
}
