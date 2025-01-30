#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = malloc(sizeof(int)*5);

    for(int i=0;i<5;i++)
        p[i] = i+2;

    for(int i=0;i<5;i++)
        printf("%d\n", *(p+i));

    // tanto o acesso via colchetes quanto a aritmética de ponteiros podem ser utilizados
}
