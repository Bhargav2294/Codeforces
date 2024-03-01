#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        ll n,k,p=1,a=0;
        cin >> n >> k;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            p*=v[i];
        }
        if(2023%p!=0){
            cout << "NO" << endl;
            
        }else{
            cout << "YES" << endl;
            for(int i=0;i<k;i++){
                if(a==0){
                    cout << 2023/p << " "; 
                    a=1;
                }else{
                    cout << 1 << " ";
            }
        }
        cout << endl;
        }
    }
    return 0;
}
