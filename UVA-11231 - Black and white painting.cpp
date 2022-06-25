#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,c;
    while(cin>>n>>m>>c)
    {
        if(n+m+c==0)
            break;
        n=n-7;
        m=m-7;
        long long ans=n*m;
        if(c==1)
            ans++;
        cout<<ans/2<<endl;
    }
}
