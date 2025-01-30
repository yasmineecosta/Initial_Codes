#include <new>
#include <iostream>
using namespace std;

int main(){
    int tamanho;        //tamanho a ser criado

    cout << "Digite o tamanho:";        //lendo o tamanho do vetor
    cin >> tamanho;

    int *vetor = new int[tamanho];      //criando um ponteiro que recebe o novo vetor vazio

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;
    vetor[3] = 20;

    cout << "Vetor:" << vetor[0] << "," << vetor[1] << "," << vetor[2] << "," << vetor[3];

    return 0;
}
