#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int idade;
   
    //L� a idade
    scanf("%d", &idade);
    
  	//Analisa se � maior de idade
	if(idade < 17){
		printf("Menor de Idade");
	}else if(idade == 18){
	  	printf("Tem que se alistar");
	}else{
		printf("Maior de Idade");
	}
	
    return 0;
}

