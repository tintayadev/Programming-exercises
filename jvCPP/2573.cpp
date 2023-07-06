// No me olvides
// https://jv.umsa.bo/problem.php?id=2573

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string aux;
    for (int i = 0; i < n; ++i) {
        string cad;
        getline(cin >> ws, cad);
        cad = cad + "X";
        for (int j = 0; j < cad.length() - 1; ++j) {
            if (isdigit(cad[j])) {
                aux += cad[j];
                if (!isdigit(cad[j + 1])) {
                    aux += " ";
                }
            }
        }
    }

    istringstream iss(aux);
    vector<int> res;
    int num;
    while (iss >> num) {
        res.push_back(num);
    }

    sort(res.begin(), res.end());

    string ans = "";
    for (const auto& x : res) {
        ans += to_string(x) + " ";
    }
    ans.pop_back();
    cout << ans <<endl;

    return 0;
}
