#include <iostream>
using namespace std;

int main(){
    int n;

        do{
           cout << "Digite um valor inteiro positivo: ";
           cin >> n;
        }while(n <= 0);

        int soma=0;
        for(int i=1; i<=n; i++){
            soma +=i;
        }

        cout << "O valor da soma de 1 ate " << n << " e " << soma;

        return 0;
}
