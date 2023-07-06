#include <iostream>
using namespace std;

int main(){
    int n;
    int suma = 0;
    cin >> n;
    n = n -1;
    int res = n % 3;
    n = n - res;
    
    while(n > 0){
        suma += n;
        n -= 3;
    }
    cout << suma << endl;

    return 0;
}