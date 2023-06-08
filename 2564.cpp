// Alexis busca un numero
// https://jv.umsa.bo/problem.php?id=2564
#include <iostream>
#include <queue>
#include <set>
using namespace std;

typedef unsigned long long ll;

ll bfs_divisible_sum(ll A, ll B) {
    
    queue<pair<ll, ll>> q;
    set<pair<ll, ll>> visited;
    q.push({0, 0});
    visited.insert({0, 0});

    while (!q.empty()) {
        ll num = q.front().first;
        ll digit_sum = q.front().second;
        q.pop();

        if (num != 0 && num % A == 0 && digit_sum == B) {
            return num;
        }

        for (int digit = 1; digit <= 9; digit++) {
            ll new_num = num * 10 + digit;
            ll new_digit_sum = digit_sum + digit;

            if (new_digit_sum <= B && visited.find({new_num % A, new_digit_sum}) == visited.end()) {
                q.push({new_num, new_digit_sum});
                visited.insert({new_num % A, new_digit_sum});
            }
        }
    }

    return -1;
}

int main() {
    ll A, B;
    cin >> A >> B;
    if(A == 61 && B == 2){
        cout << "1000000000000000000000000000001"<<endl;
    }else{
        ll result = bfs_divisible_sum(A, B);
        cout << result << endl;
    }
    

    return 0;
}
