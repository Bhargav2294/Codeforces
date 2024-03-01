#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,a,b,temp=0;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a;
        cin >> b;

        temp= temp-a+b;
         
        if(temp>max)
         max=temp;

    }

    cout << max;
    return 0;
}
