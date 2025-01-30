#include <iostream>
using namespace std;

int main(){
        int preco, pago, troco;

    cout << "Valor do produto: ";
    cin >> preco;
    cout << "Valor recebido: ";
    cin >> pago;
    troco = pago - preco;

    if(troco < 0){
        cout << "Ainda falta pagar:" << -1*troco;
    }else{
        cout << "Troco: " << troco;
    }

    return 0;
};
