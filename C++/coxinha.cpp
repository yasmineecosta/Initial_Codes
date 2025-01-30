#include <iostream>
using namespace std;

class Coxinha{          //Definicao do "molde" para coxinhas
public:                 //modificador de acesso
    string sabor;       //atributo de sabor
            //metodo construtor é inicializado quando a class é criada
    Coxinha(string saborNovo){
        sabor = saborNovo;
    }
};

int main(){

    string sabor;               //Variável auxiliar que recebe um sabor
    cout << "Digite um sabor:"; //pede um sabor
    cin >> sabor;               //lê um sabor
    Coxinha coxinha1(sabor);    //cria uma coxinha com o sabor informado
    cout << "Coxinha 1 tem o sabor de " << coxinha1.sabor << "\n";

    return 0;
}
