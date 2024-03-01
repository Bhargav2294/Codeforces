#include <iostream>
using namespace std;

int main()
{
    int n, k, i, a[100], count = 0;
    cin >> n >> k;

    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (i = 1; i <= n; i++)
    {
        if (a[i] >= a[k] && a[i] > 0)
            count++;
    }

    cout << count;
    return 0;
}
