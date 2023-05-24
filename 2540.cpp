#include <iostream>
#include <vector>

using namespace std;

int main() {
    int S;
    cin >> S;

    vector<vector<int> > grid(S, vector<int>(S, 0));

    char op;
    while (cin >> op) {
        if (op == '1') {
            int X, Y, A;
            cin >> X >> Y >> A;
            grid[X][Y] += A;
        } else if (op == '2') {
            int L, B, R, T;
            cin >> L >> B >> R >> T;
            int total = 0;
            for (int i = L; i <= R; i++) {
                for (int j = B; j <= T; j++) {
                    total += grid[i][j];
                }
            }
            cout << total << endl;
        } else if (op == '3') {
            break;
        }
    }

    return 0;
}
