#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t=1;
    cin >> t;
    while (t--){
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[i] == s[j])
                    count++;    
            }
        }
        if (count <= 2)
            cout << 4 << endl;
        else if (count == 3)
            cout << 6 << endl;
        else if (count == 6)
            cout << -1 << endl;
    }
    return 0;
}