#include<bits/stdc++.h>
using namespace std;

int main(){
    int t=1;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string melody;
        cin >> melody;

        unordered_map<string,int> m;

        for(int i = 0;i<n-1;i++){
            string pair = "";
            pair += melody[i];     
            pair += melody[i + 1]; 
            m[pair]++;
        }
        cout << m.size() << endl;
    }
    return 0;
}
