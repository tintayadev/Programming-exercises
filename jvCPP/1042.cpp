#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        double t, v;
        cin >> t >> v;
        double d = t * v;
        cout.setf( ios::fixed );
        cout<<setprecision(3);
        cout << d << endl;
    }
    return 0;
}