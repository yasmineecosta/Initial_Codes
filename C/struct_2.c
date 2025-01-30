#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{                      //Definição do "molde" para pessoas
    int idade;                      //Atributo de idade
    float salario;                  //Atributo de salário
    char nome[255];                 //Atributo do nome
};

int main(){
    struct Pessoa pessoa1;          //Cria um Struct do tipo Pessoa
    pessoa1.idade = 25;             //Muda a idade da pessoa1
    pessoa1.salario = 500.0;        //Muda o salario da pessoa1
    strcpy(pessoa1.nome, "John");   //Muda o nome da pessoa1

    printf("Nome: %s \n", pessoa1.nome);
    printf("%d anos, salario R$%.2f", pessoa1.idade, pessoa1.salario);
    return 0;
}
