// Chipher Shipher
// https://codeforces.com/contest/1840/problem/A

#include "iostream"

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string ans, s;
        cin >> s;
        for (int i= 0; i < n; i++) {
            ans.push_back(s[i]);
            int tmp = i + 1;
            while (tmp < n - 1 and s[tmp] != s[i]) {
                tmp++;
            }
            i = tmp;
        }
        cout << ans << endl;
    }
    return 0;
}
