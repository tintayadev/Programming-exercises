#include <iostream>
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
        /*
        cout << "N: "<< n;
        for (int i = 0; i < n; i++)
        {
            cout << numbers[i] << " - ";
        }
        cout << "Efec: "<< efectivo << endl;*/
        
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