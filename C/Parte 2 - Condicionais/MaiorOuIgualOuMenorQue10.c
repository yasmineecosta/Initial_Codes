#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a, b, soma;
	 
    scanf("%d", &a); //L� o valor a
    scanf("%d", &b); //L� o valor b
    soma = a + b;
    
  	//Compara��es
	if(soma >= 10){
		printf("Soma maior ou igual a 10");
	}else{
		printf("Soma menor que 10");
	}
	
    return 0;
}

