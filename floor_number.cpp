#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x,i=0;
        cin >> n >> x;

        while(true){
            if(n<=((x*i)+2)){
                cout << i+1 << endl;
                break;
            }
            i++;
        }     
    }
    return 0;
}

