#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 200000
vector<ll>adj[20000];
int main()
{
    ll n, i, j, x;
    for(i=1; i<=mx; i++)
    {
        for(j=i; j<=mx; j+=i)
        {
            adj[j].push_back(i);
        }
    }
    while(cin>>x)
    {
        if(x==0)
            break;
        if(adj[x].size()%2 == 0)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }
}
