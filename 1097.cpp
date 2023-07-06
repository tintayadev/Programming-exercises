#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>
#include <unordered_set>

using namespace std;

const int MAX_N = 1000000;

vector<int> generate_primes(int n) {
    bitset<MAX_N + 1> primes;
    primes.set();
    primes[0] = primes[1] = 0;
    int sqrtN = static_cast<int>(sqrt(n));

    for (int i = 2; i <= sqrtN; ++i) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = 0;
            }
        }
    }

    vector<int> primeNumbers;
    for (int i = 2; i <= n; ++i) {
        if (primes[i]) {
            primeNumbers.push_back(i);
        }
    }

    return primeNumbers;
}

int decode_enigma(const vector<int>& primes, int Y) {
    unordered_set<int> factors;
    int x = Y;

    for (int prime : primes) {
        if (prime * prime > x) {
            break;
        }
        if (x % prime == 0) {
            while (x % prime == 0) {
                factors.insert(prime);
                x /= prime;
            }
        }
    }

    if (x > 1) {
        factors.insert(x);
    }

    int sum = 0;
    for (int factor : factors) {
        sum += factor;
    }

    return sum;
}

int main() {
    int T;
    cin >> T;
    vector<int> primes = generate_primes(static_cast<int>(sqrt(MAX_N)));

    while (T--) {
        int Y;
        cin >> Y;
        int X = decode_enigma(primes, Y);
        cout << X << "\n";
    }

    return 0;
}
