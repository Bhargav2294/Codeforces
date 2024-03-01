#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long s;
        cin >> s;

        long long ans = 0;

        if (s % 9 == 0)
        {
            ans = s + s / 9 - 1;
            cout << ans << endl;
        }
        else
        {
            ans = s + s / 9;
            cout << ans << endl;
        }
    }
    return 0;
}
