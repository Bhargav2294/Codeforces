#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans;

    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            // if (i>=2 && s[i-1]!='B' && s[i-2]!='U' && s[i-3]!='W')
            if(!ans.empty() && ans.back()!=' ')
                ans.push_back(' ');
        i+=2;
        }
        else
            ans.push_back(s[i]);
    }
    cout << ans << endl;
    return 0;
}
