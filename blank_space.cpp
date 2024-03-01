#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,count=0,max1=0;
        cin >> n;

        vector<int> a(n);
        
        for(int i=0;i<n;i++){
            cin >> a[i];

            if(a[i]==0){
                count++;
                max1=max(max1,count);
            }
            else
                count=0;
        }
    cout << max1 << endl;
    }
    return 0;
}

if (a[i] == 0)
    count++;

if (count > max1)
    max1 = count;

if (a[i] == 1)
    count = 0;