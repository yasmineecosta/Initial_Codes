#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0;
	
    for(i = 10; i > 0; i = i - 3){
	
		//Imprime i e pula uma linha
		printf("%d \n", i);
			
		//Quando chega aqui, o c�digo volta para
		//a linha 8 e verifica se a condi��o
		//i > 0 continua verdadeira, para 
		//executar o la�o novamente ou sair
	}
    return 0;
}

