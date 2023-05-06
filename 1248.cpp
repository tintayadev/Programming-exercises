#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double suma = 0.0000;
    cin >> n;
    while(n>0){
        suma += 1./n;
        n--;
    }
    cout.setf( ios::fixed );
    cout<<setprecision( 4);
    cout << suma << endl;
    return 0;
}