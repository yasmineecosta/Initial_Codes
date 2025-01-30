#include<limits>
#include<iostream>
#include<ios>
using namespace std;

class Cookie{               //Definição do “molde” para Cookies
    public:                 //Modificador de Acesso
        float preco;        //Atributo de Preço
        string sabor;       //Atributo de Sabor
};

int main(){
	class Cookie cookie1;                   //Cria um objeto da classe Cookie

    cout << "Digite o preco do cookie:";
    cin >> cookie1.preco

    cout << "Digite o sabor do cookie:";
    cin.sync();             //limpa o buffer
    getline(cin, cookie1.sabor );       //lê o sabor mesmo que tenha espaços

    cout << "\nCookie1:" << cookie1.sabor;
    cout << " custa R$" << cookie1.preco;

    return 0;
}
