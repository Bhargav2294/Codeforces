#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> mm(26, 0), nn(26, 0);
        for (int i=0;i<n;i++)
        {
            if ('A' <= s[i] && 'Z' >= s[i])
                mm[s[i] - 'A']++;
            else
                nn[s[i] - 'a']++;
        }
        int ans= 0;
        for (int i = 0; i < 26; i++)
        {
            int pairs = min(nn[i],mm[i]);
            ans += pairs;
            mm[i] -= pairs;
            nn[i] -= pairs;
            int add = min(k, max(mm[i],nn[i]) / 2);
            k -= add;
            ans += add;
        }
        cout << ans << endl;
    }
    return 0;
}