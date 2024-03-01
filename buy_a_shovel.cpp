#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n,a=true,i=1;
    cin >> m >> n;

    while(a=true){
        if((m*i)%10==0){
            cout << i;
            break;
        }
        else if((m*i-n)%10==0){
            cout << i;
            break;
        }
        i++;
    }

    return 0;
}