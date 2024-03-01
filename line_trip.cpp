#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int t=1,n,x;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;

        vector<int> v1(n);
        vector<int> v2(n+2);

        for(int i=0;i<n;i++){
            cin >> v1[i];
            if(i>0)
                v2.pb(v1[i]-v1[i-1]);
        }
        v2.pb(v1[0]);
        v2.pb(2*abs(x-v1[n-1]));

        auto mx=max_element(v2.begin(),v2.end());
        cout << *mx << endl;
    }
    return 0;
}