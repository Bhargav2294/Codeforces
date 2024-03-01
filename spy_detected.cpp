#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n,count=0;
        cin >> n;
        int a[n];

        for(int i=0;i<n;i++)
            cin >> a[i];

        if(a[0]!=a[1] && a[1]==a[2]){
            count=1;
            cout << 1 << endl;
        }
        else{
            for(int i=1;i<n-1;i++){
                if(a[i]!=a[i-1] && a[i]!=a[i+1]){
                    count=1;
                    cout << i+1 << endl;
                    break;
                }
            }
        }
        if(count==0)
            cout << n << endl;
    }
    return 0;
}