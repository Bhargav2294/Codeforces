#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int count=0;

        if((s[0]-'0')==0)
            count=(s[0]-'0')+10;
        else
            count=s[0]-'0';

        for(int i=1;i<4;i++){
            if((s[i]-'0')!=0)
                if((s[i-1]-'0')!=0)
                    count+=(abs((s[i]-'0')-(s[i-1]-'0'))+1);
                else
                    count+=(10-abs(s[i]-'0')+1);
            else
                if((s[i-1]-'0')!=0)
                    count+=(10-abs(s[i-1]-'0')+1);
                else
                    count++;
        }

        cout << count << endl;
    }
    return 0;
}
