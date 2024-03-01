#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,b,d,a=0,ans=0;
    cin >> n >> b >> d;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]<=b){
            a += v[i];
            if(a>d){
                ans++;
                a=0;
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}

