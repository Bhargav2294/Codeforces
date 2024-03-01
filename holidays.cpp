#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int min1=(n/7)*2;
    int max1=(n/7)*2;

    if(n%7<2)
        max1+=n%7;
    else
        max1+=2;

    if(n%7!=0 && n%7>5)
        min1+=1;

    cout << min1 << " " << max1 << endl;
    return 0;
}