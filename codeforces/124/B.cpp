#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long tint;
  
#define forsn(i, s, n) for(int i=s;i<int(n);i++)
#define forn(i, n) forsn(i, 0, n)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(), v.rend() 
#define NACHO ios::sync_with_stdio(0); cin.tie(NULL);
 
const tint INF = 2000000000000;
const tint MOD = 998244353;//1000000007;
const int N = 100009;
 
int main(){
	int n, k; cin >> n >> k;
	vector<string> perm (n);
	forn(i, n){
		cin >> perm[i];
	}
	vector<int> pos (k);
	forn(i, k){
		pos[i] = i;
	}
	int ret =1000000000;
	do{
		int mini = 100000000, maxi = -100000000;
		forn(i, n){
			string act = perm[i];
			forn(j, k){
				act[j] = perm[i][pos[j]]; 
			}
			int a;
			istringstream(act) >> a;
			mini = min(mini, a);
			maxi = max(maxi, a);
			
		}
		ret = min(ret, maxi-mini);
	}while(next_permutation(all(pos)));
	cout << ret << endl;
}