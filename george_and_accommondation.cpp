#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,a,b,count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;

        if(a+2<=b){
            count+=1;
        }

    }

    cout << count; 
    return 0;
}