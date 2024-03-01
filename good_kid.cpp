#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,product=1;
        cin >> n;

        vector<int>a(n);

        for(int i=0;i<n;i++) cin >> a[i];

        auto m=min_element(a.begin(),a.end());

        *m+=1;

        for(int i=0;i<n;i++) product*=a[i];

        cout << product << endl;
    }
    return 0;
}