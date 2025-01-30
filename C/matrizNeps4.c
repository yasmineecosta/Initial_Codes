#include <stdio.h>

int main(){

    int m[2][3] = {{1,2,3},{4,5,6}};
        /* Observação:
            A declaração: int m[2][3] = {1, 2, 3, 4, 5, 6}; também seria válida,
        pois o compilador já separaria os elementos em vetores nos tamanhos adequados,
        preenchendo com 0's o que faltasse no final.
        */

    // atribuir utilizando colchetes
    m[0][0] = 123;

    // atribuir utilizando aritmética de ponteiros
    *(*(m+1)+2) = 789;

    // ler utilizando colchetes
    scanf("%d", &m[0][2]);

    // ler utilizando aritmética de ponteiros
    scanf("%d", *(m+1)+1);

        /* Observação:
            Perceba que utilizamos apenas um asterisco, pois não queremos
        acessar o elemento, mas pegar seu endereço
        */

    for(int linha=0; linha<2; linha++){
        for(int coluna=0; coluna<3; coluna++){
            printf("%d ", m[linha][coluna]);
        }
        printf("\n");
    }

}
/* Saída para uma entrada com os números 13 e 21:
123 2 13
4 21 789

*/
