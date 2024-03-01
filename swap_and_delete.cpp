#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;

    int n = s.size(), c1 = 0, c0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            c1++;
        else
            c0++;
    }
    for (int i = 0; i < n; i++)
    {

        if (s[i] == '1')
        {
            if (c0 == 0)
            {
                cout << n - i << endl;
                return;
            }
            c0--;
        }
        else
        {
            if (c1 == 0)
            {
                cout << n - i << endl;
                return;
            }
            c1--;
        }
    }

    cout << 0 <<endl;
}

int main()
{
    int t=1;
    cin >> t;

    while (t--)
    {
        solve();
    }
        
    return 0;
}