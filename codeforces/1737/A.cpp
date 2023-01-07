#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define all(s) s.begin(), s.end()
#define sz(x) (int)(x).size()
#define fastio cin.tie(0) -> sync_with_stdio(0)
#define pii pair<int, int>
#define ll long long
#define F(i, a, b) for(int i=(a); i <= (b); ++i)
#define SUM 1
#define MAX 0
#define pii pair<int, int>
#define pll pair<ll, ll>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define fi first
#define se second
#define INF 0x3f3f3f3f
#define HERE cout << "HERE: " << __LINE__ << "\n";


#define DEBUG 0
#define SINGLE 0

void debug(){
    #if DEBUG
    freopen("test1.txt", "r", stdin); 
    #else
    fastio;
    #endif      
}

void solve(int test){
    int n, k;
    cin >> n >> k;
    int g = n/k;
    int h[200];
    memset(h, 0, sizeof(h));
    string s, ans;
    cin >> s;
    for(int i = 0; i < n; ++i){
    	h[s[i]]++;
    }
    char last = 'z';
    for(int i = 0; i < k; ++i){
    	char c = 'a';
    	int j = 0;
        bool into = false;
    	for(c = 'a'; c < last; ++c, ++j){
    		if(h[c] > 0 && j < g){
    			--h[c];
    		}else{
    			into = true;
    			last = c;
    			ans += last;
    			break;
    		}
    	}
    	if(!into) ans += last;
    }
    cout << ans << "\n";
}

int main(){
    debug();
    int t = 1;
    int i = 0;
    #if !SINGLE
    cin >> t;
    #endif
    while(t--){
        solve(i++);
    }
}