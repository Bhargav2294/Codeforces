#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int n,zero=0,minus=0;
        cin >> n;

        vector<int> v(n);
        
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]==0)
                zero++;
            if(v[i]<0)
                minus++;
        }
        if(zero>0 || minus%2!=0)
            cout << 0 << endl;
        else{
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }



    }
    return 0;
}
