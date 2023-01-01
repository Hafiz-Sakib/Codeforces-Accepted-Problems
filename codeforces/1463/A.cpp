#include <bits/stdc++.h>
#define int long long
namespace Enkindled_Hope {
	template<typename T>inline T read(){T x=0,w=1;char c=0;while(c<'0'||c>'9'){if(c=='-')w=-1;c=getchar();}while(c>='0'&&c<='9'){x=x*10+(c-'0');c=getchar();}return x*w;}template<typename T>inline void write(T x){if(x<0){x=-x;putchar('-');}if(x>9)write(x/10);putchar(x%10+'0');}inline int getInt(){return read<int>();}inline int putInt(int x,char c){write<int>(x),putchar(c);return 0;}
	const int mod=998244353;int pw(int a,int b,int p=mod){int res=1;while(b){if(b&1)res=res*a%p;a=a*a%p;b>>=1;}return res;}int exgcd(int a,int b,int&x,int&y){if(!b){x=1,y=0;return a;}int res=exgcd(b,a%b,y,x);y-=(a/b*x);return res;}int inv(int x,int p=mod){exgcd(x,p,x,*new int);return(x%p+p)%p;}
} using namespace Enkindled_Hope;
using namespace std;
#define rep(i, a, b) for(int i = a; i <= b; i++)
signed main() {
	int t = getInt();
	while(t--) {
		int a = getInt(), b = getInt(), c = getInt();
		if((a + b + c) % 9 || min(min(a, b), c) < (a + b + c) / 9) puts("No");
		else puts("Yes");
	}
	return 0;
}
