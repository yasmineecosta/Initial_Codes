#include <iostream>
using namespace std;

class Impressora{
public:
    void imprimir(float reais){
        cout << "R$:" << reais << endl;
    }
    void imprimir(string frase){
        cout << "-" << frase << endl;
    }
};

int main(){

    Impressora impressora1;
    //ir� chamar cada fun��o imprimir de acordo com o tipo e a ordem dos par�metros chamados
    impressora1.imprimir("Oi galera!");
    impressora1.imprimir(25.8);

    return 0;
}
