#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n>=1 && n<=9)
            cout << n << endl;
        else if(n>=10 && n<=17)
            cout << n-9 << 9 << endl;
        else if(n>=18 && n<=24)
            cout << n-17 << 89 << endl;
        else if (n>=25 && n<=30)
            cout << n - 24 << 789 << endl;
        else if (n>=31 && n<=35)
            cout << n-30 << 6789 << endl;
        else if(n>=36 && n <=39)
            cout << n-35 << 56789 << endl;
        else if(n>=40 && n<=42)
            cout << n-39 << 456789 << endl;
        else if(n==43 || n==44)
            cout << n-42 << 3456789 << endl;
        else if(n==45)
            cout << 123456789 << endl;
        else 
            cout << -1 << endl;
    }
    return 0;
}