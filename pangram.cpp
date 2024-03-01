#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> ss;

    for(int i=0;i<n;i++)
    {
        char s1 = tolower(s[i]);
        ss.insert(s1);
    }

    if (ss.size()==26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}