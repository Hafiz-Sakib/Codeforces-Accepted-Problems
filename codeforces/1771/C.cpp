#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	vector<bool>isPrime(1e5 + 1,true);
	isPrime[0] = isPrime[1] = false;
	for(int i = 2;i * i <= 1e5;++i){
		if(isPrime[i]){
			for(int j = i * i;j <= 1e5;j += i)isPrime[j] = false;
		}
	}
	vector<int>primes;
	for(int i = 2;i <= 1e5;++i)if(isPrime[i])primes.push_back(i);
	while(t--){
		int n;
		bool check = false;
		cin >> n;
		map<int, int>pcnt;
		for(int i = 0;i < n;++i){
			int a;
			cin >> a;
			for(int j : primes){	
				if(j * j > a)break;
				if(a % j == 0){
					pcnt[j]++;
					if(pcnt[j] >= 2)check = true;
					while(a % j == 0){a /= j;}
				}
			}
			if(a > 1){pcnt[a]++;if(pcnt[a] >= 2)check = true;}
		}
		if(check)cout << "YES\n";
		else cout << "NO\n";
	
	}
}
