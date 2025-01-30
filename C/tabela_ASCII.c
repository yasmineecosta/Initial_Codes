#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int i;

    for(i=0; i<255; i++){
        if(i%10==0)
            printf("\n");
            printf("%d = %c\t",i,i);
    }

    return 0;
}
