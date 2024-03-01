#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,b=0,a=0,i;
    cin >> n;
    
    string s;
    cin >> s;

    for(i=0;i<n;i++){
        if(s[i]=='A')
        a++;
        else
        b++;
    }

    if(a>b) cout << "Anton\n";
    else if(a<b) cout << "Danik\n";
    else cout << "Friendship\n";
    
    return 0;
}