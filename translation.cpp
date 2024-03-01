#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string r;
    cin >> r;

    reverse(s.begin(),s.end());

    if(s==r)
    cout << "Yes";
    else
    cout << "No";

    return 0;
}
