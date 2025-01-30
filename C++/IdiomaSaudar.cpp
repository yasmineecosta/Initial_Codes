#include <iostream>
using namespace std;

class Idioma{
public:
    void saudar(){}
};

class Portugues: public Idioma{
    public:
        void saudar(){
            cout << "Bom dia" << "\n";
        }
};

class Ingles: public Idioma{
    public:
        void saudar(){
            cout << "Good morning" << "\n";
        }
};

class Espanhol: public Idioma{
    public:
        void saudar(){
            cout << "Buenos dias" << "\n";
        }
};

int main(){

    Portugues port;
    port.saudar();

    Ingles ing;
    ing.saudar();

    Espanhol esp;
    esp.saudar();

    return 0;

}
