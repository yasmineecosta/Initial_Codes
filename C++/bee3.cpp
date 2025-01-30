#include <bits/stdc++.h>
using namespace std;

int main(){

    int quant;
    bool resultado = false;
    cin >> quant;

    int altura[quant];

    for(int i=0; i<quant; i++){
        cin >> altura[i];
    }

    /*if(quant <= 5){
        for(int i=1; i<quant; i++){
            if((altura[i-1] <= altura[i]) && (altura[i] <= altura[i+1])){
                    cout << "0" << endl;
                    break;
            }else if((altura[i-1] >= altura[i]) && (altura[i] >= altura[i+1])){
                    cout << "0" << endl;
                    break;
            }else{
                    cout << "1" << endl;
                    break;
            }
        }
    }*/
    if (quant%2==0){
            if (quant==2){
                if (altura[0]!=altura[1]){
                    resultado=true;
                }
            } if (altura[0]<altura[1] && altura[quant-1]>altura[quant-2]){
                 for (int i=1; i<=quant-3; i=i+2){
                        if(altura[i]>altura[i+1] && altura[i]>altura[i-1]){
                            resultado=true;
                        }
                 }
            }if (altura[0]>altura[1] && altura[quant-1]<altura[quant-2]){
                for (int i=1; i<=quant-3; i=i+2){
                        if(altura[i]<altura[i+1] && altura[i]<altura[i-1]){
                            resultado=true;
                        }
                }
            }
            /*for(int i=1; i<=quant; i++){
                while(altura);
            }*/
    }if (quant%2!=0){
         if (quant==3){
                if(altura[0]<altura[1] && altura[1]>altura[2]){
                    resultado=true;
                }if(altura[0]>altura[1] && altura[1]<altura[2]){
                     resultado=true;
                }
        }if (altura[0]<altura[1] && altura[quant-1]<altura[quant-2]){
            for (int i=1;i<=quant-3; i=i+2){
                if(altura[i]>altura[i+1] && altura[i]>altura[i-1]){
                    resultado=true;
                }
            }
        }if (altura[0]>altura[1] && altura[quant-1]>altura[quant-2]){
            for (int i=1; i<=quant-3; i=i+2){
                if(altura[i]<altura[i+1] && altura[i]<altura[i-1]){
                    resultado=true;
                }
            }
        }
    }if (resultado==true){
            cout << "1" << endl;
        } if (resultado==false){
            cout << "0" << endl;
    }
    return 0;
}


