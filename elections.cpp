#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    map<int,int> m1;

    while(m--){
        vector<int> a(n);

        for(int i=0;i<n;i++)
            cin >> a[i];

        auto index=distance(a.begin(),max_element(a.begin(),a.end()));

        m1[index]++;
    }
    int winner=-1,maxcity= 0;
    for(auto it=m1.begin();it!=m1.end();it++){
        if(it->second>maxcity){
            maxcity=it->second;
            winner=it->first;
        }
        else if(it->second==maxcity && it->first<winner)
            winner=it->first;
    }

    cout << winner+1 << endl;
    return 0;
}
