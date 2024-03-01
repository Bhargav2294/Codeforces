#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<char> a;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i += 2)
    {

        a.push_back(s[i]);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {

        cout << a[i];

        if (i != a.size() - 1)
            cout << '+';
    }
    cout << endl;
    return 0;
}