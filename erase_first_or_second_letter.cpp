#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n,sum=0;
        cin >> n;

        string s;
        cin >> s;

        unordered_set<char> s1;
        for(int i=0;i<n;i++){
            s1.insert(s[i]);
            sum+=s1.size();
        }
        cout << sum << endl;
    }
    return 0;
}
