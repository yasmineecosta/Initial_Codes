#include<limits>
#include<iostream>
#include<ios>
using namespace std;

class Cookie{               //Defini��o do �molde� para Cookies
    public:                 //Modificador de Acesso
        float preco;        //Atributo de Pre�o
        string sabor;       //Atributo de Sabor
};

int main(){
	class Cookie cookie1;                   //Cria um objeto da classe Cookie

    cout << "Digite o preco do cookie:";
    cin >> cookie1.preco

    cout << "Digite o sabor do cookie:";
    cin.sync();             //limpa o buffer
    getline(cin, cookie1.sabor );       //l� o sabor mesmo que tenha espa�os

    cout << "\nCookie1:" << cookie1.sabor;
    cout << " custa R$" << cookie1.preco;

    return 0;
}
