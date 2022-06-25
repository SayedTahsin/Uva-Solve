#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b;
    cin>>b;
    while(b--)
    {
        int a=0,r=0,m=0,p=0,g=0,t=0,s=0;
        string str;
        cin>>str;
        for(int i=0; str.size(); i++)
        {
            if(str[i]=='A')
                a++;
            if(str[i]=='M')
                m++;
            if(str[i]=='R')
                r++;
            if(str[i]=='I')
                p++;
            if(str[i]=='G')
                g++;
            if(str[i]=='T')
                t++;
        }
        while(1)
        {
            if(a>2 && m>0 && r>1 && p>0 && g>0 && t>0){
                s++;
            a=a-3;
            m=m-1;
            r=r-2;
            p=p-1;
            g=g-1;
            t=t-1;
        }
        else
            break;
        }
    cout<<s<<endl;
}
    return 0;
}


