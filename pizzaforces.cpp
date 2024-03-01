/*--------------------------------------Radhe_Radhe-----------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long a=n/6,b=n%6;

        if(n<=6)
            cout << 15 << endl;
        else if(b==0)
            cout << a*15 << endl;
        else if(b<=2)
            cout << (a*15)+5 << endl;
        else if(b<=4)
            cout << (a*15)+10 << endl;
        else{
            a++;
            cout << a*15 << endl;
        }
    }
    return 0;
}