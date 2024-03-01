// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t=1;
//     cin >> t;

//     while(t--){
//         int a,b,xk,yk,xq,yq,count=0;
//         cin >> a >> b >> xk >> yk >> xq >> yq;

//         //if(xk<xq){
//             int m=xk+a,n=yk+b;
//             if(m==xq-a && n==yq-b)
//                 count++;
//             swap(a,b); 
//             if(m==xq-a && n==yq-b)
//                 count++;
//             swap(a,b);
//             swap(xk,yk);
//             int r = xk + a, s = yk + b;
//             if (r == xq - a && s == yq - b)
//                 count++;
//             swap(a, b);
//             if (r == xq - a && s == yq - b)
//                 count++;
        
//         // else{
//         //     int m=xq+a,n=yq+b;
//         //     if(m==xk-a && n==yk-b)
//         //         count++;
//         //     swap(a,b);
//         //     if(m==xk-a && n==yk-b)
//         //         count++;
//         //     swap(a,b);
//         //     swap(xq,yq);
//         //     int r = xq + a, s = yq + b;
//         //     if (r == xk - a && s == yk - b)
//         //         count++;
//         //     swap(a, b);
//         //     if (r == xk - a && s == yk - b)
//         //         count++;
//         // }
//         cout << count << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int a, b, c, d, x, y;
    cin >> x >> y >> a >> b >> c >> d;

    int arr[2] = {1, -1};
    int cnt = 0;

    for (int k = 0; k < 2; ++k)
    {
        if (k == 1)
            swap(x, y);
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                int x2 = a + arr[i] * x;
                int y2 = b + arr[j] * y;
                if (x2 < 0 || y2 < 0)
                    continue; // Discard negative values
                int x3 = abs(c - x2), y3 = abs(d - y2);
                if ((x3 == x && y3 == y) || (x3 == y && y3 == x))
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
