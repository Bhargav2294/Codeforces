#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;

        int a=n-k;
        int b=n-k-1;


        for(int i=0;i<n;i++){
            if(a<=n){
                cout << a << " ";
                a++;
            }
            else{
                cout << b << " ";
                b--;
            }
        }
        cout << endl;
    }
    return 0;
}
