#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, time = 240;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        time -= i * 5;

        if (time < m)
        {
            cout << i - 1;
            break;
        }
    }
    if (time >= m)
    {
        cout << n;
    }
    return 0;
}