#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin >> n;
    vector<int> a(n+1);
    for(int i=0;i<n;i++)
        cin >> a[i];
    a[n]=0;
    if(a[0]==1)
        cnt++;
    for(int i=1;i<=n;i++){
        if(a[i]==1)
            cnt++;
        else if(a[i]==0 && a[i+1]==1 && a[i-1]==1)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}