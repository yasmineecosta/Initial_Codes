#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    int v[10], i;
    int x;
    int mark = 1;
    0 <= v <= 100;

    for(i=0;i<10;i++){
        cin >> v[i];
    }

    cin >> x;

    for(i=0; i<10; i++){
        if(v[i] == x){
            cout << "SIM";
            mark = 0;
            break;
        }
    }

    if(mark == 1){
        cout << "NAO";
    }

    return 0;

}

