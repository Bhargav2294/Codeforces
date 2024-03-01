#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, b, count = 1;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n-1; i++)
    {
        cin >> a;
        arr[i]=a;

        if(arr[i] != arr[i+1])
            count++;
        
    }
    cout << count;
    return 0;
}