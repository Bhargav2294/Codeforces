#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,min1=0,max1=0,ans=0;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=1;i<n;i++)
    {
        if(a[i]>a[max1])
            max1=i;

        if(a[i]<=a[min1])
            min1=i;
    }

    if(max1>min1){
        ans = max1 + (n - min1 - 2);
        cout << ans << endl;
    }  
    else{
        ans = max1 + (n - min1 - 1);
        cout << ans << endl;
    }
    return 0;
}