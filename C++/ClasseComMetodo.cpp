#include <iostream>
using namespace std;

class Pessoa{
public:
    string nome;
    int idade;
    float salario;

    Pessoa(string nomeNovo, int idadeNova, float salarioNovo){
        nome = nomeNovo;
        idade = idadeNova;
        salario = salarioNovo;
    }
            //imprime os detalhes atribuidos aos campos
    imprimeDetalhes(){
        cout << "Nome:" << nome << ", Idade:" << idade;
        cout << ", Salario:" << salario;
    }
};
int main(){
    Pessoa pessoa1("John", 25, 895.75);
    pessoa1.imprimeDetalhes();
    return 0;
}
