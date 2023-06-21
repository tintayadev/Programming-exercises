// Estara? "O" No Estara?
// https://jv.umsa.bo/problem.php?id=2400
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    istringstream iss(input);
    string elem;
    vector<string> cad;

    while (getline(iss, elem, ' ')) {
        if (elem.find('o') != string::npos) {
            size_t commaPos = elem.find(',');
            cad.push_back(elem.substr(0, commaPos));
        }
    }

    for (const string& elem : cad) {
        cout << elem << endl;
    }

    return 0;
}
