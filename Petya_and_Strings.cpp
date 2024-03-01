#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, x = 0;
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    for (i = 0; i < str1.length() && i < str2.length(); i++)
    {
        if (tolower(str1[i]) < tolower(str2[i]))
        {
            x = -1;
            break;
        }
        else if (tolower(str1[i]) > tolower(str2[i]))
        {
            x = 1;
            break;
        }
    }

    cout << x << endl;
    return 0;
}
