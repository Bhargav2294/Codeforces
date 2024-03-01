#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int x=count(s.begin(),s.end(),'0'),y=count(s.begin(),s.end(),'1');

        int z=min(x,y);

        if(z%2==0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }
    
    return 0;
}
