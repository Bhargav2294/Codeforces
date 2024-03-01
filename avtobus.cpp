/*--------------------------------------Radhe_Radhe-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        if(n%2==0 && n>3){
            if(n%6==0)
                cout << (n/6) << " " << (n/4) << endl;
            else if(n%3==2 || n%3==1)
                cout << (n/6)+1 << " " << (n/4) << endl;
            else
                cout << (n/4) << " " << (n/4) << endl;
        }
        else
            cout << -1 << endl;
        
    }
    return 0;
}