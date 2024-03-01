/*---------------------Radhe_Radhe----------------------*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        int sum=a+b;
        if((n-1)>=sum)
            cout << (sum*2)+1 << endl;
        else
            cout << (n+n-1) << endl;
    }
    return 0;
}