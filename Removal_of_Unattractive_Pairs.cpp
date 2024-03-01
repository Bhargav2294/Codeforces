/*--------------------------------------Radhe_Radhe-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> freq(26,0);

        for(auto it : s)
            freq[it-'a']++;

        int mx=0,sum=0;
        for(int i = 0; i < 26; i++){
            mx=max(mx,freq[i]);
            sum+=freq[i];
        }
        sum-=mx;
        int ans=0;

        if(n & 1){
            ans++;
            mx--;
        }
        ans+=(max(0,mx - sum));
        cout << ans << endl;
    }
    return 0;
}
// stack<char> a;

// for (char c : s)
// {
//     if (!a.empty() && a.top() != c)
//         a.pop();
//     else
//         a.push(c);
// }

// cout << a.size() << endl;