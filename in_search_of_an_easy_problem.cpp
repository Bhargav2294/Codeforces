#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, k,count=0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1)
        {
        count=1;
        break;
        }
    }
    if(count==1)
        cout << "HARD";
    else
        cout << "EASY";
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n, cnt = 0;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (arr[i] == 1)
//         cnt++;
//     }
//     if (cnt != 0)
//         printf("HARD");
//     else
//         printf("EASY");
//     return 0;
// }