#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,count=0;
        cin >> n;

        vector<int> a(n);

        for(int i=0;i<n;i++)
            cin >> a[i];

        sort(a.begin(),a.end());

        for(int i=1;i<n-1;i++){
            if(a[i]==a[i-1] && a[i]==a[i+1]){
                cout << a[i] << endl;
                count++;
                break;
            }
        }

        if(count!=1)
            cout << -1 << endl;
    }
    return 0;
}