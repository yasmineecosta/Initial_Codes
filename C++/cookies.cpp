#include <iostream>
using namespace std;

class Cookie{               //Definição do “molde” para Cookies
    public:                 //Modificador de Acesso
        float preco;        //Atributo de Preço
        string sabor;       //Atributo de Sabor
        string formato;     //Atributo de Formato
};

int main(){
	class Cookie cookie1;                   //Cria um objeto da classe Cookie
        cookie1.preco = 15.35;              //Muda o preço do cookie1
        cookie1.sabor = "Chocolate";        //Muda	o sabor o cookie1
        cookie1.formato = "Homenzinho";     //Muda	o formato o cookie1
	class Cookie cookie2;                   //Cria um objeto da classe Cookie
        cookie2.preco = 20.00;              //Muda o preço do cookie2
        cookie2.sabor = "Flocos";           //Muda o sabor do cookie2
        cookie2.formato = "Arvorezinha";    //Muda o formato o cookie2
	cout << "Cookie1: " << cookie1.sabor;
	cout << " custa R$" << cookie1.preco;
	cout << " formato:" << cookie1.formato << "\n";
	cout << "Cookie2: " << cookie2.sabor;
    cout << " custa R$" << cookie2.preco;
    cout << " formato:" << cookie2.formato << "\n";
return 0;
}

