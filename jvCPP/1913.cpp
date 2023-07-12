#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[] = {1, 1, 1, 2};
    int a = 1, b = 1, c = 0;

    if (n <= 4) {
        for (int i = 0; i < n; i++) {
            cout << nums[i] << endl;
        }
    } else {
        cout << a << endl;
        int i = 1;
        while (i <= n) {
            for (int j = 1; j <= b; j++) {
                if (i >= n)
                    break;
                cout << j << endl;
                i++;
            }
            if (i >= n)
                break;

            c = a + b;
            a = b;
            b = c;
        }
    }
    return 0;
}
