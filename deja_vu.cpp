#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int a[x],b[y];

        for(int i=0;i<x;i++)
            cin >> a[i];
        
        for(int i=0;i<y;i++)
            cin >> b[i];

        set<int> hs;

        for(int i=0;i<y;i++){

            if (hs.count(b[i]))
                continue;
            hs.insert(b[i]);

            for(int j=0;j<x;j++){
                if(a[j]%(1 << b[i])==0){
                    a[j]+=(1 << (b[i]-1));
                }
            }
        }
        for (int j = 0; j < x; ++j) {
            cout << a[j] << " ";
        }

        cout << endl;    
    }
    return 0;
}