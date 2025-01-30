#include <iostream>
#include <cmath>

using namespace std;

float leia_ate_ser_positivo(string nome_cateto){

    float valor_cateto;

    do{
        cout << "Digite o valor do cateto " << nome_cateto << " :";
        cin >> valor_cateto;
    }while(valor_cateto <= 0);

    return valor_cateto;
}


int main(){
    float a,b,h;
    a = leia_ate_ser_positivo("a");
    b = leia_ate_ser_positivo("b");

    float soma_quadrados_cat = pow(a, 2) + pow(b, 2);
    h = sqrt(soma_quadrados_cat);

    cout << "A hipotenusa do triangulo retangulo e " << h << endl;


    return 0;
}
