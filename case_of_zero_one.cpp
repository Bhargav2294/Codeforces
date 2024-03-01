#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,one=0,zero=0;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
        else zero++;   
    }

    cout << abs(one-zero) << endl;

    return 0;
}
