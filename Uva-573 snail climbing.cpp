#include<bits/stdc++.h>
using namespace std;
int main(){
    double h,u,d,f,x,s;
    while(cin>>h>>u>>d>>f){
            s=0;
        if(h==0)break;
        x=(f/100)*u;
        for(int i=1;;i++){
            s=s+u;
            if(s>h){
                cout<<"success on day "<<i<<endl;
                break;
            }
            s=s-d;
            if(s<0){
                cout<<"failure on day "<<i<<endl;
                break;
            }
            u=u-x;
            if(u<=0)u=0;
        }
    }
    return 0;
}
