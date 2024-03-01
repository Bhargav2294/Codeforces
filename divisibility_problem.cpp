#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int a,b,ans=0;
        cin >> a;
        cin >> b;

        if(a%b==0)
            cout << ans << endl;
        else{
            ans = b - (a % b);
            cout << ans << endl;
        }
    }

    return 0;
}