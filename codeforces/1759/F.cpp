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
const int mod = 1e9+7;
const int mxn = 1e5+5;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	Q{
		int n, p;
		cin >> n >> p;
		map<int, int> mp;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]] = 1;
		}
		int i = 0;
		while(mp.count(i)){
			i++;
		}
		int j = p-1;
		while(mp.count(j)){
			j--;
		}
		int k = a.back()-1;
		while(k >= 0 && mp.count(k)){
			k--;
		}
		if(k < 0){
			cout << max(0, j - a.back()) << '\n';
		}
		else{
			debug("HI");
			int ans = p - a.back();
			mp[0] = 1;
			if(n == 1) mp[1] = 1;
			else {
				for(int ii = n-2; ii >= -1; ii--){
					debug(ii);
					if(ii == -1){
						mp[1] = 1;
					}
					else if(a[ii] < p-1){
						mp[a[ii]+1] = 1;
						break;
					}
				}
			}
			while(k >= 0 && mp.count(k)){
				k--;
			}
			ans += max(k, 0);
			cout << ans << "\n";
		}
	}
			
}


