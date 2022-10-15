#include<bits/stdc++.h>
using namespace std;
 
int main()
{	
	int N;
	cin>>N;
	while(N){
		int n;
		cin>>n;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			int t;
			cin>>t;
			mp[t]=i+1;
		} 
		int ans=-1;
		for(auto [k,v]:mp){
			for(auto [k1,v1]:mp){
				if(gcd(k,k1)==1) ans=max(ans,v1+v);
			}
		}
		cout<<ans<<endl;
		N--;
	}
	return 0;
	
}	