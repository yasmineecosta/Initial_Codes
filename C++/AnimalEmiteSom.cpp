#include <iostream>
using namespace std;

class Animal{
public:
    //método virtual(vazio)
    void emitirSom(){}
};

class Cachorro: public Animal{
public:
    void emitirSom(){
        cout << "Au au";
    }
};

class Gato: public Animal{
public:
    void emitirSom(){
        cout << "\nMiau miau";
    }
};

int main(){
    //o método emitirSom() sonbrepoe do Animal
    Cachorro cachorro1;
    cachorro1.emitirSom();

    Gato gato1;
    gato1.emitirSom();

    return 0;
}
