#include<bits/stdc++.h>
using namespace std;

bool leap(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;

}

int main()
{
    while(1)
    {
        int n,d,m,y,c,count=0,ans=0;
        int month[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
        cin>>n;
        if(n==0)
            break;
        cin>>d>>m>>y>>c;

        if(leap(y))
            month[2]=29;
        int dayM=month[m];
        d++;
        if(d>dayM)
        {
            d=d-dayM;
            m++;
        }
        if(m>12)
        {
            m=m-12;
            y++;
        }
        for(int i=1; i<n; i++)
        {
            int d1,m1,y1,c1;
            cin>>d1>>m1>>y1>>c1;
            if(d==d1 && m==m1 && y==y1)
            {
                count++;
                ans+=(c1-c);
            }
            if(leap(y1))
                month[2]=29;
            else
                month[2]=28;

            dayM=month[m1];
            d1++;

            if(d1>dayM)
            {
                d=d1-dayM;
                m=m1+1;
            }
            else
            {
                d=d1;
                m=m1;
            }
            if(m>12)
            {
                m=m-12;
                y=y1+1;
            }
            else
            {
                y=y1;
            }
            c=c1;
        }
        cout<<count<<' '<<ans<<endl;
    }
}
