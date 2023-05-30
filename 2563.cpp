#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string cad;
    cin >> cad;
    int cnt = 0;
    for(int i=1; i < n; i++){
        if(cad[i-1] == cad[i]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}