#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int obtenerCantidadPrefijo(const vector<string>& frase) {
    unordered_set<char> letras;
    int mayor = 0;
    for (const string& palabra : frase) {
        char letra = palabra[0];
        if (letras.count(letra) > 0) {
            continue;
        }
        letras.insert(letra);
        int cantidad = count_if(frase.begin(), frase.end(), [letra](const string& p) {
            return p[0] == letra;
        });
        if (cantidad > mayor) {
            mayor = cantidad;
        }
    }
    return mayor;
}

int main() {
    int casos;
    cin >> casos;
    cin.ignore();

    for (int i = 0; i < casos; i++) {
        int num;
        cin >> num;
        cin.ignore();
        vector<int> cantidades;
        int mayor = 0;
        for (int j = 0; j < num; j++) {
            vector<string> frase;
            string palabra;
            while (cin >> palabra) {
                frase.push_back(palabra);
                if (cin.get() == '\n') {
                    break;
                }
            }
            int cantidad = obtenerCantidadPrefijo(frase);
            cantidades.push_back(cantidad);
            if (cantidad > mayor) {
                mayor = cantidad;
            }
        }
        cout << "El ganador es " << (find(cantidades.begin(), cantidades.end(), mayor) - cantidades.begin()) + 1 << endl;
    }

    return 0;
}
