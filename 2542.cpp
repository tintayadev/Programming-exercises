#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    int cnt=0;
    while(t--){
        string cad;
        cin >> cad;
        if(cad.find('+') != string::npos){
            cnt++;
        }else{
            cnt--;
        }
    }
    cout << cnt<< endl;
    return 0;
}