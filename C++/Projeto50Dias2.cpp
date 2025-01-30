#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << "Digite o terceiro numero: ";
    cin >> c;

    int maiorValor;

    if(a>b && a>c){
        maiorValor = a;
    }else if(b>a && b>c){
        maiorValor = b;
    }else{
        maiorValor = c;
    }

    cout << "O maior valor e " << maiorValor;


    return 0;
}
