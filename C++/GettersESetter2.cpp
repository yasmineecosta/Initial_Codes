#include <iostream>
using namespace std;

class Pessoa{
private:
    string nome;

public:         //modificador de acesso
    Pessoa(string nomeNovo){   //getter no nome, retorna o nome atual
        nome = nomeNovo;
    }
            //setter do nome, atualiza o nome
        string getNome(){
            return nome;
        }

        void setNome(string nomeNovo){
            nome = nomeNovo;
        }
};

int main(){
    Pessoa pessoa1("John");
    cout << pessoa1.getNome() << "\n";
    pessoa1.setNome("Patrick"); //modifica o nome
    cout << pessoa1.getNome() << "\n"; //imprime o nome
    return 0;
}
