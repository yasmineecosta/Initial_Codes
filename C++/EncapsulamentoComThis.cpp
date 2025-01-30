#include <iostream>
using namespace std;

class Salgadinho{   //definicao do molde para salgadinho
private:
    string sabor; //atributo de sabor

public://modificador de acesso
    //metodo construtor
    Salgadinho(string sabor){
        setSabot(sabor);
    }
    //retorna o sabor
    string getSabor(){
        return sabor;
    }
            //setter do sabor, atualiza o sabor
    void setSabor(string sabor){
        this->sabor = sabor;    //atributo da classe recebe o valor do parametro
    }
};

int main(){
    Salgadinho s("Picante");
    cout << "Salgadinho1 sabor:" <<s.getSabor() << "\n";    //imprime o sabor

}
