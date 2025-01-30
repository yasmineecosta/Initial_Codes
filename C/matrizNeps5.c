#include <stdio.h>

int main(){
    int x[][3] = {1, 2, 3, 4};
    // como são 4 elementos, e cada vetor deve ter 3, então há 2 vetores no total

    // os 2 últimos elementos do segundo vetor foram preenchidos com 0

    for(int linha=0; linha<2; linha++){
        for(int coluna=0; coluna<3; coluna++){
            printf("%d ", x[linha][coluna]);
        }
        printf("\n");
    }
}
/* Saída:
1 2 3
4 0 0

*/
