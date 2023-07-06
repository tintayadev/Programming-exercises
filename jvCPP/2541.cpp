#include <iostream>
#include <string>

using namespace std;

int main(){
    string nom;
    cin >> nom;

    int cnt = 0;
    string cad = "";
    for (int i = 0; i < nom.size(); i++)
    {
        if(cad.find(nom[i]) == string::npos){
            cnt++;
            cad = cad + (char) nom[i];
        }
    }
    if(cnt % 2 == 0){
        cout << "CHATEA CON ELLA!" << endl;
    }else{
        cout << "IGNORARLO!" << endl;
    }
    
    return 0;
}