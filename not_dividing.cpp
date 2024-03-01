#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==1)
                a[i]++;
        }
        for(int i=0;i<n-1;i++){
            if(a[i+1]%a[i]==0)
                a[i+1]++;
        }
        for(int i=0;i<n;i++)
            cout << a[i] << " ";
        
        cout << endl;
    }
    return 0;
}
// if (i > 0)
// {
//     if (a[i] % a[i - 1] != 0)
//     {
//     }
//     else if (a[i] % a[i - 1] == 0 && a[i - 1] != 1)
//         a[i]++;
//     else
//     {
//         if (i < 2)
//         {
//             a[i - 1]++;
//             if (a[i] % 2 == 0)
//                 a[i]++;
//             else
//                 a[i]++, a[i]++;
//         }
//         else
//         {
//             if (a[i - 2] % 2 == 0)
//             {
//                 a[i - 1]++, a[i - 1]++;
//                 if (a[i] % 2 != 0)
//                     a[i]++;
//             }
//             else
//             {
//                 a[i - 1]++;
//                 if (a[i] % 2 == 0)
//                     a[i]++;
//                 else
//                     a[i]++, a[i]++;
//             }
//         }
//     }
// }