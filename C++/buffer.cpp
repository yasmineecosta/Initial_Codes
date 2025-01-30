//bibliotecas necess�rias para limpeza do buffer
#include <ios>
#include <limits>
#include <iostream>
using namespace std;

int main(){

    char frase[80];         //cria uma vari�vel para armazenar uma frase

    cout << "Digite uma frase:";
    //Quando vamos ler palavras e frases com o teclado, alguns compiladores se perdem com valores na mem�ria
    cin.sync();         //Para garantir seu funcionamento sem "lixo" no buffer:
    cin.getline(frase, 80);     //l� a frase mesmo que tenha um espa�o
    cout << "\nFrase: " << frase << "\n";       //imprime o resultado

    cin.sync();         //l� de novo, ap�s limpar o buffer
    cin.getline(frase, 80);
    cout << "\nNova frase: " << frase << "\n";

    return 0;
}
