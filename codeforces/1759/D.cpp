#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream& os, const pair<A, B>&p) {return os<<'(' << p.first << ", " << p.second << ')';}
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream& os, const T_container& v) {os << '{'; string sep;for(const T& x: v) os << sep << x, sep = ", "; return os << '}';}
void dbg_out() {cerr<<endl;}
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {cerr << " " << H; dbg_out(T...); }

#ifdef SMIE
#define debug(args...) cerr << "(" << #args << "):",dbg_out(args)
#else 
#define debug(args...)
#endif

#define pb				push_back
#define eb				emplace_back
#define mem(x, i)	memset(x, i, sizeof(x))
#define ff				first
#define ss				second
#define all(x)		x.begin(), x.end()
#define Q 				int totalcase; cin >> totalcase; for(int caseno=1; caseno<=totalcase; caseno++)


typedef long long 			ll;
typedef unsigned long long 	ull;
typedef long double 		ld;
typedef pair<ll, ll> 		pi;
ll powmod(ll a, ll b, ll MOD) { ll res = 1;a %= MOD;assert(b >= 0);for (; b; b >>= 1) { if (b & 1)res = res * a % MOD;a = a * a % MOD; }return res; }

const double PI = acos(-1.0);
const int mod = 1e9+7;
const int mxn = 1e5+5;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	Q{
		ll n, m;
		cin >> n >> m;
		int c2=0, c5=0;
		ll nn = n;
		while(n%2==0){
			c2++;
			n/=2;
		}
		while(n%5==0){
			c5++;
			n/=5;
		}
			ll ans = 1;
			while(c2 < c5){
				if(ans*2 <= m){
					ans *= 2;
					c2++;
				}
				else break;
			}
			while(c2 > c5){
				if(ans*5 <= m){
					ans *= 5;
					c5++;
				}
				else break;
			}
			while(ans*10 <= m){
				ans *= 10;
			}
			for(ll i = 10; i >= 2; i--){
				while(ans*i <= m) ans*=i;
			}
			cout << nn*ans << "\n";
		}
}


