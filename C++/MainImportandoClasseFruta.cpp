#include <iostream>
#include "Fruta.h"      //importa a classe fruta

using namespace std;

int main(){

    Fruta fruta1;               //cria um objeto da classe fruta
    fruta1.setNome("Uva");      //muda o sabor da fruta
    fruta1.setPreco(15.35);     //muda o preco da fruta

    cout << "Fruta 1:" << fruta1.getNome();
    cout << " custa R$" << fruta1.getPreco();

    return 0;

}
