#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
//     string a,b,s;
//     cin >> a;
//     cin >> b;

//     // Resizing string s to the same length as string a
//     s.resize(a.length()); 

//     for(int i = 0; i < a.length(); i++)
//     {
//         if(a[i]==b[i])
//             s[i]='0';
//         else
//             s[i]='1';     
//     }
//     cout << s;

string a, b;
cin >> a;
cin >> b;

for (int i = 0; i < a.length(); i++)
{
    if (a[i] == b[i])
        cout << "0";
    else
        cout << "1";
}
       return 0;
}
