#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 10;
	int maximo;

	//L� o limite superior
	printf("Digite um valor maximo:");
	scanf("%d", &maximo);
	
	while(i <= maximo){
		
		if(i % 2 == 0){
			//Imprime i e pula uma linha
			printf("%d \n", i);
		}
		
		//Aumenta em 1 o valor do i atual
		i = i + 1;
		
		//Quando chega aqui, o c�digo volta para
		//a linha 8 e verifica se o i j� chegou
		//no valor m�ximo
	}
    return 0;
}

