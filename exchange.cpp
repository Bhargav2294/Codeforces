#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=1,a,b;
    long long n;
    cin >> t;

    while (t--){
        cin >> n >> a >> b;

        if(n<=a)
            cout << 1 << endl;
        else if(a<=b){
            if(n%a==0)
                cout << n/a << endl;
            else
                cout << (n/a)+1 << endl;
        }
        else{
            // a+=(a-b);
            // if(n%a==0)
            //     cout << n/a << endl;
            // else
            //     cout << (n/a)+1 << endl;
            cout << 1 << endl;
        }    
    }
    return 0;
}