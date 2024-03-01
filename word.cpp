#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i,j=97,count=0;

    for (i = 0; i < s.length(); i++){
        if (s[i]>=97 && s[i]<=123)
                count++;  
    }
     
    int b=s.length()-count;
    
    if(b>count)
    {
        for(char &c :s)
        {
            c=toupper(c);
        }
    }
    else
    {
        for(char &c :s)
        {
            c =tolower(c);
        }
    }

    cout << s;

    return 0;
}
