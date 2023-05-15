#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string cad;
    cin >> cad;
    string cadMay;
    string cadMin;
    int cntMay = 0;
    int cntMen = 0;
    for (int i = 0; i < cad.size(); i++)
    {
        if(islower(cad[i])){
            cntMen++;
            
        }else{
            cntMay++;
        }
        cadMin = cadMin + (char)tolower(cad[i]);
        cadMay = cadMay + (char)toupper(cad[i]);
    }
    if(cntMen > cntMay){
        cout << cadMin << endl;
    }else{
        cout << cadMay << endl;
    }
    
    return 0;
}