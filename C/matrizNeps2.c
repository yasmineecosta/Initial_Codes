#include <stdio.h>
#include <stdlib.h>

int main(){
    int m[2][3];
    int linha, coluna;

    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            scanf("%d", &m[linha][coluna]); // ou scanf("%d", &m[linha]+ coluna);
        }
    }
    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d ", m[linha][coluna]);
        }
    printf("\n");
    }

}
