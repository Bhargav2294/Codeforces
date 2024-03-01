#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    long long int arr[4],count=0;
    
    for(int i=0;i<4;i++)
        cin >> arr[i];

    unordered_set<long long int> elements;
    for (int i = 0; i < 4; i++)
    {
        elements.insert(arr[i]);
    }

    // if (elements.size() < 4)
    //     count = 4 - elements.size();

    cout << count = 4 - elements.size();
    

    return 0;
}