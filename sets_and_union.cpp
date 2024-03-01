// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t=1;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;

//         unordered_set<int> s;
//         vector<int> v2(n);
//         for(int j=0;j<n;j++){
//             int k;
//             cin >> k;

//             vector<int> v(k);
//             int count=s.size();
//             for(int i=0;i<k;i++){
//                 cin >> v[i];
//                 s.insert(v[i]);
//             }
//             int m=s.size()-count;
//             v2.push_back(m);
//         }
//         sort(v2.begin(),v2.end());
//         int sum=accumulate(v2.begin(),v2.end(),0);
//         cout << sum-v2[0] << endl;
//     }
//     return 0;
// }