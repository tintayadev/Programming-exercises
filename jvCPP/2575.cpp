// Gripe-143
// https://jv.umsa.bo/problem.php?id=2575

#include "iostream"

using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int nums[n];
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    double suma = 0.0;
    for (int i = 0; i < n-k+1; i++){
        int s = 0.0;
        for (int j = i; j < k+i; j++){
            s += nums[j];
        }
        suma += double(s)/double(k);
    }
    cout << int(suma) << endl;
    return 0;
}