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
vector<int> v(200001, 0);

void solve()
{
    int n;
    cin >> n;

    cout << v[n] << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int i = 1; i <=200001; i++)
    {
        int x = i;
        while (x != 0)
        {
            v[i] += x % 10;
            x /= 10;
        }
        v[i] += v[i - 1];
    }
    int t = 1; // For single test case
    cin >> t;  // For multiple test cases
    while(t--){
        solve();
    }
    return 0;
}

// int x = n / 9;
// int y = n % 9;

// int z = 45 * x;
// int a = 0;
// for (int i = 1; i <= y; i++)
// {
//     a += i;
// }
// int ans = z + a;
// cout << ans << endl;