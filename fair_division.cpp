#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x=0;
        cin >> n;

        int a[n];

        for(int i=0;i<n;i++)
            cin >> a[i];

        for(int i=0;i<n;i++){
            if(a[i]==2)
                x++;
        }

        int y=n-x;
            
        if((x%2==0 && y%2==0) || (x%2!=0 && y%2==0 && y>0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
