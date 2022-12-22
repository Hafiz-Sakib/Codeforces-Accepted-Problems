#include<bits/stdc++.h>
#define ll long long
#define Fast cin.tie(0);cin.sync_with_stdio(0) ;
#define ld long double
using namespace std ;

int main()
{
    Fast
    int t;cin >> t;
    while(t--){
    int n;
    cin >> n;
    if(n%2){
        cout<<n<<" "<<1<<" ";
        for(int i=n-1;i>1;i--)cout<<i<<" ";
        cout<<"\n";
    }else {
        for(int i=n;i>=1;i--)cout<<i<<" ";
        cout<<'\n';
    }
    }
    return 0;
}
