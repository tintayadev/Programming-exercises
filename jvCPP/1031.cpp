#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    while (cin >> n) {
        int numbers[n];
        for (int i=0; i < n; i++)
        {
            cin >> numbers[i];
        }
        
        if(n==1){
            cout << numbers[0] << endl;
        }else if (n % 2 != 0){
            int len = sizeof(numbers) / sizeof(numbers[0]);
            sort(numbers, numbers + len);
            int medio = (n-1)/2;
            int mediana = numbers[medio];
            if (mediana > numbers[medio-1] && mediana < numbers[medio+1]){
                cout << mediana << endl;
            }else{
                cout << "-1" << endl;
            }
        }else{
            cout << "-1" << endl;
        }
    }

    return 0;
}