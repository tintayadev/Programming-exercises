// Palindorme extendido
// https://jv.umsa.bo/problem.php?id=1012
#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    while (true) {
        cin >> palabra;
        int longitud = palabra.length();
        if (longitud >= 3 && palabra.substr(0, 3) == "END")
            break;
        string palabra_invertida = string(palabra.rbegin(), palabra.rend());
        int *longitudes_prefijo = new int[longitud]();
        int k = 0;
        for (int i = 1; i < longitud; ++i) {
            k = longitudes_prefijo[i - 1];
            while (k > 0 && palabra_invertida[k] != palabra_invertida[i])
                k = longitudes_prefijo[k - 1];
            if (palabra_invertida[k] == palabra_invertida[i])
                ++k;
            longitudes_prefijo[i] = k;
        }
        k = 0;
        int i = 0;
        while (i < longitud) {
            while (k > 0 && palabra_invertida[k] != palabra[i])
                k = longitudes_prefijo[k - 1];
            if (palabra_invertida[k] == palabra[i])
                ++k;
            if (i != longitud - 1 && k == longitud)
                k = longitudes_prefijo[longitud - 1];
            ++i;
        }
        cout << palabra;
        for (int i = longitud - k - 1; i >= 0; --i)
            cout << palabra[i];
        cout << endl;
        delete[] longitudes_prefijo;
    }
    return 0;
}
