#include <stdio.h>

int main(){
    int x[][3] = {1, 2, 3, 4};
    // como s�o 4 elementos, e cada vetor deve ter 3, ent�o h� 2 vetores no total

    // os 2 �ltimos elementos do segundo vetor foram preenchidos com 0

    for(int linha=0; linha<2; linha++){
        for(int coluna=0; coluna<3; coluna++){
            printf("%d ", x[linha][coluna]);
        }
        printf("\n");
    }
}
/* Sa�da:
1 2 3
4 0 0

*/
