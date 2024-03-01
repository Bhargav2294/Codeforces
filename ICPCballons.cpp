#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n,total=0;
        cin >> n;

        string s;
        cin >> s;

        int m=64;

        while(m!=91){
            int count=0;

            for(int i=0;i<n;i++){
                if(s[i]==m)
                    count++;
            }

            if(count>0)
                total=total+count+1;

            m++;
        }

        cout << total << endl; 
    }
    return 0;
}