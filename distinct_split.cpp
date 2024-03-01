#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> s1, s2;
        vector<int> v1,v2(n);

        for (int i = 0; i < n; i++)
        {
            s1.insert(s[i]);
            v1.push_back(s1.size());
        }

        for (int i = n - 1; i >= 0; i--)
        {
            s2.insert(s[i]);
            v2[i]=s2.size();
        }
        
        int mx =0;

        for (int i = 0; i < n - 1; i++)
            mx = max(mx, v1[i] + v2[i + 1]);

        cout << mx << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,m=0,k=0;
//         cin >> n;
//         string s;
//         cin >> s;
//         unordered_set<char> v1;
//         unordered_set<char> v2;
//         for(int i=0;i<n;i++)
//         {
//             v1.insert(s[i]);
//             if(m==v1.size()){
//                 k=i;    
//                 break;
//             }
//             m=v1.size();
//         }if(k>0){
//         for(int i=k;i<n;i++){
//             v2.insert(s[i]);
//         }
//         }
//         int ans=v1.size()+v2.size();
//         cout << ans << endl;
        
//     }
//     return 0;
// }

