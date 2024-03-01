#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int cnt = 0;
        string s,p="314159265358979323846264338327";
        cin >> s;

        
        for (int i = 0; i < s.length(); i++){
            if (s[i] == p[i])
                cnt++;
            else
                break;
            
        }
        cout << cnt << endl;
    }
    return 0;
}
