#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){

        int n,count=0;
        cin >> n;

        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];

        sort(a.begin(),a.end());

        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])>1){
                count=1;
                break;
            }
        }

        if(count==1)
            cout << "NO\n";
        else
            cout << "YES\n";
       
    }

    return 0;
}