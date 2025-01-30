#include <iostream>
using namespace std;

class Usuario{
private:
    string nome;
    string email;
public:
    string getNome(){
        return nome;
    }
    void setNome(string nome){
        this->nome = nome;
    }
    string getEmail(){
        return email;
    }
    void setEmail(string email){
        this->email = email;
    }
};

class Personagem: public Usuario{
private:
    int nivel;
public:
    int getNivel(){
        return nivel;
    }
    void setNivel(int nivel){
        this->nivel = nivel;
    }
    void aumentaUmNivel(){
        nivel++;
    }
};

int main(){
    Personagem personagem1;
    personagem1.setNome("Yasmine");
    personagem1.setEmail("yasmineecosta@gmail.com");
    personagem1.setNivel(1);
    personagem1.aumentaUmNivel();
    personagem1.aumentaUmNivel();
    cout << "Nome:\n" << personagem1.getNome() << endl;
    cout << "Email:\n" << personagem1.getEmail() << endl;
    cout << "Nivel:" << personagem1.getNivel() << endl;

    return 0;

}
