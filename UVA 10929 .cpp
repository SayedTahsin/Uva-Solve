#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s && s!="0"){
        int a=0;
        for(int i=0;s[i];i++){
            a=(a*10+(s[i]-48))%11;
        }
        cout<<s;
        puts( a==0 ? " is a multiple of 11." : " is not a multiple of 11.");
    }
    return 0;
}
/*112233
30800
2937
323455693
5038297
112234
0*/
