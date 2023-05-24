/*#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int numbers[n];
        for(int i=0; i < n; i++){
            cin >> numbers[i];
        }
        int efectivo;
        cin >> efectivo;
        //nt len = sizeof(numbers) / sizeof(numbers[0]);
        sort(numbers, numbers + n);
        int cnt =0;
        
        for(int j=n-1; j>=0;j--){
            if(efectivo % numbers[j] == 0){
                cnt += efectivo / numbers[j];
                break;
            }else{
                if(efectivo % numbers[0] != 0){
                    cnt =0;
                    break;
                }
                cnt += efectivo / numbers[j];
                efectivo = efectivo % numbers[j];
            }
        }
        if(cnt == 0){
            cout << "-1" << endl;
        }else{
            cout << cnt << endl;
        }
    }

    return 0;
}
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCoins(vector<int>& denominations, int change) {
    int n = denominations.size();
    vector<int> dp(change + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= change; i++) {
        for (int j = 0; j < n; j++) {
            if (denominations[j] <= i) {
                int subproblem = dp[i - denominations[j]];
                if (subproblem != INT_MAX && subproblem + 1 < dp[i]) {
                    dp[i] = subproblem + 1;
                }
            }
        }
    }

    return dp[change] == INT_MAX ? -1 : dp[change];
}

int main() {
    int N, m;
    while (cin >> N) {
        vector<int> denominations(N);
        for (int i = 0; i < N; i++) {
            cin >> denominations[i];
        }
        cin >> m;

        int result = minCoins(denominations, m);
        cout << result << endl;
    }

    return 0;
}
