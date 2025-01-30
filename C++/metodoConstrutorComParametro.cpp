#include <iostream>
using namespace std;

class Pessoa{           //Definição do "molde" para Pessoas
public:                 //Modificador de Acesso
    string nome;        //Atributo de Nome
            //Método construtor é inicializado quando a class é criada
    Pessoa(){
        printf("Pessoa criada sem nome \n");
    }
    Pessoa(string nomeNovo){
        printf("Pessoa criada com nome\n");
        nome = nomeNovo;
    }
};

int main(){

        Pessoa pessoa1;    //Cria um Objeto da classe Pessoa sem nome
        cout << "Pessoa1:" << pessoa1.nome << "\n";
        pessoa1.nome = "Mario";    //Cria um Objeto da classe Pessoa com nome
        cout << "Pessoa1:" << pessoa1.nome << "\n\n";

        Pessoa pessoa2("John");    //Cria um Objeto da classe Pessoa com nome
        cout << "Pessoa2:" << pessoa2.nome;

        return 0;
}
