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

void solve(){
    int n,cnt=0;
    cin >> n;
    vector<int> v1(n+2),v2(n+2),diff(n+2,0);
    for(int i=1;i<=n;i++){
        cin >> v1[i];
    }
    for(int i=1;i<=n;i++){
        cin >> v2[i];
        diff[i]=v2[i]-v1[i];
    }
    /*----aagal 0 rakhvanu karan()----
     1 0 1 vala case ne handle karva mate jo hu aagal
    0 na rakhu to count 2 thay aetle 1 position par 0 karta vadhu  diff aave te 
    condition ne handle karva 
    ------aagal 0 na rakhu  and pachal rakhu----
    jyare 1 element hoy and diff positive hoy tyare wrong ans aave
    ------pachal 0 rakhvanu karan(aagal rakhu and pachal no rakhu)----
    main reason out of bound ne handle karva and specially 1 element hoy and 
     me 0 mi position ne me khali rakhi che and 1 thi data store karyo che
    hu check karva mate to hamesha 0 thi chalu karu 1 element  vali 
    condition ne handle karva mate 
    jyare element 1 hase and positive hase tyare last ma 0 nay hoy
    to out of bound thay jase
    and i=0 and i<n rakhu out of bound ne handle karva to 
    jyare n=1 hoy tyare wrong ans aave karn ke 1 mi position ae jay ne check 
    nay thay karn jo  example tarike diff -1 hase tyare locho thase aa condition 
    ne handle karva hu i <=n nakhis aetle out of bound thase jene handle 
    karava me pachal 0 nakhi didho     */
    for(int i=0;i<=n;i++){
        if(diff[i]<0){
            cout << "NO" << endl;
            return;
        }
        if(diff[i]!=diff[i+1]){
            cnt++;
        }
    }
    if(cnt<3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; // For single test case
    cin >> t;  // For multiple test cases
    while (t--)
    {
        solve();
    }

    return 0;
}
