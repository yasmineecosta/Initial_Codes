#include <iostream>
using namespace std;

//Classe Pai
class Animal{
    private:
        string terreno;
    public:
        string getTerreno(){
                return terreno;
        }
        void setTerreno(string terreno){
        this->terreno = terreno;
        }
};
//Classe Filha
class Mamifero: public Animal{
    private:
        int mesesGestacao;
    public:
        int getMesesGestacao(){
            return mesesGestacao;
        }
        void setMesesGestacao(int mesesGestacao){
            this->mesesGestacao = mesesGestacao;
        }
};

//Classe Filha
class Cachorro: public Mamifero{
//herda os metodos public e protected de mamifero e animal tambem
    private:
        string raca;
    public:
        string getRaca(){
            return raca;
        }
        void setRaca(string raca){
            this->raca = raca;
        }
        void latir(){
            cout << "Au au" << endl;
        }
};

int main(){
    Cachorro cachorro1;
    cachorro1.setTerreno("Terra");
    cachorro1.setMesesGestacao(4);
    cachorro1.setRaca("Yorkshire");
    cout << cachorro1.getTerreno() << endl;
    cout << cachorro1.getMesesGestacao() << endl;
    cout << cachorro1.getRaca() << endl;
    cachorro1.latir();

    return 0;
}
