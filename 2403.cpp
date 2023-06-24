// Sucesion Collatz
// https://jv.umsa.bo/problem.php?id=2403

#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int collatz_steps(int n, unordered_map<int, int>& cache) {
    if (cache.count(n))
        return cache[n];

    int original_n = n;
    int cnt = 0;
    unordered_set<int> visited;

    while (true) {
        visited.insert(n);

        if (n % 2 == 0)
            n = n / 2;
        else
            n = (n * 3) + 1;

        cnt++;

        if (n == 1 || n == -1)
            break;

        if (visited.count(n)) {
            cnt = -1;
            break;
        }
    }

    cache[original_n] = cnt;
    return cnt;
}

int main() {
    int t;
    cin >> t;
    unordered_map<int, int> cache;

    while (t--) {
        int n;
        cin >> n;
        int pasos = collatz_steps(n, cache);
        cout << pasos << endl;
    }

    return 0;
}
