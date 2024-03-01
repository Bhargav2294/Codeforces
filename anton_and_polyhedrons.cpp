#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for(int i=0;i<n;i++){
        string s;
        cin >> s;

        if(s[0]=='T')
            count+=4;
        else if(s[0]=='C')
            count+=6;
        else if(s[0]=='O')
            count+=8;
        else if(s[0]=='D')
            count+=12;
        else
            count+=20;

    }

    

    cout << count;
    return 0;
}