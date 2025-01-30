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
            //Preencher valores na matriz criada
    for(int i = 0; i < numeroLinhas; i++){
        for(int j = 0; j < numeroColunas; j++){
           matriz[i][j] = 1;        //ou i + j;
        }
    }
            //Imprime os valores de i e j
    for(int i = 0; i < numeroLinhas; i++){
        for(int j = 0; j < numeroColunas; j++){
           cout << matriz[i][j];
        }
            cout << "\n";
    }

    return 0;
}
