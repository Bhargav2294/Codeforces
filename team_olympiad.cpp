#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,b=0,c=0;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
            a++;
        else if(arr[i]==2)
            b++;
        else
            c++;
    }

    int x = min({a, b, c});

    cout << x << endl;

    for(int i=1;i<=x;i++){
        for(int i = 0; i < n; i++) {
            if(arr[i]==1)
            {
                cout << i+1 << " ";
                arr[i]=0;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == 2)
            {
                cout << i+1 << " ";
                arr[i] = 0;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 3)
            {
                cout << i+1 << " ";
                arr[i] = 0;
                break;
            }
        }
        cout << endl;
    }

    return 0;
}