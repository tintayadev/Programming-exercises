// Series reto 03
// https://jv.umsa.bo/problem.php?id=1901

#include "iostream"
using namespace std;
int main(){

    int cases;
    cin >> cases;

    while(cases--){
        int i = 1;
        int cnt = 0;
        int n, k;
        cin >> n >> k;
        while(cnt < n){
            for (int j = 0; j < k; j++){
                if(cnt < n){
                    cout << i << " ";
                    cnt +=1;
                }   
            }
            i += 2;
        }
        cout << endl;
    }
    return 0;
}
