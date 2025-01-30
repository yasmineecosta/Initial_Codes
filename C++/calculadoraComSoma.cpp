#include <iostream>
using namespace std;

class Calculadora{
public:

    Calculadora(){
        printf("Calculadora criada \n");
    }

    int soma(int x, int y){
        int resultado = x + y;
        return resultado;
    }
};

int main(){
    Calculadora minhaCalculadora;
    cout << minhaCalculadora.soma(20,5) << "\n";
    cout << minhaCalculadora.soma(50,5) << "\n";

    return 0;
}
