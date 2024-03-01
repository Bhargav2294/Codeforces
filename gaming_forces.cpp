#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        int cnt=0,sum=0;
        int a[n];

        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]==1)
                cnt++;
        }
        cout << ((cnt+1)/2+(n-cnt)) << endl;
    }

    return 0;
}
