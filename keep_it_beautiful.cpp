#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        bool flag=true,first=true;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int x=a[0];
        cout << 1;

        for(int i=1;i<n;i++){
            if (a[i] >= x && flag ==true)
            {
                cout << 1;
                x=a[i];
            }
            else if(a[i]<=a[0] && (first==true || x<=a[i]))
            {
                cout << 1;
                x = a[i];
                first=false;
                flag=false;
            }
            else
                cout << 0;
// my error is i dont updating value i only compare element with first element and after getting
// small element i am not updating small elemnt i only compare with small element
            
        }
        cout << endl;
    } 
        
    return 0;
}
// if (a[i] >= x && flag == 0)
// {
//     cout << 1;
// }
// else if (cnt == 0)
// {
//     cout << 1;
//     flag = 1, cnt = 1, y = a[i], m = 1;
// }

// if (cnt == 1 && a[i] <= x && a[i] >= y && m == 0)
// {
//     cout << 1;
// }
// else if (cnt == 1 && m == 0)
// {
// //     cout << 0;
// // }
// // m = 0;


// if (flag == 0)
// {
//     if (a[i] >= a[i - 1])
//         cout << 1;
//     else
//     {
//         if (a[i] >= x)
//         {
//             cout << 1;
//             flag++;
//             y = a[i];
//         }
//         else
//             cout << 0;
//     }
// }
// else if (flag == 1)
// {
//     if (a[i] <= x && a[i] >= y)
//         cout << 1;
//     else
//     {
//         cout << 0;
//     }
// }
// else
// {
//     cout << 0;
// }
// }