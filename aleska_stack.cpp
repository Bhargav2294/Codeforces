#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int n,num=5;
        cin >> n;

        for(int i=0;i<n; i++){
            cout << num << " ";
            num++;
        }
        
        cout << endl;
    }
    return 0;
}