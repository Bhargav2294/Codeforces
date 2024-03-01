#include<bits/stdc++.h> 
using namespace std;

int main(){
    int a,b,n;
    cin >> a >> b >> n;

    bool found=false;
    for(int i=0;i<=9;i++){
        if((a*10+i)%b==0){
            cout << a << i;
            for(int j=1;j<n;j++)
                cout << 0;
        
            found=true;
            break;
        }
    }

    if(!found)
        cout << -1;

    return 0;
}
