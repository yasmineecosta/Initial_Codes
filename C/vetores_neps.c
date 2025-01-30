#include <stdio.h>

int main(){
    int v[5];

    for(int i=0;i<5;i++){
        scanf("%d", &v[i]);
    }

    for(int i=0;i<5;i++){
        if(*(v+i) % 2 == 0){
            printf("O numero na posicao %d do vetor eh par!\n", i);
        }
        else{
            printf("O numero na posicao %d do vetor eh impar!\n", i);
        }
    }

}

