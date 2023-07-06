#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int horas, salario;
        cin >> horas >> salario; 
        double salario_total = 0;

        if (horas <= 40) {
            salario_total = horas * salario;
        } else {
            salario_total = 40 * salario + (horas - 40) * salario * 1.5;
        }

        cout << fixed << setprecision(2) << salario_total << endl;  // Imprime el salario total con dos decimales de precisión
    }

    return 0;
}