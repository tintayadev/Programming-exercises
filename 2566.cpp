#include "iostream"
using namespace std;
void new_print(string i, int n){
    string cad ="";
    for (int j = 0; j < n; j++){
        cad += i+" ";
    }
    cad.pop_back();
    cout << cad << endl;
}

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n/2; i++){
        new_print(to_string(i), n);
    }
    if (n%2 == 1){
        new_print(to_string((n/2)+1), n);
    }
    
    for (int i = n/2; i > 0; i--){
        new_print(to_string(i), n);
    }
    return 0;
}