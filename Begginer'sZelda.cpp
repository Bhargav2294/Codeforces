#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> a(n + 1);
    for (int i = 1; i <= n; i++)
        a[i].clear();

    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (a[i].size() == 1)
            cnt++;
        
    }

    int mini = static_cast<int>(ceil(cnt / 2.0));

    cout << mini << endl;
}

int main() {
    int tt = 1;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
