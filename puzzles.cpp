#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> p(m);
    for(int i=0;i<m;i++)
        cin >> p[i];

    sort(p.begin(),p.end());

    int min1=p[n-1]-p[0];
    for(int i=1;i<=m-n;i++)
        min1=min(min1,p[i+n-1]-p[i]);

    cout << min1 << endl;
    return 0;
}
