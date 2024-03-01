#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    //cin >> t;

    while(t--){
        char c;
        cin >> c;

        string s;
        cin >> s;

        string a="qwertyuiopasdfghjkl;zxcvbnm,./";

        string ans;
        for(int i=0;i<s.length();i++){
            int index=a.find(s[i]);
            if(c=='R')
                ans+=a[index-1];
            else
                ans+=a[index+1];
        }
        cout << ans << endl;
    }
    return 0;
}
