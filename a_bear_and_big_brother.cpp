#include <iostream>
using namespace std;

int main()
{

    int m,n,count=0;
    cin >> m;
    cin >> n;


    if(m<=n){
        while(m <= n){
            m=m*3;
            n=n*2;
            count++;
        }
    }
    cout << count;
}
