#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        int a[4],count=0;
        for(int i=0;i<4;i++){
            cin >> a[i];
            if(i>0){
                if(a[i]>a[0])
                    count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}