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

            //Lendo informações diretamente no struct
        printf("Digite a idade:");
        scanf("%d", &pessoa1.idade);

        printf("Digite o salario:");
        scanf("%f", &pessoa1.salario);

        printf("Digite o nome:");
        scanf("%s", &pessoa1.nome);

            //Imprimindo o resultado lido
        printf("Nome: %s \n", pessoa1.nome);
        printf("%d anos, salario R$%.2f", pessoa1.idade, pessoa1.salario);
    return 0;
}
