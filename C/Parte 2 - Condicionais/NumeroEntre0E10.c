#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a;
   
    //L� um valor
    scanf("%d", &a);
    
  	//Analisa se est� entre 0 e 10
	if(a > 0 && a < 10){
		printf("Esta entre 0 e 10");
	}
	
    return 0;
}

