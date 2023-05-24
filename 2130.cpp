#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool comienzaConVocal(const string& palabra) {
    char primeraLetra = tolower(palabra[0]);
    return (primeraLetra == 'a' || primeraLetra == 'e' || primeraLetra == 'i' || primeraLetra == 'o' || primeraLetra == 'u');
}

void separarPalabras(const string& cadena) {
    vector<string> palabras;
    string palabraActual;
    string cadv;
    string cadc;
    int espaciosEnBlanco = 0;

    for (int i = 0; i < cadena.length(); i++) {
        char c = cadena[i];
        if (c == ' ') {
            if (!palabraActual.empty()) {
                palabras.push_back(palabraActual);
                if (comienzaConVocal(palabraActual)) {
                    cadv += palabraActual + ' ';
                } else {
                    cadc += palabraActual + ' ';
                }
                palabraActual.clear();
            }
            espaciosEnBlanco++;
        } else {
            palabraActual += c;
        }
    }

    if (!palabraActual.empty()) {
        palabras.push_back(palabraActual);
        if (comienzaConVocal(palabraActual)) {
            cadv += palabraActual + ' ';
        } else {
            cadc += palabraActual + ' ';
        }
    }

    // Eliminar espacios al final de cadv y cadc
    if (!cadv.empty()) {
        cadv.pop_back();
    }
    if (!cadc.empty()) {
        cadc.pop_back();
    }

    cout << cadv << endl;
    cout << cadc << endl;
    cout << cadena << endl;
    cout << "Espacios en blanco: " << espaciosEnBlanco << endl;
}

int main() {
    string cadena;
    getline(cin, cadena);

    separarPalabras(cadena);

    return 0;
}
