#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    sort(s.begin(),s.end());	
    for(ll i=0;i<=s.size()/2;i++){
    	if(i==(s.size()/2)){
    	cout<<s[s.size()/2+i];
		break;}
    	cout<<s[s.size()/2+i]<<s[i];
	}
	}