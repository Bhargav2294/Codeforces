#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    
    for(int i=0;i<4;i++)
        cin >> a[i];
    
    int maximum=max({a[0],a[1],a[2],a[3]});

    for(int i=0;i<4;i++){
        if(a[i]!=maximum)
            cout << maximum-a[i] << " ";
    }
    return 0;
}