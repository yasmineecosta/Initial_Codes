#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a,b;
   
    //L� os valores
    scanf("%d", &a);
    scanf("%d", &b);
    
  	//Analisa se algum valor � maior que 10
	if(a > 10 || b > 10){
		printf("Algum valor e maior que 10");
	}else{
		printf("Nenhum valor e maior que 10");
	}
	
    return 0;
}

