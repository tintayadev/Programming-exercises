// Series reto 02
// https://jv.umsa.bo/problem.php?id=1900

#include "iostream"
#include "vector"
using namespace std;

int main(){
    int cases;
    cin >> cases;
    vector<int> nums = { 0, 0, 1, 1, 1, 1, 2, 2, 3, 3 };
    while(cases--){
        int t;
        cin >> t;
        if(t > nums.size()){
            for (int i = nums.size(); i < t+1; i+=2){
                if(i % 2 == 0){
                    nums.push_back(nums[i-1]+nums[i-3]);
                    nums.push_back(nums[i-1]+nums[i-3]);
                }
                else{
                    nums.push_back(nums[nums[i-1]]);
                }
            }
        }
        for (int i = 0; i < t; i++){
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}