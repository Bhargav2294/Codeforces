#include<iostream>
using namespace std;

int main(){

    int n;
    int p;
    int flag=0;
    int count=0;

    cin >> n;

    for(int i=0;i<n;i++){
        for(int f=0;f<3;f++){
            cin >> p;
            if (p==1){
                flag++;
            }
        }
        if(flag>=2){
            count++;
        }
        flag=0;
    }
    cout << count << endl;
}