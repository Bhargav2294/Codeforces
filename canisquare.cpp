#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        ll sum=0;

        for(int i=0;i<n;i++){
            cin >> v[i];
            sum+=v[i];
        }
        double s = sqrt(sum);
        if (s==floor(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    
    }
    return 0;
}
