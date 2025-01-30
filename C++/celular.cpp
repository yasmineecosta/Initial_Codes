#include <iostream>
using namespace std;

class Celular{
private:
    string marca;       //atributos
    float preco = 0;

public:
    Celular(){      //nada definido
        marca = "";
        preco = 0;
    }

    Celular(string marca){      //marca definida
        setMarca(marca);
    }

    Celular(float preco){       //preco definido
        setPreco(preco);
    }

    Celular(string marca, float preco){     //ambos definidos
        setMarca(marca);
        setPreco(preco);
    }

    string getMarca(){      //retorna a marca
        return marca;
    }

    void setMarca(string marcaNovo){    //setter da marca, atualiza a marca
        marca = marcaNovo;
    }

    float getPreco(){     //retorna o preco
        return preco;
    };

    void setPreco(float precoNovo){     //setter do preco, atualiza o preco
        preco = precoNovo;
    }
};

int main(){
    Celular celular1;
    cout << "Cel1 Marca:" << celular1.getMarca() << "\n";
    cout << "Cel1 Preco:" << celular1.getPreco() << "\n";

    Celular celular2("Motorola");
    cout << "Cel2 Marca:" << celular2.getMarca() << "\n";
    cout << "Cel2 Preco:" << celular2.getPreco() << "\n";

    Celular celular3(899.99);
    cout << "Cel3 Marca:" << celular3.getMarca() << "\n";
    cout << "Cel3 Preco:" << celular3.getPreco() << "\n";

    Celular celular4("Iphone", 4569.99);
    cout << "Cel4 Marca:" << celular4.getMarca() << "\n";
    cout << "Cel4 Preco:" << celular4.getPreco() << "\n";

    return 0;
}
