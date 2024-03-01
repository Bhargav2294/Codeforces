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
    vector<int> v(n);
    int sum = 0;
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += abs(v[i]);
        if (v[i] % 3 == 1)
            cnt1++;
    }

    if (sum % 3 == 0)
    {
        cout << 0 << endl;
    }
    else if ((sum % 3 == 1 && cnt1 != 0) || sum % 3 == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
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

// int n, sum = 0, cnt2 = 0, cnt1 = 0, sum2 = 0;
// cin >> n;

// vector<int> a(n);

// for (int i = 0; i < n; i++)
// {
//     cin >> a[i];
//     sum += abs(a[i]);

//     if (a[i] % 3 == 2)
//     {
//         cnt2++;
//     }
//     if (a[i] % 3 == 1)
//     {
//         cnt1++;
//     }
// }

// if (sum % 3 == 0)
// {
//     cout << 0 << endl;
//     return;
// }
// if (sum % 3 == 2)
// {
//     cout << 1 << endl;
//     return;
// }
// if (n == 1)
// {
//     if (a[0] % 3 == 0)
//     {
//         cout << 0 << endl;
//         return;
//     }
//     else
//     {
//         cout << 1 << endl;
//         return;
//     }
// }
// if (cnt2 % 3 == 0 || cnt1 % 3 == 0)
// {
//     if (cnt2 % 3 == 0)
//     {
//         if (cnt1 % 3 == 1)
//         {
//             cout << 1 << endl;
//             return;
//         }
//         else
//         {
//             cout << 2 << endl;
//             return;
//         }
//     }
//     if (cnt1 % 3 == 0)
//     {
//         if (cnt2 % 3 == 1)
//         {
//             cout << 1 << endl;
//             return;
//         }
//         else
//         {
//             cout << 2 << endl;
//             return;
//         }
//     }
// }
// int ans = abs(cnt2 - cnt1);
// if (ans % 3 == 0)
// {
//     cout << 0 << endl;
//     return;
// }
// if (cnt2 > cnt1)
// {
//     if (ans % 3 == 2)
//     {
//         cout << 2 << endl;
//         return;
//     }
//     else
//     {
//         cout << 1 << endl;
//         return;
//     }
// }
// else
// {
//     if (ans % 3 == 2)
//     {
//         cout << 2 << endl;
//         return;
//     }
//     else
//     {
//         cout << 1 << endl;
//         return;
//     }
// }