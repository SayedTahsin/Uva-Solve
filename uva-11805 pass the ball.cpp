#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,k,p;
        cin>>n>>k>>p;
        int s=(k+p)%n;
        if(s==0)s=n;
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k,n,p,i=1;
    cin>>t;
    while(t--){
        k=0;
        cin>>n>>k>>p;
        while(p--){
            if(k==n){
                k=1;
                continue;
            }
            k++;
        }
        cout<<"Case "<<i<<": "<<k<<endl;
    }
    return 0;
}
*/
