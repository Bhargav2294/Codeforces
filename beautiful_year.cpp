#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int year, a, b, c, d, ans;
    cin >> year;
    while (1)
    {
         year++;
        //  ans = year;

        // a = year % 10;
        // year = year / 10;

        // b = year % 10;
        // year = year / 10;

        // c = year % 10;
        // year = year / 10;

        // d = year % 10;

         string s = to_string(year);

         if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3])
         {
             // cout << ans;
             cout << year;
             break;
         }
        // year = ans;
    }
}
