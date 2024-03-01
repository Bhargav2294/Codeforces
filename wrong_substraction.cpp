#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cin >> m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (m%10==0)
           m=m/10;
        else
        m--;
    }
    cout << m << endl;
    return 0;
}