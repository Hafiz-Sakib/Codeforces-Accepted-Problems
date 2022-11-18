#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    while(t--){
        int a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
        if(b==d && b!=0 && b>f) cout<<max(a,c)-min(a,c)<<endl;
        else if(d==f && d!=0 && d>b) cout<<max(c,e)-min(c,e)<<endl;
        else if(b==f && b!=0 && b>d) cout<<max(a,e)-min(a,e)<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}