#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];

        for(int i=0;i<n;i++)
            cin >> a[i];

        auto x=min_element(a,a+n);

        long long count=0;

        for(int i=0;i<n;i++){
            count+=a[i]-*x;
        }
        cout << count << endl;
    }
    return 0;
}