#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while (t--){
        int ca=0,cb=0,cc=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                char c;
                cin >> c;
                if(c=='A')
                    ca++;
                else if(c=='B')
                    cb++;
                else if(c=='C')
                    cc++;
            }
        }
        if(ca==2)
            cout << 'A' << endl;
        else if(cb==2)
            cout << 'B' << endl;
        else if(cc==2)
            cout << 'C' << endl;
        
    }
    return 0;
}
