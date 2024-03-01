#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int dif=abs(a-b)/2;

        if(abs(a-b)%2!=0)
            dif++;

        int ans=dif/c;

        if(dif%c!=0)
            ans++;

        cout << ans << endl;
    }
    return 0;
}