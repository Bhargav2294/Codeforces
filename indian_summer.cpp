#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    set<pair<string,string>> leaves;

    for(int i=0;i<n;i++){
        string species,color;
        cin >> species >> color;
        leaves.insert({species, color});
    }

    cout << leaves.size() << endl;

    return 0;
}