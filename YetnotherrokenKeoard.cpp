/*--------------------------------------Radhe_Radhe-----------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        getline(cin,s);

        stack<char> a;

        for (char c : s)
        {
            if(c=='b'){
                while(!a.empty() && a.top()>='a' && a.top()<='z'){
                    a.pop();
                    break;
                }
            }
            else if(c=='B'){
                while (!a.empty() && a.top() >= 'A' && a.top() <= 'Z'){
                    a.pop();
                    break;
                }
            }
            else
                a.push(c);
            
            
        }
        string r="";

        while (!a.empty())
        {
            r= a.top() + r;
            a.pop();
        }

        cout << r << endl;
    }
    return 0;
}
// if (s[i] == 'B' || s[i] == 'b')
// {
//     if (s[i] == 'b')
//     {
//         int j = i - 1;
//         while (j >= 0)
//         {
//             if (s[j] >= 'a' && s[j] <= 'z')
//             {
//                 s.erase(j, 1);
//                 break;
//             }
//             j--;
//         }
//     }
//     else
//     {
//         int j = i - 1;
//         while (j >= 0)
//         {
//             if (s[j] >= 'A' && s[j] <= 'Z')
//             {
//                 s.erase(j, 1);
//                 break;
//             }
//             j--;
//         }
//     }
// }