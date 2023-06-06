#include "bits/stdc++.h"
#include "iostream"
#include "map"

using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> nums;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(!nums[a]){
            nums[a] =1;
        }else{
            nums[a]++;
        }
    }
    
    map<int, int>::iterator it = nums.begin();
    int may = -1;
    int res;
    while (it != nums.end()) {
        //std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
        if((it->second) > may){
            //cout << (it->second) <<" "<< may<<endl;
            may = it->second;
        }
        ++it;
    }
    cout << may << endl;
    return 0;
}