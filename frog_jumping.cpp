#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b,k,ans=0;
        cin >> a >> b >> k;

        if(k%2==0){
            ans=(k/2)*a-(k/2)*b;
            cout << ans << endl;
        }
        else{
            ans=(k/2+1)*a-(k/2)*b;
            cout << ans << endl;
        }
    }
    return 0;
}
