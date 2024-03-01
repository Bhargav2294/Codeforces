#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(s[n-1]=='A')
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}