#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n;

        //int min1=0,min2=0,min12=0;
        int min1 = INT_MAX, min2 = INT_MAX, min12 = INT_MAX;

        for(int i=0;i<n;i++){
            cin >> m;
            string s;
            cin >> s;

            if(s[0]=='0' && s[1]=='1')
                min1=min(min1,m);
            else if(s[0]=='1' && s[1]=='0')
                min2=min(min2,m);
            else if(s[0]=='1' && s[1]=='1')
                min12=min(min12,m);
        }

        // if(min12==0 && min1>0 && min2>0)
        //     cout << min1+min2 << endl;
        // else if(min12>0 && (min1==0 || min2==0))
        //     cout << min12 << endl;
        // else if(min12>0 && min1>0 && min2>0)
        //     cout << min(min12,(min1+min2));
        // else
        //     cout << -1 << endl;
        if (min12 == INT_MAX && min1 != INT_MAX && min2 != INT_MAX)
            cout << min1 + min2 << endl;
        else if (min12 != INT_MAX && (min1 == INT_MAX || min2 == INT_MAX))
            cout << min12 << endl;
        else if (min12 != INT_MAX && min1 != INT_MAX && min2 != INT_MAX)
            cout << min(min12, (min1 + min2)) << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
