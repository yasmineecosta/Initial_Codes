#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, valorInicial, valorFinal, passos;
	
	//L� os valores 
	printf("Digite um valor inicial:");
	scanf("%d", &valorInicial);
	
	printf("Digite um valor final:");
	scanf("%d", &valorFinal);
	
	printf("Digite um valor de passos:");
	scanf("%d", &passos);
	
	//Passa todos os par�metros para o for
    for(i = valorInicial; i <= valorFinal; i = i + passos){
	
		//Imprime o valor de i de acordo com os par�metros
		printf("%d\n", i);
	
	}
	
    return 0;
}

