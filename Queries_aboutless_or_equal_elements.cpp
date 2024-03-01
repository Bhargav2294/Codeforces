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
    int n,m;
    cin >> n >> m;

    vector<int> a(n),b(m),v;

    fi(0,n){
        cin >> a[i];
    }
    fi(0,m){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++){
        //int cnt = binarysearch(a, 0,n,b[i]);
        int cnt=upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        v.pb(cnt);
    }
    fi(0,m){
        cout <<  v[i] << " ";
    }
    
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1; // For single test case
    //cin >> t;  // For multiple test cases
    while (t--)
    {
        solve();
    }

    return 0;
}
// bool binarysearch(int a[], int s, int e, int k)
// {

//     if (s > e)
//         return false;

//     int mid = s + (e - s) / 2;

//     if (a[mid] == k)
//         return mid;

//     if (a[mid] < k)
//     {
//         return binarysearch(a, mid + 1, e, k);
//     }
//     else
//     {
//         return binarysearch(a, s, mid - 1, k);
//     }
// }