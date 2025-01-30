#include <iostream>
using namespace std;

class Pessoa{
    private:
        string nome;
        int CPF;
    public:
        string getNome(){
            return nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
        int getCPF(){
            return CPF;
        }
        void setCPF(int CPF){
            this->CPF = CPF;
        }
};

class Professor: public Pessoa{
    private:
        float salario;
    public:
        Professor(){}
        Professor(string nome, int CPF, float salario){
            setNome(nome);
            setCPF(CPF);
            setSalario(salario);
        }
        float getSalario(){
            return salario;
        }
        void setSalario(float salario){
            this->salario = salario;
        }
};

int main(){
    //cria e imprime uma pessoa
    Pessoa pessoa1;
    pessoa1.setNome("Yasmine");
    pessoa1.setCPF(05340401367);
    cout << "Pessoa:" << pessoa1.getNome() << " - " << pessoa1.getCPF() << "\n";

    //professor ja usando parametros na criacao
    Professor professor1("Beatrice", 05376543210, 5500.00);
    cout << "Professor:" << professor1.getNome() << " - " << professor1.getCPF();
    cout << " - " << professor1.getSalario() << "\n";

    //extra:criando sem usar o construtor completo e mudando atributos depois
    Professor professor2;
    professor2.setNome("Yedda");
    professor2.setCPF(21771790334);
    professor2.setSalario(23000.00);
    cout << "Professor:" << professor2.getNome() << " - " << professor2.getCPF();
    cout << " - " << professor2.getSalario();

    return 0;

}
