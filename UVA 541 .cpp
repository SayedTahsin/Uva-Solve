#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool a[100][100];
    int n,sum,r,c,p,q;
    while(cin>>n)
    {
        sum=0;
        r=0;
        c=0;
        if(n==0)
            break;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>a[i][j];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)sum+=a[i][j];
                if(sum%2==0)
                    r=r;
                else{
                    p=i+1;
                    r++;
                    }
            sum=0;
        }
        for(int j=0; j<n; j++)
        {
            for(int i=0; i<n; i++)sum+=a[i][j];
                if(sum%2==0)
                    c=c;
                else{
                    q=j+1;
                    c++;
                    }
            sum=0;
        }
        if(c==0 && r==0)cout<<"OK\n";
        else if(c==1 && r==1) cout<<"Change bit ("<<p<<","<<q<<")"<<endl;
        else cout<<"Corrupt\n";
    }
    return 0;
}
