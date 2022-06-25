#include<bits/stdc++.h>
#define lln long long
using namespace std;
int main()
{
    lln n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        lln x=n;
        vector<lln>v;
        cout<<x<<"  =  ";
        if(n<0)
        {
            cout<<-1<<"  x  ";
        }
        n=abs(n);
        lln i=2;
        while(n>0)
        {

            if(n%i==0)
            {
                cout<<i;
                n=n/i;
                if(n==1)
                {
                    cout<<endl;
                    break;
                }
                else{
                    cout<<"  x  ";
                }
            }
            else
            {
                i++;
            }
        }


    }
}

