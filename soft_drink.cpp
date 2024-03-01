#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,a,b;
    cin >> n >> k >> l >> c >> d >> p >> a >> b;

    cout << (min({((k*l)/a),c*d,p/b}))/n;
    return 0;
}