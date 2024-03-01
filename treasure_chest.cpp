#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    { 
        int x,y,k;
        cin >> x >> y >> k;

        if(x==y)
            cout << x << endl;
        else if(x+k==y)
            cout << y << endl;
        else if (x + k < y)
            cout << y + (y - (x + k)) << endl;
        else if(x>y)
            cout << x << endl;
        else if(x<y){
            if(y-x<k)
                cout << y << endl;
        }
       
       
    }

    return 0;
}