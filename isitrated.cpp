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
    int n, a, b, flag = 0;
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.pb({a, b});
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i].first != v[i].second)
        {
            cout << "rated" << endl;
            return;
        }
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        
        if (v[i].first < v[i + 1].first)
        {
            cout << "unrated" << endl;
            return;
        }
    }
    cout << "maybe" << endl;
    /*11.jyare rating badlaye tyare sure contest rated j hase
    22.jyare rating nay badlay pan standing badlay means(standing badlanu means 
    que solve thyo j che toy rating no badlanu)means unrated j che
    pan jyare rating and standing na badlay means 2 possibility 
    1. rated che pan koi thi que solve no thyo aetle rating and standing no badlanu
    2.unrated che means question solve thyo pan standing vise aetle question 
    solve karva chhata pan standing no badlanu and rating to already notu j badlanu 
    */
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
