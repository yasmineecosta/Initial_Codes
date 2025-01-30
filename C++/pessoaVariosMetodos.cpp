#include <iostream>
using namespace std;

class Pessoa{       //definicao do molde para pessoas
public:             //modificador de acesso
    string nome;    //atributo de nome
            //metodo construtor e inicializado quando a class e criada
    Pessoa(string nomeNovo){
        printf("Pessoa criada com nome \n");
        nome = nomeNovo;
    }
            //metodo que imprime uma frase na tela
    void fala(string frase){
        cout << nome << " diz: " << frase;
    }
            //metodo que faz a pessoa gritar
    void grita(){
        cout << "AAAAAH";
    }
};

int main(){
    Pessoa pessoa1("Mario");    //cria um objeto da classe pessoa com nome
    pessoa1.fala("E ai galera!");
    pessoa1.grita();
    pessoa1.grita();
    return 0;

}
