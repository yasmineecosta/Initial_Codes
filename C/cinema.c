#include <stdio.h>
#include <stdlib.h>

int main(){
    int hora_cinema = 20;
    int hora_atual = 20;
    //pode-se usar uma vari�vel int hora_validada = hora_cinema + 30; e substituir na situa��o if


    // PARA USAR SITUA��O DE IF:
    if(hora_atual > hora_cinema +  30) {
        printf("Passou do tempo limite! N�o pode entrar!");
    }else if(hora_atual < hora_cinema - 30){
        printf("Nem abriu a porta do cinema");
    }else{
        printf("O horario esta certo! Pode entrar!");
    }
    return 0;
}

