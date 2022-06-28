#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,j,b,c,arr[20];
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+3);
        if(arr[0]+arr[1]>arr[2])
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}