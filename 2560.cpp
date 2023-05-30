#include <iostream>
using namespace std;

int main(){
    int k, w;
    long long n;
    cin >> k >> n >> w;
    long long costo = 0;
    int i = 1;
    while(w--){
        costo += k*i;
        i++;
    }
    if(costo == n){
        cout << 0 << endl;
    }else{
        cout << costo - n << endl;
    }
    // k -> primera banana
    // n -> dinero inicial
    // w -> nro paltas a comprar

    return 0;
}