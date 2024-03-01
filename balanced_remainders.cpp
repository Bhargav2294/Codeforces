#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i=0;i<n;i++)
            cin >> v[i];

        vector<int> r(3);

        for(int i=0;i<n;i++){
            if(v[i]%3==0)
                r[0]++;
            else if(v[i]%3==1)
                r[1]++;
            else
                r[2]++;
        }
        int mn=0;
        while (r[0]!=n/3 || r[1]!=n/3 || r[2]!=n/3){
            for (int i = 0; i < 3; i++){
                if (r[i] > n / 3){
                    mn++;
                    r[i]--;
                     r[(i + 1) % 3]++;
                }
            }
        }
        cout << mn << endl;
    }
    return 0;
}