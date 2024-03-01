/*--------------------------------------Radhe_Radhe-----------------------------------------*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,a,q,flag=0,p=0;
        cin >> n >> a >> q;

        int y=a;
        string s;
        cin >> s;

        if(n==a){
            cout << "YES" << endl;
    
        }
        else{
            for(int i=0;i<q;i++){
                if(s[i]=='+')
                    a++,p++;
                else 
                    a--;
                if (n == a)
                {
                    cout << "YES" << endl;
                    flag=1;
                    break;
                    
                }
            }
            if(flag==0){
                if(y+p>=n)
                    cout << "MAYBE" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}