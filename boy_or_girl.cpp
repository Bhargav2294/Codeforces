#include <iostream>
using namespace std;

int main()
{
    int i,j=97,flag=0;
    string s;
    cin >> s;

    while (j != 123)
    {
        for (i = 0; i< s.length(); i++)
        {
            if (s[i] == j)
            {
                flag++;
                break;
            }
        }
        j++;
    }
    if(flag%2==0)
        cout << "CHAT WITH HER!";
    
    else
        cout << "IGNORE HIM!";

     return 0;
}