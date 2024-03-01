#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        long long n,m,x;
        cin >> n >> m >> x;

        if(n*m==x){
            cout << x << endl;
        }
        else{
            long long ans=(x+n-1)/n + ((x-1)%n)*m;
            // long long ans=((x/n)+1) + (x%n-1)*m;
            cout << ans << endl;
        }

    }
    return 0;
}

