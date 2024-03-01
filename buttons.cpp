// /*--------------------------------------Radhe_Radhe-----------------------------------------*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;

//         if(c%2==0)
//             a+=c/2,b+=c/2;
//         else
//             a+=(c/2)+1,b+=c/2;

//         if(a==b)
//             cout << "Second" << endl;
//         else 
//             cout << "First" << endl;
    
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a != b)
        {
            cout << ((a > b) ? "First" : "Second") << endl;
        }
        else
        {
            cout << ((c % 2 == 0) ? "Second" : "First") << endl;
        }
    }
    return 0;
}
