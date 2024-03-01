#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<pair<int, int>> a, b, c;

        for (int i = 0; i < n; i++)
        {
            int i1;
            cin >> i1;
            a.push_back({i1, i});
        }
        for (int i = 0; i < n; i++)
        {
            int i2;
            cin >> i2;
            b.push_back({i2, i});
        }
        for (int i = 0; i < n; i++)
        {
            int i3;
            cin >> i3;
            c.push_back({i3, i});
        }

        sort(a.begin(), a.end(), greater<pair<int, int>>());
        sort(b.begin(), b.end(), greater<pair<int, int>>());
        sort(c.begin(), c.end(), greater<pair<int, int>>());

        vector<int> ans;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if ((a[i].second != b[j].second) && (b[j].second != c[k].second) && (a[i].second != c[k].second))
                    {
                        int check = a[i].first + b[j].first + c[k].first;
                        ans.push_back(check);
                    }
                }
            }
        }

        sort(ans.begin(), ans.end(), greater<int>());

        cout << ans[0] << endl;
    }
    return 0;
}
