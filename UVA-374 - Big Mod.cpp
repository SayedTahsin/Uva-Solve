
#include<bits/stdc++.h>
#define lln long long
using namespace std;
lln big_mod(lln b,lln p,lln m)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        lln temp=(big_mod(b,p/2,m))%m;
        return (temp*temp)%m;
    }
    else
    {
        return ((b%m)*(big_mod(b,p-1,m)%m))%m;
    }
}
int main()
{
    lln b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<big_mod(b,p,m)<<endl;
    }
}
