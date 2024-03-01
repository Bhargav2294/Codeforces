#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int a1[]={a, b, c};
        sort(a1,a1+3);

        if(a1[0]==a1[2])
            cout << "YES" << endl;
        else if(a1[0]==a1[1]){
            if(a1[2]/a1[0]-1<=3 && a1[2]%a1[0]==0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else{
            if((a1[2]/a1[0]-1)+(a1[1]/a1[0]-1)<=3 && a1[2]%a1[0]==0 && a1[1]%a1[0]==0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}