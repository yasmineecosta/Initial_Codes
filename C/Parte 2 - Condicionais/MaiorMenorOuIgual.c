#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a, b;
   
    //L� os valores
    scanf("%d", &a);
    scanf("%d", &b);
    
  	//Compara os n�meros
	if(a > b){
		printf("A � maior que B");
	}else if(a < b){
	  	printf("A � menor que B");
	}else{
		printf("A e B sao iguais");
	}
	
    return 0;
}

