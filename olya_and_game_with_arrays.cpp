#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a,b;
    
        while(n--){
            ll x;
            cin >> x;
            vector<ll> v(x);
            //unordered_set<int> v1;
            for(ll i=0;i<x;i++){
                cin >> v[i];
                //v1.insert(v[i]);
            }
            sort(v.begin(),v.end());
            //auto it = v1.begin();
            a.push_back(v[0]);
            //it++;
            b.push_back(v[1]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll sum=a[0];
        for(ll i=1;i<b.size();i++){
            sum+=b[i];
        }
        cout << sum << endl;        
    }
    return 0;
}
