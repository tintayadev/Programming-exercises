// //  Buscando X
// // https://jv.umsa.bo/problem.php?id=2402

// #include "iostream"

// using namespace std;

// int main(){
//     int n, k, x;
//     cin >> n >> k >> x;
//     int nums[n]; 
//     for (int i = 0; i < n; i++){
//         cin >> nums[i];
//     }

//     for (int i = 0; i < n/k; i++){
//         int sw = 0;
//         for (int j = k*i; j < k*(i+1); j++){
//             if(nums[j] == x) sw = 1;
//             if(sw == 1) break;
//         }
//         if(sw){
//             cout << x << " EXISTE EN EL SECTOR "<<(i+1)<< endl;
//         }else{
//             cout << x << " NO EXISTE EN EL SECTOR "<<(i+1)<< endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>

int main() {
    int n, k, x;
    std::cin >> n >> k >> x;

    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int sectors = n / k;
    for (int i = 0; i < sectors; i++) {
        bool found = false;
        for (int j = k * i; j < k * (i + 1); j++) {
            if (nums[j] == x) {
                found = true;
                break;
            }
        }
        if (found) {
            std::cout << x << " EXISTE EN EL SECTOR " << (i + 1) << std::endl;
        } else {
            std::cout << x << " NO EXISTE EN EL SECTOR " << (i + 1) << std::endl;
        }
    }
    return 0;
}