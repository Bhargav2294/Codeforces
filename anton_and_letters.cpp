#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    unordered_set<char> ss;

    for(int i=1;i<s.length()-1;i++){
        if(s[i]!=' ' && s[i]!=',')
            ss.insert(s[i]);
    }

    cout << ss.size() << endl;
    return 0;
}