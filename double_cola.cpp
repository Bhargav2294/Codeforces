// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n,a=0,i=0,x=0;
//         cin >> n;

//         while(n>a){
//             a+=5*i;
//             i++;
//         }
//         x=n-5*(i-2)-5*(i-1);
//         x-=1,x/=(i-1);

//         if(x==0){
//             cout << "sheldon" << endl;
//         }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i=0;
    while(n>(1<<i)*5){
        n-=(1<<i)*5;
        i++;
    }

    int index=(n-1)/(1<<i);
    string names[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};

    cout << names[index] << endl;
    return 0;
}
