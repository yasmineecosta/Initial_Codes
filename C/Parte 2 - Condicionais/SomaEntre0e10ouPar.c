#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a,b, soma;
   
    //L� os valores
    scanf("%d", &a);
    scanf("%d", &b);
    soma = a + b;
    
  	//Analisa se est� entre 0 e 10 ou se � par
	if((soma > 0 && soma < 10) || ( soma % 2 == 0)){
		printf("Esta entre 0 e 10 ou foi par");
	}
	
    return 0;
}

