#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	//Usa o tempo atual como semente
	srand(time(NULL));   
	
	//Cria um n�mero aleat�rio de 0 a 9
	int r = rand() % 10; 
	
	//Imprime o n�mero gerado
	printf("Numero gerado: %d", r);

    return 0;
}

