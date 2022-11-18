#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,x,y,p,q;
    cin>>r>>x>>y>>p>>q;
    double dif=sqrt((double)(x-p)*(double)(x-p)+(y-q)*(y-q));
    double ans;
    if(dif==0)cout<<'0'<<endl;
    else if(dif<r)cout<<'1'<<endl;
    else 
    {
        //cout<<(dif-r)/(2*r)<<endl;
        ans=(dif-r)/(2*r);
        //if(ans>1){
        if(ans>((int)ans+0.5))cout<<ceil(ans)+1<<endl;
        else if(ans>(int)ans) cout<<ceil(ans)<<endl;
        else cout<<(int)ans+1<<endl;
       // }
        //else cout<<ceil(ans)<<endl;
       
    }
}