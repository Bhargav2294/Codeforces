#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while (t--){
        int n;
        string s;
        cin >> n >> s;
        int move=0;
        int c=0;
        for (int i = 0; i < n;i++){
            if (s[i] == '(')
                c++;
            else{
                c--;
                if(c<0){
                    c=0;
                    move++;
                }
            }
        }
        cout << move << endl;
    }
    return 0;
}
