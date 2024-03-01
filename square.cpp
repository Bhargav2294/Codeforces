#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    cin >> t;

    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(((a==c)&&(a==b+d)) || ((a==d)&&(a==b+c)) || ((b==c)&&(b==a+d)) || ((b==d)&&(b==a+c))) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}