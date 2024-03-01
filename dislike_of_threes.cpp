#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n,count=0,i=1;
        cin >> n;

        while(count<n){
            if(i%3!=0 && i%10!=3){
                count++;
                if(count==n){
                    cout << i << endl;
                    break;
                }
            }
            i++;
        }
    }

    return 0;
}