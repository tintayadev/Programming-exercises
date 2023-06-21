// Ven primo
// https://jv.umsa.bo/problem.php?id=2401

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool es_primo(int num) {
    if (num < 2)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    int limite = static_cast<int>(sqrt(num)) + 1;
    for (int i = 5; i < limite; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> ls;
    while (ls.size() < n) {
        int num;
        cin >> num;
        if (es_primo(num)) {
            ls.push_back(num);
        }
    }
    sort(ls.begin(), ls.end());
    for (int elem : ls) {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}