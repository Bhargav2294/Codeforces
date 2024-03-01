#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a,b,c,n;
        cin >> a >> b >> c >> n;

        int x=max({a,b,c});
        int z=min({a,b,c});
        int y=a+b+c-x-z;

        if ((n-(x-y)-(x-z))%3==0 && n-(x-y)-(x-z)>=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}