#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,count=0;
    cin >> a >> b;

    while(a!=b){
        if(a>b){
            if(a%5==0)
                a/=5;
            else if(a%3==0)
                a/=3;
            else if(a%2==0)
                a/=2;
            else{
                cout << -1 << endl;
                return 0;
            }
        }
        else{
            if(b%5==0)
                b/=5;
            else if(b%3==0)
                b/=3;
            else if(b%2==0)
                b/=2;
            else{
                cout << -1 << endl;
                return 0;
            }
        }
        count++;
    }
    cout << count << endl;
    return 0;
}