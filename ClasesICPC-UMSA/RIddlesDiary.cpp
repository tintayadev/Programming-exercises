/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool existe(vector<string> v, string busqueda) {
    return find(v.begin(), v.end(), busqueda) != v.end();
}

int main(){
    int n;
    cin >> n;
    vector<string> noms(n);
    vector<string> resp(n);
    for (int i = 0; i < n; i++){
        string name;
        cin >> name;
        noms.push_back(name);
        if (existe(noms, name)){
            resp.push_back("YES");
        }else{
            resp.push_back("NO");
        }
    }
    for (int i = 0; i < resp.size(); i++)
    {
        cout << resp << endl;
    }
    return 0;
}
*/
/*
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> names(n); // Vector to store the names
    vector<bool> encountered(26, false); // Vector to keep track of encountered names
    vector<string> answers(n); // Vector to store the answers

    // Read the names from input
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Process each name
    for (int i = 0; i < n; i++) {
        bool found = false;

        // Check if the name was encountered before
        for (int j = i - 1; j >= 0; j--) {
            if (names[i] == names[j]) {
                found = true;
                break;
            }
        }

        // Update the answers and encountered names
        if (found) {
            answers[i] = "YES";
        } else {
            answers[i] = "NO";
            encountered[names[i][0] - 'a'] = true;
        }
    }

    // Print the answers
    for (int i = 0; i < n; i++) {
        cout << answers[i] << endl;
    }

    return 0;
}
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    string s[110];
    cin>>n;
    for(int i=0; i<n; i++)
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
    return 0;
}