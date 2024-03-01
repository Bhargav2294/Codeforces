#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        string anyword;
        cin >> anyword;
     
        if(anyword.length() < 11)
            cout << anyword << endl;
        else{
        cout << anyword[0] << anyword.length() - 2 << anyword[anyword.length() - 1] << endl;
        }
    }
    cout << endl;

    return 0;
}














// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int m, i;
//     scanf("%d", &m);
//     while (m--)
//     {
//         char s[100];
//         scanf("%s", s);
//         if (strlen(s) <= 10)
//             printf("%s", s);
//         else
//         {
//             printf("%c", s[0]);
//             printf("%d", strlen(s) - 2);
//             printf("%c", s[strlen(s) - 1]);
//         }
//         printf("\n");
//     }
//     return 0;
// }