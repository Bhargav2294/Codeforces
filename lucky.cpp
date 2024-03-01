#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int m,sum1=0,sum2=0;
        cin >> m;

        for(int i=0;i<3;i++)
        {
            sum1 += m%10;
            m/=10;
        }
        for(int i=0;i<3;i++)
        {
            sum2+=m%10;
            m/=10;
        }

        if(sum1==sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}