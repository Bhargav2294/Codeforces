#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    long long n;
    cin >> t;
    while(t--){
        cin >> n;
        
        if(n%2020<=n/2020)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}