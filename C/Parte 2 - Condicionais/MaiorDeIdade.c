#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int idade;
   
    //L� a idade
    scanf("%d", &idade);
    
  	//Analisa se � maior de idade
	if(idade > 17){
		printf("Maior de Idade");
	}else{
	  	printf("Menor de Idade");
	}
  
    return 0;
}

