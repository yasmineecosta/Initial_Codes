#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	//Usa o tempo atual como semente
	srand(time(NULL));   
	
	//Cria um n�mero aleat�rio de 5 a 14
	int r = (rand() % 10) + 5; 
	
	//Imprime o n�mero gerado
	printf("Numero gerado: %d", r);

    return 0;
}

