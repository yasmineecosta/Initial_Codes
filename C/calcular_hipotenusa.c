#include <stdio.h>
#include <math.h>


//Escreva um programa,
//em C, que o usu�rio informa as medidas dos dois
//catetos de um tri�ngulo ret�ngulo e imprima o valor
//da Hipotenusa.
int main(){

    float a,b,c;
    printf("Digite os catetos: \n");
    scanf("%f %f", &a, &b);

    c = sqrt(pow(a,2) + pow(b,2));
    printf("Hipotenusa: %.2f", c);
    return 0;
}
