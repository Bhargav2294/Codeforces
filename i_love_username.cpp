#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,min=0,max=0;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];

        if(i==0){
            min=a[0],max=a[0];
        }
        else{
            if(a[i]>max){
                count++;
                max=a[i];
            }
            if(a[i]<min){
                count++;
                min=a[i];
            }
        } 
    }

    cout << count;

    return 0;
}