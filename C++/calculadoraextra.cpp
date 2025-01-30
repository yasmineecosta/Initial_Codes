#include <iostream>
using namespace std;

class Calculadora{
public:
    Calculadora(){
        printf("Calculadora criada\n");
    }

    int soma(int x, int y){
        int resultado = x + y;
        return resultado;       //ou x+y
    }

    int subtrai(int x, int y){
        int resultado = x - y;
        return resultado;       //ou x-y
    }

    int divide(int x, int y){
        int resultado = x / y;
        return resultado;       //ou x/y
    }

    int multiplica(int x, int y){
        int resultado = x * y;
        return resultado;       //ou x*y
    }
};

int main(){
    Calculadora minhaCalculadora;
    cout << "Soma:" << minhaCalculadora.soma(10,5) << "\n";
    cout << "Subtrai:" << minhaCalculadora.subtrai(10,5) << "\n";
    cout << "Divide:" << minhaCalculadora.divide(10,5) << "\n";
    cout << "Multiplica:" << minhaCalculadora.multiplica(10,5) << "\n";

    return 0;
}
