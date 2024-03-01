#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,a,b,count=0;
    cin >> n;

    set<int> level;

    cin >> a;
    for(int i=0;i<a;i++)
    {
        int x;
        cin >> x;
        level.insert(x);
    }

    cin >> b;
    for(int i=0;i<b;i++)
    {
        int y;
        cin >> y;
        level.insert(y);
    }

    if(level.size()==n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    
    return 0;
}