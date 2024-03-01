#include <bits/stdc++.h>
#include <math.h>
// #_______________________________________________________________#
using namespace std;
#define ll long long int
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
    ll n,cnt=0;
    cin >> n;

    ll a,x;
    vector<ll> a1,a2,a3;
    while(n--){
        cin >> a >> x;
        if(a==1){
            a1.pb(x);
        }
        if(a==2){
            a2.pb(x); 
        }
        if(a==3){
            a3.pb(x);
        }
    }
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());

    ll n1 = a1.size();
    ll x1 = a1[n1 - 1];
    ll y1 = a2[0];

    for(ll i=0;i<a3.size();i++){
        if(a3[i]>=x1 && a3[i]<=y1){
            cnt++;
        }
    }

    if(y1-x1<0)
        cout << 0 << endl;
    else
        cout << y1-x1-cnt+1 << endl;

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
// for(ll i=x1;i<=y1;i++){
//     ll flag=0;
//     for(int j=0;j<a3.size();j++){
//         if(i==a3[j]){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         cout << i << endl;
//         return;
//     }
// }
// cout << 0 << endl;