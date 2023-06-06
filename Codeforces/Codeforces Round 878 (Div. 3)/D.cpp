// Wooden Toy Festival
// https://codeforces.com/contest/1840/problem/D

#include "bits/stdc++.h"
#include "iostream"
#include "vector"
using namespace std;

int main() {
    int tt;
    cin >> tt; 
    while(tt--) {
        int n;
        cin >> n;
        vector<int> v(n); 
        for (int i = 0; i < n; i++){
            cin >>v[i];
        }
        sort(v.begin(), v.end());
        int i = 0;
        int j = 1e9 + 5;
        int mid, ans = 0;
        while (i <= j) {
            mid = i + (j - i) / 2; 
            int k, l = 0, cnt = 0;
            for (k = 0; k < n; k++) {
                if (v[k] - v[l] > 2 * mid) {
                    l = k; cnt++;
                }
            }
            if (cnt >= 3){
                i = mid + 1;
            }else{
                ans = mid, j = mid-1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}