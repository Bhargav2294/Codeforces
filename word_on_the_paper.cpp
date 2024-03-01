/*---------------------Radhe_Radhe----------------------*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int i,flag=0,z=0;
        string ans = "";

        for(int i=1;i<=8;i++){
            char s[9];
            cin >> s;

            for (int j=0;j<8;j++){
                if(s[j]>='a' && s[j]<='z' && flag!=1){
                    z = j;
                    flag = 1;
                    break;
                }
            }
            if(flag==1 && s[z]!= '.')
                ans += s[z];
        }
        cout << ans << endl;
    }
    return 0;
}