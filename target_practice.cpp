#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int point=0;
        char a[10][10];

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++)
                cin >> a[i][j];
        }

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(a[i][j]=='X'){
                    int dist=min({i,j,9-i,9-j});
                    point+=(dist<5) ? (dist+1) : 0;
                }
            }
        }

        cout << point << endl;
    }

    return 0;
}
