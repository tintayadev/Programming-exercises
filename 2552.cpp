#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string txt;
    cin >> txt;
    transform(txt.begin(), txt.end(), txt.begin(), ::tolower);
    string newtxt = "";
    for(int i=0; i< txt.size(); i++){
        if(txt[i] == 'a' || txt[i]=='e' || txt[i]=='i' || txt[i]=='o' || txt[i]=='u'){
            newtxt = newtxt + "";
        }else{
            newtxt = newtxt + "." + txt[i];
        }
    }
    cout << newtxt << endl;
    return 0;
}