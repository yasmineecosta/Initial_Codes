#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0;
	
	while(i <= 10){
		
		//Imprime i e pula uma linha
		printf("%d \n", i);
		
		//Aumenta em 3 o valor do i atual
		i = i + 3;
		
		//Quando chega aqui, o c�digo volta para
		//a linha 8 e verifica se a condi��o
		//i <=10 continua verdadeira, para 
		//executar o la�o novamente ou sair
	}
    return 0;
}

