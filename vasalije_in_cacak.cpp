#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n,k,x;
        cin >> n >> k >> x;

        if(k*(k+1)/2>x || k*(2*n-k+1)/2<x)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}