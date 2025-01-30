#include <stdio.h>
#include <stdlib.h>

int main(){
int **p = (int**)calloc(2, sizeof(int*));

int qtd = 2;

p[0] = (int*)calloc(3, sizeof(int));
p[1] = (int*)calloc(3, sizeof(int));

p = (int**)realloc(p, 4*sizeof(int));

qtd = 4;

p[2] = (int*)calloc(3, sizeof(int));
p[3] = (int*)calloc(3, sizeof(int));

for(int i=0;i<qtd;i++){
    free(p[i]);
}
free(p);

}
