#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        if (n==2) cout<<2<<endl;
        else if (n%2==0) cout<<0<<endl;
        else cout<<1<<endl;
   }
}