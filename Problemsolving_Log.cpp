#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t = 1;
    cin >> t;

    while (t--){
        long long n;
        cin >> n;

        string s;
        cin >> s;

        vector<long long>a(26,0);
        for(long long i=0;i<n;i++)
            a[s[i]-'A']++;
        
        int cnt=0;
        for (long long i = 0; i <26; i++){
            if(a[i]>=i+1)
                cnt++;
        }

        cout << cnt << endl;
             
    }
    return 0;
}
