#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,earn=0;
    cin >> n >> m;

    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a.begin(),a.end());

    for(int i=0;i<m;i++){
        if(a[i]<0)
            earn-=a[i];
    }
    cout << earn << endl;

    return 0;
}