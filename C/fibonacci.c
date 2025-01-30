#include <stdio.h>
#include <stdlib.h>



int fib(int x){
    if(x == 0 || x == 1){
        return 0;
    }
    if(x == 2){
        return 1;
    }
    else{
        return fib(x-1) + fib(x-2);
    }
}

int main(){
    int n;
    scanf("%d", &n);

    fib(n);
    printf("%d", fib(n));

    return 0;

}
