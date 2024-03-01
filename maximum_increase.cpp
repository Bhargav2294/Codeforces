#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=1,y=1;
    cin >> n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];

        if(i>0){
            if(v[i]>v[i-1])
                x++;
            else{
                if(x>y)
                    y=x;
            x=1;
            }
        }
    }
    cout << max(x, y) << endl;
    return 0;
}
