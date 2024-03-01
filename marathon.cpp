#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, d;
    int n;
    cin >> a >> d >> n;

    for (int i = 1; i <= n; ++i)
    {
        double distance = i * d;
        double x = fmod(distance, 4 * a);
        double y = 0;
        if (x > a)
        {
            x = a;
            y = distance - a;
        }
        cout << fixed << setprecision(10) << x << " " << y << endl;
    }

    return 0;
}
