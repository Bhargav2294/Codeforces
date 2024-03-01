#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int n=s.size()/2;
        int i=1,flag=0;
        

        for(int i = 0; i < n; i++)
        {
            string fp = s.substr(0, i+1);
            string sp = s.substr(i+1);

            if (fp < sp && sp[0] != '0')
            {
                cout << fp << " " << sp << endl;
                flag = 1;
                break;
            }
        }

        if(flag==0)
            cout << -1 << endl;
    }
    return 0;
}

// while (i <= n)
// {
//     if ((s.size()) % 2 == 0)
//     {
//         if (s[i] != '0' && i < n)
//         {
//             for (int k = 0; k < i; k++)
//             {
//                 cout << s[k];
//             }
//             cout << " ";
//             for (int j = i; j < s.size(); j++)
//             {
//                 cout << s[j];
//             }
//             cout << endl;
//             flag = 1;
//             break;
//         }
//     }
//     else
//     {
//         if (s[i] != '0' && i < n - 1)
//         {
//             for (int k = 0; k < i; k++)
//             {
//                 cout << s[k];
//             }
//             cout << " ";
//             for (int j = i; j < s.size(); j++)
//             {
//                 cout << s[j];
//             }
//             cout << endl;
//             flag = 1;
//             break;
//         }
//     }
//     if ((s.size()) % 2 == 0 && i == n && s[n + 1] != 0)
//     {
//         string fp = s.substr(0, n);
//         string sp = s.substr(n);
//         if (fp.compare(sp) < 0)
//         {
//             for (int k = 0; k < i; k++)
//             {
//                 cout << s[k];
//             }
//             cout << " ";
//             for (int j = i; j < s.size(); j++)
//             {
//                 cout << s[j];
//             }
//             cout << endl;
//             flag = 1;
//             break;
//         }
//     }
//     if ((s.size()) % 2 != 0 && i == n && s[n + 1] != 0)
//     {
//         string fp = s.substr(0, n);
//         string sp = s.substr(n);
//         if (fp.compare(sp) < 0)
//         {
//             for (int k = 0; k < i; k++)
//             {
//                 cout << s[k];
//             }
//             cout << " ";
//             for (int j = i; j < s.size(); j++)
//             {
//                 cout << s[j];
//             }
//             cout << endl;
//             flag = 1;
//             break;
//         }
//     }
//     i++;
// }