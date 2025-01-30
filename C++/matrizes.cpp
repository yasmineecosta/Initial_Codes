#include <new>
#include <iostream>
using namespace std;

int main(){
    int numeroLinhas, numeroColunas;
    cin >> numeroLinhas;        //lendo numero de linhas
    cin >> numeroColunas;       //lendo numero de colunas
        //aloca as linhas
    int** matriz = new int*[numeroLinhas];
        //aloca as colunas
    for (int i = 0; i < numeroLinhas; i++){
        matriz[i] = new int[numeroColunas];
    }

    matriz[0][0] = 50;
    matriz[0][1] = 500;

    cout << matriz[0][0] << "," << matriz[0][1];
    return 0;
}
