#include<bits/stdc++.h>
#define lln long long int
using namespace std;
int main()
{
    lln l,u,d,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>u;
        lln ma=INT_MIN;
        lln ans;
        for(int j=l; j<=u; j++)
        {
            lln count=0;
            for(int i=1; i*i<=j; i++)
            {
                if(j%i==0)
                {
                    count++;
                    lln k=j/i;
                    if(k!=i)
                        count++;
                }
            }
            if(count>ma)
            {
                ma=count;
                ans=j;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<ans<<" has a maximum of "<<ma<<" divisors.\n";
    }
}
