    #include <iostream>
    using namespace std;

	class Pessoa{
	public:
	int idade;
	float salario;
	string nome;
};

	int main(){
		class Pessoa pessoa1;
		pessoa1.idade = 21;
		pessoa1.salario = 5432.10;
		pessoa1.nome = "Beatrice";

cout << pessoa1.nome << " tem " << pessoa1.idade << " anos";
cout << ", e recebe R$" << pessoa1.salario;

return 0;
}

