#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int count=0;

        string a="codeforces";

        for(int i=0;i<10;i++){
            if(s[i]!=a[i])
                count++;
        }
        
        cout << count << endl;
    }
    return 0;
}