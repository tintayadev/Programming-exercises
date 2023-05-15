#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    cin.ignore();
    for (int i = 0; i < cases; i++){
        string txt;
        getline(cin, txt);
        int j = 0;
        int sw = 1;
        while(j < txt.size()){
            if(' ' != (char) txt[j]){
                if(sw == 1){
                    cout << (char) toupper(txt[j]);
                    sw = 0;
                }else{
                    cout << (char) tolower(txt[j]);
                    sw = 1;
                }
            }else{
                cout << (char) txt[j];
            }
            
            j++;
        }
        cout << endl;
        
    }
    return 0;
}