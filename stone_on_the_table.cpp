#include <iostream>
using namespace std;

int main(){

    int count = 0, n;
    cin >> n;
    string s;
    cin >> s;
    
    
    for(int i=0; i < n-1; i++){
         if(s[i]==s[i+1]){
            count++;
         }
    }
    cout << count << endl;
    return 0; 
}