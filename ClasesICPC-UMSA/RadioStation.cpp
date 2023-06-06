#include "bits/stdc++.h"
#include "iostream"
#include "map"
using namespace std;
int main(){
    int n, m;
    cin >> n;
    cin >> m;
    map<string, string> dominios;
    for(int i=0; i<n; i++){
        string dom, ip;
        cin >> dom >> ip;
        dominios[ip] = dom;
    }

    for (int i = 0; i < m; i++){
        string dom, ip;
        cin >> dom >> ip;
        ip.pop_back();
        cout <<dom << " " << ip << "; #"<< dominios[ip]<< endl;
    }
    
    //cout << "DOMINIOS =======" << endl;
    //map<string, string>::iterator it = dominios.begin();


    // while (it != dominios.end())
    // {
    //     cout << "Key: " << it->first << ", Value: " << it->second << endl;
    //     ++it;
    // }

    // for (int i = 0; i < m; i++){
    //     string dom, ip;
    //     cin >> dom >> ip;
    //     ip.pop_back();
    //     it = dominios.begin();
    //     int sw = 0;
    //     while (it != dominios.end()){
    //         //cout << dominios[it->first] << "___COMPARA___" << ip << endl;
    //         //cout << ip << " " << it->second << endl;
    //         //cout << dom << " " << it->first << endl;
    //         if(ip == (it->second)){
    //             sw = 1;
    //             break;
    //         }
    //         // if (dominios[it->first].find(ip)){
    //         //     cout << "RESP: "<<dom << " " << ip << " #" << it->first << endl;
    //         //     break;
    //         // }
            
    //         //cout << "Key: " << it->first << ", Value: " << it->second << endl;
    //         ++it;
    //     }
    //     cout <<dom << " " << ip << "; #" << it->first << endl;

    // }
    
    /*
    for(int i=0; i<m; i++)
    {
        int sw=0;
        cin>>s[i];
        for(int j=0; j<i; j++)
        {
            if(s[i]==s[j])
            {
                sw=1;
                break;
            }
        }
        if(sw)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    */

    return 0;
}