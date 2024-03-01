/*---------------------Radhe_Radhe----------------------*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        for(char c='a';c<='h';c++){
            if(c!=s[0])
                cout << c << s[1] << endl;  
        }

        for(char a='1';a<='8'; a++)
        {
            if (a!= s[1])
                cout << s[0] << a << endl;
        }
    }
    return 0;
}