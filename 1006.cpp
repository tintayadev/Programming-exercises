#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++){
        string txt;
        cin >> txt;
        int sw=0;
        for (int i = 0; i < txt.size(); i++)
        {
            if(txt[i] != ' '){
                if(sw==0){
                    if(islower(txt[i])){
                        cout << (char) (txt[i] - 32);
                    }else{
                        cout << (char) (txt[i]);
                    }
                    sw++;
                }else{
                    if(islower(txt[i])){
                        cout << (char) (txt[i]);
                    }else{
                        cout << (char) (txt[i] + 32);
                    }
                    sw--;
                }
            }else{
                cout << " ";
            }
            cout << endl;
        }
        

    }
    

    return 0;
}