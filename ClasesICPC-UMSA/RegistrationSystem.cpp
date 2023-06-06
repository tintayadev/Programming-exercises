#include "bits/stdc++.h"
#include "iostream"
#include "map"

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> nums;

    /*
    map<string, int>::iterator it = nums.begin();


    while (it != nums.end())
    {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
        ++it;
    }
    cout << nums["a"] << endl;
    cout << nums["ab"] << endl;
    */
    
    for(int i = 0; i<n; i++){
        int sw = 0;
        string name;
        cin >> name;
        if(!nums[name]){
            nums[name] = 1;
            cout << "OK" << endl;
        }else{
            nums[name] += 1;
            cout << name <<nums[name]-1 << endl;
        }
    }
    return 0;
}