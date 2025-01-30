#include <iostream>
using namespace std;

int main(){
    float frente, fundo;

    cout << "Digite o tamanho da frente do terreno:";
    cin >> frente;
    cout << "Digite o tamanho do fundo do terreno:";
    cin >> fundo;
    float tamanhoTerreno = frente * fundo;

    cout << "O tamanho do terreno e: " << tamanhoTerreno;
    cout << " O valor do terreno e: " << tamanhoTerreno * 7592.0;

    return 0;
}
