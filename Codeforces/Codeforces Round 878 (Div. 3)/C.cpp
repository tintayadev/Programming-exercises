// Ski resort
// https://codeforces.com/contest/1840/problem/C

#include "iostream"
#include "bits/stdc++.h"
#include "vector"
using namespace std;

int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        int n,k,q;
        cin>>n>>k>>q;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        long long v = 0;
        int c = 0;

        for (int j=0;j<a.size();j++) {
            if (a[j] <= q) {
                c++;
            } else {
                c = 0;
            }

            if (c >= k) {
                v += c - k + 1;
            }
        }

        cout<< v <<endl;
    }

    return 0;
}