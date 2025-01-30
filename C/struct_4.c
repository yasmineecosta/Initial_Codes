#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{                      //Definição do "molde" para pessoas
    int idade;                      //Atributo de idade
    float salario;                  //Atributo de salário
    char nome[255];                 //Atributo do nome
};

int main(){
    struct Pessoa pessoas[2];          //Cria um Struct do tipo Pessoa

    pessoas[0].idade = 25;              //Muda a idade da pessoa1
    pessoas[0].salario = 500.0;         //Muda o salario da pessoa1
    strcpy(pessoas[0].nome, "John");    //Muda o nome da pessoa1

    pessoas[1].idade = 30;              //Muda a idade da pessoa2
    pessoas[1].salario = 800.0;         //Muda o salario da pessoa2
    strcpy(pessoas[1].nome, "Billy");    //Muda o nome da pessoa2

        int i;
            //Imprime a lista de pessoas
        for(i = 0; i < 2; i++){
            printf("Nome: %s, ", pessoas[i].nome);
            printf("%d anos, ", pessoas[i].idade);
            printf("salario R$%.2f \n", pessoas[i].salario);
        }
    return 0;
}
