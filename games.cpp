#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin >> n;

    int m=n*2;
    int a[m];

    for(int i=0;i<m;i++)
        cin >> a[i];

    for(int i=0;i<m;i+=2){
        for(int j=1;j<m;j+=2){
            if(i!=j-1){
                if(a[i]==a[j])
                    count++;
            }
        }
    }

    cout << count;
    return 0;
}