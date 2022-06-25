#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,b,w,d,a,i;
    string s;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        b=0;
        w=0;
        d=0;
        a=0;
        cin>>n;
        cin.ignore();
        cin>>s;
        for( i=0; s[i]; i++)
        {
            if(s[i]=='A')
                a++;
            if(s[i]=='W')
                w++;
            if(s[i]=='B')
                b++;
            if(s[i]=='T')
                d++;
        }
        if(b==(n-a)&& b>0)
            cout<<"Case "<<j+1<<": BANGLAWASH ";
        else if(w==(n-a)&& w>0)
            cout<<"Case "<<j+1<<": WHITEWASH ";
        else if(b>w)
            cout<<"Case "<<j+1<<": BANGLADESH "<<b<<' - '<<w<<" ";
        else if(w>b)
            cout<<"Case "<<j+1<<": WWW "<<w<<' - '<<b<<" ";
        else if(a==n)
            cout<<"Case "<<j+1<<": ABANDONED";
        else
            cout<<"Case "<<j+1<<": DRAW "<<b<<" "<<d<<" ";
    }
    return 0;
}
