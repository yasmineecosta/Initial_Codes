#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	//Usa o tempo atual como semente
	srand(time(NULL));   
	
	//Cria um n�mero aleat�rio de 5 a 14
	int maximo = 14;
	int minimo = 5;
	
	//Traduzindo para a f�rmula
	//                   14   -   5    + 1 = 10
	int r = (rand() % (maximo - minimo + 1)) + minimo; 
	
	//ent�o teremos um numero de 0 a 9 + 5
	//ou seja, o m�nimo ser� 5 e o m�ximo ser� 14
	
	//Imprime o n�mero gerado
	printf("Numero gerado: %d", r);

    return 0;
}

