#include <iostream>

using namespace std;

int main() {
    int N, M, A;
    cin >> N >> M >> A;

    long long numLosas = ((N + A - 1) / A) * 1LL * ((M + A - 1) / A);
    cout << numLosas << endl;

    return 0;
}
