#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,s,x;
    cin >> t >> s >> x;

    if(x==t)
        cout << "YES" << endl;
    else if((x>t+1) && (((x-t)%s==0) || ((x-t-1)%s==0)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
