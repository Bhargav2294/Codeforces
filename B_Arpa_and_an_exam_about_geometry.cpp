#include <bits/stdc++.h>
#include <math.h>
// #_______________________________________________________________#
using namespace std;
#define ll long long int
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
    ll a1,a2,b1,b2,c1,c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    //int slopeab=(b2-a2)/(b1 - a1);
    //int slopebc=(c2-b2)/(c1 - b1);

    ll ab = (b1 - a1) * (b1 - a1) + (b2 - a2) * (b2 - a2);
    ll bc = (c1 - b1) * (c1 - b1) + (c2 - b2) * (c2 - b2);

    if ((b2-a2)*(c1-b1)==(c2-b2)*(b1-a1) || ab!=bc)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1; // For single test case
    // cin >> t;  // For multiple test cases
    while (t--)
    {
        solve();
    }

    return 0;
}
