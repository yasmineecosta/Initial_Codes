#include <stdio.h>

int main(){
    int x;

    scanf("%d", &x);    //inserir o inteiro
    x <= 1000;

    if(x > 0){
        printf("positivo");
    }else if(x<0){
        printf("negativo");
    }else{
        printf("nulo");
    }
    return 0;
}
