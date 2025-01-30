#include <iostream>
using namespace std;

class Pessoa {         //Definição do "molde" para Pessoas
public:                 //Modificador de Acesso
    string nome;        //Atributo de Nome
    int idade = 0;          //Atributo de Idade, de modo que evite numeros aleatorios
            //Método construtor é inicializado quando a class é criada
    Pessoa(){
        printf("Pessoa criada sem nome e sem idade \n");
    }

    Pessoa(string nomeNovo){
        printf("Pessoa criada com nome \n");
        nome = nomeNovo;
    }

    Pessoa (int idadeNova){
        printf("Pessoa criada com idade \n");
        idade = idadeNova;
    }

    Pessoa(string nomeNovo, int idadeNova){
        printf("Pessoa criada com nome e idade \n");
        nome = nomeNovo;
        idade = idadeNova;
    }
};

int main(){

    Pessoa pessoa1;     //Cria um objeto da classe Pessoa com nome
    cout << "Pessoa1:" << pessoa1.nome << "," << pessoa1.idade << "\n";

    Pessoa pessoa2("John");     //Cria um objeto da classe Pessoa com nome
    cout << "Pessoa2:" << pessoa2.nome << "," << pessoa2.idade << "\n";

    Pessoa pessoa3(25);      //Cria um objeto da classe Pessoa com idade
    cout << "Pessoa3:" << pessoa3.nome << "," << pessoa3.idade << "\n";

    Pessoa pessoa4("Jonas", 25);      //Cria um objeto da classe Pessoa com idade
    cout << "Pessoa4:" << pessoa4.nome << "," << pessoa4.idade << "\n";

    return 0;
}
