#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t=1;
    //cin >> t;

    while (t--)
    {
        ll n,m;
        cin >> n >> m;
        
        if(m%n!=0){
            cout << -1 << endl;
            return 0;
        }
     
        int cnt=0,x=m/n;
        while(x%2==0){
            x/=2;
            cnt++;
        }
        while(x%3==0){
            x/=3;
            cnt++;
        }
        if(x>0)
            cout << cnt << endl;
        else
            cout << -1 << endl;

    }

    return 0;
}
