#include <iostream>
#include <string>

using namespace std;

int sumDig(string num) {
    int suma = 0;
    int len = num.length();
    for (int i = 0; i < len; i++) {
        suma += num[i] - '0';
    }
    return suma;
}
int main(){

    string N;
    while (cin >> N) {
        int suma = sumDig(N);
        cout << "La suma de los digitos de " <<N<<" es "<<suma << endl;
    }
    return 0;
}