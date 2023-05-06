#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if( a % b == 0){
            cout << a << " es divisible por " << b << endl;
        }else if (b % a == 0){
            cout << b << " es divisible por " << a << endl;
        }else{
            cout << "-1" << endl;
        }
    }

    return 0;
}