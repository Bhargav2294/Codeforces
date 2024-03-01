#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        string s;
        cin >> n >> k >> s;

        int x = count(s.begin(), s.end(), 'B');

        if(x==k)
            cout << 0 << endl;
        else{
            // cout << 1 << endl;
            // if(count-k<0)
            //     cout << abs(count-k) << " " << 'B' << endl;
            // else
            //     cout << count-k << " " << 'A' << endl;
            int a=0,b=0;

            for(int i=0;i<n;i++){
                a+=(s[i]=='A');
                b+=(s[i]=='B');

                if(k-x==a){
                    cout << 1 << "\n" << i + 1 << " B\n";
                    break;
                }

                if(x-k==b){
                    cout << 1 << "\n" << i + 1 << " A\n";
                    break;
                }
            }
        }
    }
    return 0;
}

