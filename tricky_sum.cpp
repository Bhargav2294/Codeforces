#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long sum=n*(n+1)/2;

        long long power=1;
        while(power<=n){
            sum-=power;
            sum-=power;
            power <<= 1; 
        }

    cout << sum << endl;
    }
    return 0;
}