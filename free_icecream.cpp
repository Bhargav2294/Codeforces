#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    long long x;
    cin >> n >> x;

    while(n--){
        string s;
        cin >> s;
        
        long long d;
        cin >> d;

        if(s[0]=='-'){
            if(x-d>=0)
                x-=d;
            else
                c++;
        }      
        else
            x+=d;
    }
    cout << x << " " << c << endl;
    return 0;
}