#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int pessoa1,pessoa2;
	 
    scanf("%d", &pessoa1); //L� a idade 1
    scanf("%d", &pessoa2); //L� a idade 2
    
  	//Compara��es em que as duas pessoas
  	//precisam ser maiores de idade
	if(pessoa1 > 17 && pessoa2 > 17 ){
		printf("OK");
	}else{
		printf("PROBLEMA");
	}
	
    return 0;
}

