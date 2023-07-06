#include <iostream>
using namespace std;

int main(){
    long long n;
    int i;
    cin >> n >> i;
    while(i--){
        if(n % 10 == 0){
            n = n /10;
        }else{
            n--;
        }
    }
    cout << n << endl;

    return 0;
}