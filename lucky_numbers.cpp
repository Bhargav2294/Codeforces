/*------------------------------------Radhe_Radhe----------------------------------------*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int l,r;
        cin >> l >> r;

        int ans=l,maxluck=0;

        for(int i=l;i<=r;i++){

            string num=to_string(i);
            sort(num.begin(),num.end());
            int curluck=num[num.length()-1]-num[0];

            if(curluck >= maxluck){
                maxluck=curluck;
                ans=i;
            }
            if(maxluck==9)
                break;
        }
        cout << ans << endl;
    }
    
    return 0;
}