#include <iostream>
using namespace std;

long long contarMichiNumeros(long long n) {
    int contador = 0;
    for (int i = 1; i <= 9; i++) {
        long long michiNumero = i;

        while (michiNumero <= n) {
            contador++;
            michiNumero = michiNumero * 10 + i;
        }
    }

    return contador;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        int resultado = contarMichiNumeros(n);
        cout << resultado << endl;
    }

    return 0;
}