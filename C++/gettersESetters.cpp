#include <iostream>
using namespace std;

class Pessoa{
private:
    string nome;

public:         //modificador de acesso
    string getNome(){   //getter no nome, retorna o nome atual
        return nome;
    }
            //setter do nome, atualiza o nome
    void setNome(string nomeNovo){
        nome = nomeNovo;
    }
};

int main(){
    Pessoa pessoa1;
    pessoa1.setNome("Patrick"); //modifica o nome
    cout << pessoa1.getNome() << "\n"; //imprime o nome
    return 0;
}
