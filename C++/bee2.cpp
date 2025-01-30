#include <bits/stdc++.h>
using namespace std;

int main(){

    double raio;
    cin >> raio;
    double area = 3.14 * (pow(raio, 2));

    cout << "A=" << fixed << setprecision(4) << area << endl;
    return 0;
}
