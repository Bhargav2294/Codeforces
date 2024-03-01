#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        
        vector<int> a(n);

        for(int i=0;i<n;i++)
            cin >> a[i];

        if(is_sorted(a.begin(),a.end())){
            vector<int> b(n-1);
            for(int i=0;i<n-1;i++)
                b[i]=a[i+1]-a[i];
            sort(b.begin(),b.end());
            cout << (b[0]/2)+1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}