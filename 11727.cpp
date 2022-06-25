#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a[10];
    cin>>t;
    for(int i=1;i<=t;i++){
        for(int j=0;j<3;j++){
            cin>>a[j];
        }
        sort(a,a+3);
        cout<<"Case "<<i<<": "<<a[1]<<endl;
    }
    return 0;
}