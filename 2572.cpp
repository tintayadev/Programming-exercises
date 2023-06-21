// # Promedio de Edades
// # https://jv.umsa.bo/problem.php?id=2572

#include "bits/stdc++.h"
#include "iostream"
#include "vector"
#include "iomanip"

using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--) {
        vector<int> aux;
        string cad;
        cin >> cad;
        cad += "_";
        int i = 0;

        while (i < cad.length() - 1) {
            if (cad[i] == '0') {
                // Do nothing
            } else if (cad[i] == '1' && cad[i + 1] == '0') {
                aux.push_back(10);
                i++;
            } else {
                if (isdigit(cad[i])) {
                    aux.push_back(cad[i] - '0');
                }
            }
            i++;
        }

        double average = static_cast<double>(accumulate(aux.begin(), aux.end(), 0)) / aux.size();
        cout << fixed << setprecision(2) << average << endl;
    }
    return 0;
}
