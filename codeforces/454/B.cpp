#include<bits/stdc++.h>
using namespace std;
#define p cout<<"p"<<endl;



int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            flag=i;
            count++;
        }
    }
    if(flag==0)cout<<"0"<<endl;
    else if(count>1)cout<<"-1"<<endl;
    else if(a[n-1]<=a[0])cout<<n-flag<<endl;
    else cout<<"-1"<<endl;
    
}