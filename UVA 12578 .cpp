#include<bits/stdc++.h>
#include<cmath>
#include <iomanip>
#define pi acos(-1)
using namespace std;
int main(){
    int T;
    double w,r,A,G,R,L;
    cin>>T;
    while(T--){
        cin>>L;
        w=(L*6)/10;
        r=L/5;
        A=L*w;
        R=pi*r*r;
        G=A-R;
        cout<<fixed<<setprecision(2)<<R<<" "<<G<<endl;
    }
    return 0;
}
