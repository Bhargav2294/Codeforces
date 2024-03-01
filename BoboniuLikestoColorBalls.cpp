#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int r, g, b, w;
        cin >> r >> g >> b >> w;

        if (((r % 2) + (g % 2) + (b % 2) + (w % 2)) <= 1)
            cout << "Yes" << endl;
        else if (r > 0 && g > 0 && b > 0 && ((r - 1) % 2) + ((g - 1) % 2) + ((b - 1) % 2) + ((w + 1) % 2) <= 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
