#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<long long> a(n),b(n);

        for(int i=0;i<n;i++)
            cin >> a[i];

        for(int i=0;i<n;i++)
            cin >> b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        long long cnt1=0,cnt2=0;

        for(int i=0;i<n;i++){
            cnt1+=a[0]+b[i];
            cnt2+=b[0]+a[i];
        }
        cout << min(cnt1,cnt2) << endl;
    }
    return 0;
}