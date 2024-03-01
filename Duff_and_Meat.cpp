#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> p[i];
    }
    int mi = p[0];
    int sum = 0;
    sum = sum + (a[0] * p[0]);
    for (int i = 1; i < n; i++)
    {
        if (mi < p[i])
        {
            sum = sum + (a[i] * mi);
        }
        else
        {
            mi = min(mi, p[i]);
            sum = sum + (a[i] * mi);
        }
    }
    cout << sum;
}