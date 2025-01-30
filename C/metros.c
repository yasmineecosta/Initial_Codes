#include <stdio.h>
#include <stdlib.h>

//valor em metros que voce diz
//mostra esse valor em decimetro, cm e milimetro

main(){
    float metros;
    float decimetros;
    float centimetros;
    float milimetros;

    printf("Digite um valor em metros:\n");
    scanf("%f",&metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("\nO valor em decimetros e: %.2f\n", decimetros);
    printf("\nO valor em centimetros e: %.2f", centimetros);
    printf("\nO valor em milimetros e: %.2f", milimetros);


}
