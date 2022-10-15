#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ans = 0;
    int a;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >>a;
        ans = __gcd(ans,a);
    }
    cout <<ans*n;
	return 0;
}