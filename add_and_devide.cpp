#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1, a, b;
    //long long n;
    cin >> t;

    while (t--)
    {
        int count=0;
        cin >> a >> b;

        if(a<b)
            count++;
        else if(a==b)
            count+=2;
        else if(b==1){
            count+=2,b+=2;
            while(a>b){
                if(a%b==0){
                    b++;count++;
                }
                a/=b;
                count++;
                
            }
            if(a==b)
                count += 2;
            else
                count++;
        }
        else{
            
            while(a>b){
                if (a % b == 0)
                {
                    b++;
                    count++;
                }
                a/=b;
                count++;
                
            }
            if(a==b)
                count+=2;
            else
                count++;
        }
        cout << count << endl;
    }
    return 0;
}