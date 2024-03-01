#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin >> n;

    vector<int> digits;

    while(n>0){
        digits.push_back(n%10);
        n/=10;
    }

    if(digits[digits.size()-1]!=1){
        cout << "NO" << endl;
    }
    else{
        for(int i=1;i<digits.size()-1;i++){
            if(digits[i]==4 && digits[i-1]==4 && digits[i+1]==4){
                cout << "NO" << endl;
                return 0;
            }
        }
        for(int i=0;i<digits.size();i++){
            if(digits[i]!=1 && digits[i]!=4){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl; 
    }
    return 0;
}
