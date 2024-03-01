#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n!=0){
        int p[3],a=0,b=0,c=0;
        for(int i=0;i<3;i++)
            cin >> p[i];
        a=p[0];
        b=p[1];
        c=p[2];

        if(a+b==c || b+c==a || a+c==b)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;

    n--;
    }
   
    return 0;
}