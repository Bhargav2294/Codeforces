#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0,count=0;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];

        ans+=a[i];

        if(ans<0){
            count++;
            ans=0;
        }
    }

    cout << count;

    return 0;
}

// int main()
// {
//     int n,count=0;
//     cin >> n;
//     int a[n];

//     for(int i=0;i<n;i++)
//     {
//         cin >> a[i];

//         if(i==0){
//             if(a[0]==-1)
//                 count++;
//             else
//                 count-=a[0];
//         }
//         else if(i==n-1){
//             if(a[i]==-1)
//                 count++;
//             else
//                 count--;
//         }
//         else{
//             if(a[i]==-1 && a[i-1]==-1)
//                 count++;
//             else if (a[i] == -1 && a[i - 1]!=-1)
//                 count++;
//             else if(a[i]!=-1 && a[i-1]==-1)
//                 count-=a[i];
           
//         }
//     }

//     cout << count;
//     return 0;
// }