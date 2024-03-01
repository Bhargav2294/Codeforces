#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n],b[n];

        for(int i=0;i<n;i++)
            cin >> a[i];

        auto x=min_element(a,a+n);

        for(int i=0;i<n;i++)
            cin >> b[i];
        
        auto y=min_element(b,b+n);

        long long count=0;

        for(int i=0;i<n;i++){
            if(a[i]==*x && b[i]!=*y)
                count+=b[i]-*y;
            else if(a[i]!=*x && b[i]==*y)
                count+=a[i]-*x;
            else if(a[i]!=*x && b[i]!=*y)
                count+=max(a[i]-*x,b[i]-*y);    
        }

        cout << count << endl;
    }
    return 0;
}