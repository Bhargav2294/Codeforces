#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        // if(a-b==0)
        //     cout << c << endl;
        // else if(a-c==0)
        //     cout << b << endl;
        // else if(b-c==0)
        //     cout << a << endl;
        cout << (a^b^c) << endl;
        
    }
    return 0;
}
