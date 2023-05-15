#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n = 1001;
    vector<int> l;
    for (int i = 0; i < n; i++) {
        l.push_back(i * (i+1) / 2);
    }

    int t;
    cin >> t;
    while(t--){
        int p;
        cin >> p;

        vector<int>::iterator it = find(l.begin(), l.end(), p);
        if (it != l.end()) {
            int index = distance(l.begin(), it);
            cout << "Llegas al cuadrado " << index << endl;
        } else {
            cout << "No llegas" << endl;
        }
    }
    return 0;
}