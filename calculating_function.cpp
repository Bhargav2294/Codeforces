#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long n,f=0;
    cin >> n;
    
    //time limit exceeded
    // for (int i = 1; i <= n; i++)
    // {
    //     if(i%2==1)
    //         f=f-i;
    //     else
    //         f=f+i;
    // }

    if (n % 2 == 0)
    {
        f = n / 2;
    }
    else
    {
        f = -(n + 1) / 2;
    }

    cout << f;
    return 0;
}