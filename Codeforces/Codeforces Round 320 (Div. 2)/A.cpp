#include <iostream>
using namespace std;

int main(){
    long int n, ans;
    cin >> n;

    if(n ==1 or n %2 ==0){
        cout << 1 << endl;
    }else{
        cout << 2 << endl;
    }
    return 0;
}