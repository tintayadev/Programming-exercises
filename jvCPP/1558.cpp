#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    while (cin >> n) {
        int numbers[n];
        for (int i=0; i < n; i++){
            cin >> numbers[i];
        }
        int s;
        cin >> s;
        int len = sizeof(numbers) / sizeof(numbers[0]);
        sort(numbers, numbers + len);
        int sum=0;
        int cnt=0;
        int i;
        for (i=0; i < n; i++){
            if(sum > s){
                break;
            }
            sum = sum + numbers[i];
        }
        cout << i-1 << endl;
    }

    return 0;
}