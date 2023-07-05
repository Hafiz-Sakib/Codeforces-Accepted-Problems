#include<iostream>
using namespace std;
int a[1005];
int x[1001],y[1005];
int n,ans=0;
void dfs(int k)
{
    a[k]=1;
    for(int i=1;i<=n;i++)
        if((x[k]==x[i]||y[k]==y[i])&&!a[i])
        dfs(i);
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>x[i]>>y[i];
    for(int i=1; i<=n; i++)
    {
        if(!a[i]) dfs(i),ans++;
    }
    cout<<ans-1<<endl;
}
	 		  	  		  		 	  	 	   	  			