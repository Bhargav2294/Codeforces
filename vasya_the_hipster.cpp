#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    cout << min(m,n) << " " << (max(m,n)-min(m,n))/2;

    return 0;
}