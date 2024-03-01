#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        unordered_map<char, int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }

        int count = 0;
        for(auto it=m.begin();it!=m.end();it++){
            if (it->second%2!=0)
                count++;
        }

        if(k>=count && k<=n)
            cout << "YES\n";
        else{
            if(count-k==1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}