#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a=1,b=2,c=n-(a+b);

        if(n<7 || n==9)
            cout << "NO\n";
        else if(n%3!=0){
            cout << "YES\n" << a << " " << b << " " << c << "\n";
        }
        else{
            b=4,c=n-(a+b);
            cout << "YES\n" << a << " " << b << " " << c << "\n";    
        }
    }
    return 0;
}