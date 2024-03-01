/*--------------------------------------Radhe_Radhe-----------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int mn=min({a,b,c});

        if(a+b+c-mn>=10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}