// GUSANILLO
// https://jv.umsa.bo/problem.php?id=2571

#include "iostream"
#include "vector"

using namespace std;

int contar(int rama, int descanso, int hojas){
    int cnt = 0;
    int i = 0;
    for(;;){
        if(i>rama){
            return cnt;
        }
        if(i%hojas == 0) cnt++;
        i += descanso;
    }
}

int main(){
    while(true){
        int r, d, h;
        cin >> r >> d >> h;
        if (r == 0 && d== 0 && h== 0) break;
        cout << contar(r, d, h)<< endl;
    }
}