#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b,count=0;
        cin >> a >> b;

        while(a!=0 && b!=0){
            if(a<b){
                count+=b/a;
                b%=a;
            }
            else{
                count+=a/b;
                a%=b;
            }
        }
        cout << count << endl;
    }    

return 0;
}
