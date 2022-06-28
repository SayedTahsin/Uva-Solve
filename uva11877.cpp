#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    while(cin>>n){
        if(n==0)break;
            count=0;
    while(1){
        count+=(n/3);
        n=(n%3)+(n/3);
        if(n==2)n=n+1;
        if(n<2)break;
    }
    cout<<count<<endl;
    }
    return 0;
}