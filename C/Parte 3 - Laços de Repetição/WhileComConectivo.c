#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 0;
	int b = 0;
	
	while(a < 10 || b < 10){
		
		printf("Digite dois valores maiores que 10. \n");
		
		printf("Digite um valor para a:");
		scanf("%d", &a);
		
		printf("Digite um valor para b:");
		scanf("%d", &b);
		
		//Quando chega aqui, o c�digo volta para
		//a linha 8 e verifica se os dois valores
		//s�o maiores ou iguais a 10 OU se algum
		//deles � menor que 10
	}
	
	printf("Fim");
	
    return 0;
}

