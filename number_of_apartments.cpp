#include <iostream>

using namespace std;

int main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
#include <iostream>

        using namespace std;

        int main()
        {
            int t;
            cin >> t;
            while (t--)
            {
                int n;
                cin >> n;
                bool found = false;
                for (int i = 0; i <= 150; i++)
                {
                    int left = n - 7 * i;
                    for (int j = 0; j <= 250; j++)
                    {
                        int Left = left - 5 * j;
                        if (Left >= 0 && Left % 3 == 0)
                        {
                            cout << (Left / 3) << " " << j << " " << i << "\n";
                            found = true;
                            break;
                        }
                    }
                    if (found)
                        break;
                }
                if (!found)
                    cout << -1 << "\n";
            }
            return 0;
        }
    }
    return 0;
}
