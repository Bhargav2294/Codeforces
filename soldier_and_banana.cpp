#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k;
    cin >> n;
    cin >> w;
    int price = k;

    for (int i = 2; i <= w; i++)
    {
        k = k + price * i;
    }

    int b = k - n;

    if (b < 0)
        cout << "0";
    else
        cout << b;

    return 0;
}