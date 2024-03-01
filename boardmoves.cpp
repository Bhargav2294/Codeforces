#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t=1;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;
        n=n/2;
        ll ans =(n*(n + 1)*(2*n + 1))/6;
        cout << ans * 8 << endl;
    }

    return 0;
}
