#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int s[4];

        for(int i=0;i<4;i++)
            cin >> s[i];

        int x=max(s[0],s[1]);
        int y=max(s[2],s[3]);

        if((x<s[2] && x<s[3]) || (y<s[0] && y<s[1]))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
