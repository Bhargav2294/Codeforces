#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x,k;
        cin >> x >> k;

        for(int num=x;;num++)
        {
            int sum=0,temp=num;
            while(temp>0){
                sum += temp % 10;
                temp /= 10;
            }

            if(sum%k==0){
                cout << num << endl;
                break;
            }
        }
    }
    return 0;
}
