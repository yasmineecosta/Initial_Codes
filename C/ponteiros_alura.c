#include <stdio.h>

void calcula(int* c){       //guarda um endere�o de mem�ria
    printf("calcula %d %d\n", (*c), c);
    (*c)++;
    printf("calcula %d %d\n", (*c), c);
}

int main(){
    int c = 10;

    printf("main %d %d\n", c, &c);
    calcula(&c);
    printf("main %d %d\n", c, &c);

}
