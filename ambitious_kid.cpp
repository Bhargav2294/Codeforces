#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    //cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n),b(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
            b[i]=abs(a[i]);
        }
        sort(b.begin(),b.end());
        cout << b[0] << endl;
    }
    return 0;
}