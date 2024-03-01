#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,count=0;
    cin >> n >> k;
    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a.begin(),a.end());

    for(int i=2;i<n;i+=3){
        if(5-a[i]>=k)
            count++;
    }

    cout << count << endl;

    return 0;
}