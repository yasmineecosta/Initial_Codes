#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a,b;
   
    //L� os valores
    scanf("%d", &a);
    scanf("%d", &b);
    
  	//Analisa se algum valor � par
	if((a % 2 == 0) || ( b % 2 == 0)){
		printf("Algum valor foi par");
	}else{
		printf("Nenhum valor foi par");
	}
	
    return 0;
}

