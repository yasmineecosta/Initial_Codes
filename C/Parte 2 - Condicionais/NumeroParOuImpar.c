#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a;
   
    //L� os valores
    scanf("%d", &a);
    
  	//Compara os n�meros
	if(a % 2 == 0){
		printf("Numero par");
	}else{
		printf("Numero impar");
	}
	
    return 0;
}

