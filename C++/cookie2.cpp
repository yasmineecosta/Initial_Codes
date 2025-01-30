#include <iostream>
using namespace std;

class Cookie{               //defini��o do "molde" para cookies
public:                     //modificador de acesso
        float preco;        //atributo de pre�o
        string sabor;       //atributo de sabor
        string formato;     //atributo de formato
                //m�todo construtor � inicializado quando a class � criada
        Cookie(){
            printf("Cookie criado\n");
            formato = "Redondo";  //j� inicializa o formato como redondo
        }
};

int main(){
    Cookie cookie1;                 //cria um objeto da classe cookie
    cookie1.preco = 15.35;          //muda o pre�o do cookie1
    cookie1.sabor = "Chocolate";    //muda o sabor do cookie1

    cout << "Cookie1:" << cookie1.sabor;
    cout << " custa R$" << cookie1.preco;
    cout << " formato:" << cookie1.formato << "\n";

    Cookie cookie2;                 //cria um objeto da classe cookie
    cookie2.preco = 20.55;          //muda o pre�o do cookie2
    cookie2.sabor = "Baunilha";    //muda o sabor do cookie2
    cookie2.formato = "Arvorezinha";  //muda o formato do cookie2
    cout << "Cookie2:" << cookie2.sabor;
    cout << " custa R$" << cookie2.preco;
    cout << " formato:" << cookie2.formato << "\n";

    return 0;

}
