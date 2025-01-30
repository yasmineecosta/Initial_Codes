#include <iostream>
using namespace std;

class Cachorro{
public:
    string raca;

    Cachorro(){
        raca = "Viralatinha";
    }

    Cachorro(string racaNova){
        raca = racaNova;
    }
};

int main(){
    Cachorro cachorro1;     //cria um cachorro sem raca
    cout << "Cachorro 1:" << cachorro1.raca << "\n";

    Cachorro cachorro2("Yorkshire");        //cria um cachorro com raca
    cout << "Cachorro 2:" << cachorro2.raca;

    return 0;


}
