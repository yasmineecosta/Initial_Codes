#include <iostream>
using namespace std;

//Classe pai
class Eletronico{
    private:
        string marca;

    public:
        string getMarca(){
            return marca;
        }

        void setMarca(string marca){
            this->marca = marca;
        }

    protected:
        void souEletronico(){
            printf("\nSou eletronico!\n");
        }
};
        //Classe filha
class Celular: public Eletronico{
//como está extendendo a classe eletronico, automaticamente temos acesso aos
//métodos e atributos que forem PUBLIC dela, como getMarca() e setMarca()
    private:
        int polegadas;

    public:
        Celular(){
            souEletronico();
        }

        int getPolegadas(){
            return polegadas;
        }
        //setter da marca, atualiza a marca
        void setPolegadas(int polegadas){
            this->polegadas = polegadas;
        }
};

int main(){
    Eletronico eletronico1;
    eletronico1.setMarca("Samsung");
    cout << "Eletronico1 Marca:" << eletronico1.getMarca(); //imprime a marca
    //nao consigo usar os metodos getPolegadas() ou setPolegadas() aqui,
    //pois esses metodos estao presentes apenas na classe filha

    Celular celular1;
    celular1.setMarca("Iphone");
    celular1.setPolegadas(5);
    cout << "Cel1 Marca:" << celular1.getMarca() << "\n";   //imprime a marca
    cout << "Cel1 Polegadas:" << celular1.getPolegadas() << "\n";   //imprime as polegadas

    return 0;
}
