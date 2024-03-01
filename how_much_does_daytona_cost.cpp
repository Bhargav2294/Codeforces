/*--------------------------------------Radhe_Radhe-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k,flag=0;
        cin >> n >> k;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==k)
                flag=1;
        }
        if(flag==0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}