// Binary Cafe
// https://codeforces.com/contest/1840/problem/B

#include "bits/stdc++.h"
#include "iostream"

using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        // Since 2^k <= n for valid so taking log base 2
        // on both sides 
        if(log2(n) < k){
            cout << n + 1 << endl;
        }else{
            cout << (int)pow(2, k) << endl;
        }
    }
    return 0;
}