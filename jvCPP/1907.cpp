// Reemplazar todas las ocurrencias
// https://jv.umsa.bo/problem.php?id=1907
#include <iostream>
#include <string>

using namespace std;

int main() {
    int num_casos;
    cin >> num_casos;

    cin.ignore();

    for (int i = 0; i < num_casos; i++) {
        string cadena_original, buscar, reemplazar;
        getline(cin, cadena_original);
        cin >> buscar >> reemplazar;
        size_t pos = 0;
        while ((pos = cadena_original.find(buscar, pos)) != string::npos) {
            cadena_original.replace(pos, buscar.length(), reemplazar);
            pos += reemplazar.length();
        }
        cout << cadena_original << endl;
        cin.ignore();
    }
    return 0;
}