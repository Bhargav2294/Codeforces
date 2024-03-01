#include <iostream>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;

        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}