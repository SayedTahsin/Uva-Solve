#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    char c;
    cin>>c;
    ll n;
    cin>>n;
    ll x=0;
    ll ans=0;
    for(int i=0; s[i]; i++)
    {
        x=x*10+ s[i]-48;
        while(x<n && x!=0)
        {
            i++;
            x=x*10 +s[i]-48;
        }
        ans=ans*10+(x/n);
        x=x%n;
    }
    if(c=='%')
    {
        cout<<x<<endl;
    }
    else
        cout<<ans<<endl;

}
