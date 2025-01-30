#include <stdio.h>

int main(){

    int m[2][3] = {{1,2,3},{4,5,6}};
        /* Observa��o:
            A declara��o: int m[2][3] = {1, 2, 3, 4, 5, 6}; tamb�m seria v�lida,
        pois o compilador j� separaria os elementos em vetores nos tamanhos adequados,
        preenchendo com 0's o que faltasse no final.
        */

    // atribuir utilizando colchetes
    m[0][0] = 123;

    // atribuir utilizando aritm�tica de ponteiros
    *(*(m+1)+2) = 789;

    // ler utilizando colchetes
    scanf("%d", &m[0][2]);

    // ler utilizando aritm�tica de ponteiros
    scanf("%d", *(m+1)+1);

        /* Observa��o:
            Perceba que utilizamos apenas um asterisco, pois n�o queremos
        acessar o elemento, mas pegar seu endere�o
        */

    for(int linha=0; linha<2; linha++){
        for(int coluna=0; coluna<3; coluna++){
            printf("%d ", m[linha][coluna]);
        }
        printf("\n");
    }

}
/* Sa�da para uma entrada com os n�meros 13 e 21:
123 2 13
4 21 789

*/
