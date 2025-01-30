#include <iostream>
using namespace std;

int main(){
    cout << "Hello";        //padrao printf
		int a = 20;
    cout << "\nValor:"<< a;         //padrao scanf
		int b = 20;
    cout << "\nValor 1:" << a << "\nValor 2:" << b;
        int c;      //ler valores independente de ser int, string, float, char...
        cin >> c;
        cout << "\nValor digitado:" << c;
    return 0;
}
