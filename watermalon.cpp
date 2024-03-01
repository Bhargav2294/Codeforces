#include<iostream>
using namespace std;

int main(){

    int n;
    int small = n/2;
    cin >> n;

    if(n>2 && n%2==0){ 
        if((small)%2==0){
            cout << "Yes" << endl;
        }
        else if(((small - 1) % 2 == 0) && ((small + 1) % 2 == 0)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    else{
       cout << "No" << endl;
    }

}