#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int n, m, k, h;
        cin >> n >> m >> k >> h;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
    

        int cnt = 0;
        int diff = 0;
        for (int i = 0; i < n; i++)
        {
            diff = abs(h - v[i]);
            if ((diff % k) == 0)
            {
                if ((diff <= (k * (m - 1))) && diff >= k)
                    cnt++;
    
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
