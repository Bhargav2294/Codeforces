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
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
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

    vector<int> a(n);
    vector<int> a1, b1;
    fi(0, n)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            a1.pb(a[i]);
        else
            b1.pb(a[i]);
    }
    bool check = true;
    for (int i = 1; i < a1.size(); i++)
    {
        if (a1[i - 1] > a1[i]){
            check = false;
            break;
        }
    }
    for (int i = 1; i < b1.size(); i++)
    {
        if (b1[i - 1] > b1[i]){
            check = false;
            break;
        }
    }
    if(check==true){yes;}
    else{no;}
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1; // For single test case
    cin >> t;//For multiple test cases
    while (t--){
        solve();
    }

    return 0;
}
