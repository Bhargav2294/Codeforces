#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1,n,m;
    cin >> t;

    while(t--){
        cin >> n >> m;
        
        cout << max(n,m) << endl;
    }
    return 0;
}
