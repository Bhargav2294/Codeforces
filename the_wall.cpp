// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     int x,y,a,b,count=0;
// //     cin >> x >> y >> a >> b;

// //     unordered_map<int,int> m;

// //     for(int i=1;i*x<=b;i++){
// //         if(i*x>=a)
// //             m[i*x]++;
// //         if(i*y>=a)
// //             m[i*y]++;
// //     }
    

// //     for(auto pair : m){
// //         if(pair.second>1)
// //             count++;
// //     }
// //     cout << count << endl;
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x, y, a, b, count = 0;
//     cin >> x >> y >> a >> b;

//     unordered_set<int> red, pink;

//     for (int i = x,i1=y; i <= b; i += x,i1+=y)
//     {
//         red.insert(i);
//         pink.insert(i);
//     }
    
        
    

//     for (int i = a; i <= b; ++i)
//     {
//         if (red.count(i) && pink.count(i))
//         {
//             count++;
//         }
//     }

//     cout << count << endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    long long lcm=(x*y)/__gcd(x,y);

    int count=(b/lcm)-((a-1)/lcm);

    cout << count << endl;
    return 0;
}
