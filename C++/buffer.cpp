//bibliotecas necessárias para limpeza do buffer
#include <ios>
#include <limits>
#include <iostream>
using namespace std;

int main(){

    char frase[80];         //cria uma variável para armazenar uma frase

    cout << "Digite uma frase:";
    //Quando vamos ler palavras e frases com o teclado, alguns compiladores se perdem com valores na memória
    cin.sync();         //Para garantir seu funcionamento sem "lixo" no buffer:
    cin.getline(frase, 80);     //lê a frase mesmo que tenha um espaço
    cout << "\nFrase: " << frase << "\n";       //imprime o resultado

    cin.sync();         //lê de novo, após limpar o buffer
    cin.getline(frase, 80);
    cout << "\nNova frase: " << frase << "\n";

    return 0;
}
