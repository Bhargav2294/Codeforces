#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,count=0;
        cin >> n;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==i+1)
                count++;
        }

        if(count%2==1)
            count++;

        cout << count/2 << endl;
    }
    return 0;
}
