#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int ans= 0, n;
    cin >> n;
    string x;

    for(int i=1;i<=n;i++)
    {
        cin >> x;
        if (x[1]== '+')
            ++ans;
        else
            --ans;
    }

    cout << ans;
    return 0;
}
