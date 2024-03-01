// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,count=0,x=0;
//     cin >> n;

//     string s;
//     cin >> s;

//     for(int i=0;i<n;i++){
//         if(s[i]=='X')
//             count++;
//     }

//     if(n/2<=count){
//         count-=n/2;
//         x=count;
//         for(int i=0;i<n;i++){
//             if(count==0)
//                 break;
//             if(s[i]=='X'){
//                 s[i]='x';
//                 count--;
//             }
//         }
//     }
//     else{
//         count=n/2-count;
//         x=count;
//         for(int i=0;i<n;i++){
//             if(s[i]=='x'){
//                 s[i]='X';
//                 count--;
//             }
//             if(count==0)
//                 break;
//         }
//     }
//     cout << x << endl;
//     cout << s << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int countX = count(s.begin(), s.end(), 'X');
    int countx = n - countX;

    int diff = abs(countX - countx) / 2;
    cout << diff << endl;

    char target = (countX > countx) ? 'x' : 'X';

    for (char &c : s)
    {
        if (diff == 0)
            break;
        if (c == target)
        {
            c = (c == 'X') ? 'x' : 'X';
            diff--;
        }
    }

    cout << s << endl;

    return 0;
}
