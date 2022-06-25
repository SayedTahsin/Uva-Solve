#include<bits/stdc++.h>
#define lln long long
using namespace std;
int main()
{

    string s;
    while(cin>>s)
    {
        lln ans=0;
        for(int i=0; s[i]; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                ans+=(s[i]-38);
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                ans+=(s[i]-96);
            }
        }
        int flag=0;
        for(int j=2; j*j<=ans; j++)
        {
            if(ans%j==0)
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"It is not a prime word.\n";
        }
        else
            cout<<"It is a prime word.\n";
    }
    return 0;
}