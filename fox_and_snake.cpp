#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    for(int j=1;j<=m;j++)
    {
        if(j%2==1){
            for(int i=0;i<n;i++)
                cout << "#";
        }
        else if(j%4==0){
            for(int i=0;i<n;i++){
                if(i==0)
                    cout << "#";
                else
                    cout << ".";
            }
        }
        else{
            for(int i=0;i<n;i++)
            {
                if(i==n-1)
                    cout << "#";
                else
                    cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}