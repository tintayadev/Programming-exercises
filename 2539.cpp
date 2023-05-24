#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=5; i>=1; i--){
        cnt += int(n/i);
        n = n % i;
    }
    cout << cnt << endl;
    return 0;
}