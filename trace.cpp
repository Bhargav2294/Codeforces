#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define l double
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
    ll n;
    cin >> n;

    vector<l> v(n);

    fi(0,n){
        cin >> v[i];
    }

    sort(v.begin(),v.end());    
    l ans=0;

    for(int i=0;i<n;i++){
        l temp=v[i]*v[i];
        if(i%2==0){
            ans+=temp;
        }
        else{
            ans-=temp;
        }
    }

    cout << (3.1415926536)*(abs(ans)) << endl;
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
