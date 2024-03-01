#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int n,x=1;
        cin >> n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==x)
                x++;
            x++;
        }
        cout << x-1 << "\n";
    }

    return 0;
}
