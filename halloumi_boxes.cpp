#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
    
        if(k>=2 || is_sorted(a.begin(),a.end()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}