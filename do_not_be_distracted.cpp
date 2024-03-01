#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    cin >> t;

    while(t--)
    {
        int n;
        bool a=true;
        cin >> n;

        string s;
        cin >> s;

        unordered_map<char, int> m;

        for(int i=0;i<n;i++){
            m[s[i]]++;
            if(m[s[i]]>1 && s[i-1]!=s[i])
            {
                a=false;
                break;
            }
        }

        if(a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }

    return 0;
}