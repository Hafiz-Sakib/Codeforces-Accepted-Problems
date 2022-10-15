#include <bits/stdc++.h>
using namespace std;
#define M 1000005
#define int long long
int T,n,m,a[M],b[M],fg,k,f[M],ans,ax,vis[M];
signed main() {
	cin>>T;
	while(T--) {
		cin>>n,ax=0; int now=0;
		for(int i=1;i<=n;i++) cin>>a[i],ax|=a[i],vis[i]=0;
		while(now!=ax) {
			int nxt=now,nex;
			for(int i=1;i<=n;i++) {
				if((now|a[i])>nxt) nex=i,nxt=(now|a[i]);
			}
			now=nxt,vis[nex]=1;
			cout<<a[nex]<<' ';
		}
		for(int i=1;i<=n;i++) if(!vis[i]) cout<<a[i]<<' '; cout<<endl;
	}
	return 0;
}