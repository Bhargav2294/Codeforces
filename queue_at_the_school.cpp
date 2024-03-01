#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n;
    cin >> k;
    string s;
    cin >> s;
    
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(s[j+1]=='G' && s[j]=='B'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }

    cout << s;
    return 0;
}
