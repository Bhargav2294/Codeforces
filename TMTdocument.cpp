#include <bits/stdc++.h>
#include <math.h>
// #_______________________________________________________________#
using namespace std;
#define int long long int
#define mod 1000000007
#define ff(l, n) for (int i = l; i < n; i++)
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

void solve(){
    int n,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='T')
            cnt1++;
        else
            cnt2++;

        if(cnt2>cnt1){cout << "NO" << endl;
            return;}
    }
    for(int i=n-1;i>=0;i--)
    {
        if (s[i] == 'T')
            cnt3++;
        else
            cnt4++;
            
        if (cnt4>cnt3)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if(cnt1==(cnt2*2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
