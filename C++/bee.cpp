#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    long long i;

    for(i=1; i<=N; i++){
        long long a = pow(i,2);
        long long b = pow(i,3);
        cout << i << " " << a << " " << b << endl;
        cout << i << " " << a+1 << " " << b+1 << endl;
    }

    return 0;
}
/*long long x, y, k = 1;
    cin >> x >> y;

    for (long long int i = 0; i < y/x+1; ++i){
        for (long long int j = 0; j < x; ++ j){
            if (k <= y)
            cout << k++ << " ";
        }

         cout << "\n";
    }

 cout << endl;
 */
