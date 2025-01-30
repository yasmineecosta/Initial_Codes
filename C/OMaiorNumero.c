#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Digite os numeros: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

        if(a>b){
            if(a>c){
                printf("Display A e o maior numero");
            }else{
                printf("Display c e o maior numero");
            }
        }else{
            if(b>c){
                printf("Display B e o maior numero");
            }else{
                printf("Display c e o maior numero");
            }
        }

    return 0;
}
