#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    for(int i=0;i<n;i++){
        if(a[i]==1)
            cout << 0 << endl;
        else if(a[i]%2==1)
            cout << a[i]/2 << endl;
        else
            cout << (a[i]/2)-1 << endl;
    }
    return 0;
}