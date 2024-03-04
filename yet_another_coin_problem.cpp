#include <bits/stdc++.h>
#include <math.h>
// #_______________________________________________________________#
using namespace std;
#define int long long int
#define mod 1000000007
#define fi(l, n) for (int i = l; i < n; i++)
#define rr return
#define pb push_back
#define p(x) cout << x << endl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define debug(x) cerr << #x << ':' << x << endl;
// #______________________factorial_____________________________#
int fact(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
// #__________________________gcd_______________________________#
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
// #__________________________lcm_______________________________#
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
//_____________________________________________________Bhargav_Sangani___________________________________________________________________

void solve()
{
    int n;
    cin >> n;

    vector<int> v{0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3};

    if (n < 15)
        cout << v[n % 15] << endl;
    else if (n % 15 == 5)
        cout << n / 15 + 1 << endl;
    else if (n % 15 == 8)
        cout << n / 15 + 2 << endl;
    else
        cout << n / 15 + v[n % 15] << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1; // For single test case
    cin >> t;  // For multiple test cases
    while (t--)
    {
        solve();
    }

    return 0;
}

// int n, ans = 0;
// cin >> n;

// ans += n / 15;
// if (n % 15 == 0)
// {
//     cout << ans << endl;
//     return;
// }
// else
// {
//     n = n % 15;
// }

// ans += n / 10;
// if (n % 10 == 0)
// {
//     cout << ans << endl;
//     return;
// }
// else
// {
//     n = n % 10;
// }

// ans += n / 6;
// if (n % 6 == 0)
// {
//     cout << ans << endl;
//     return;
// }
// else
// {
//     n = n % 6;
// }

// ans += n / 3;
// if (n % 3 == 0)
// {
//     cout << ans << endl;
//     return;
// }
// else
// {
//     n = n % 3;
// }
// ans += n
//            cout
//        << ans << endl;
// return;
