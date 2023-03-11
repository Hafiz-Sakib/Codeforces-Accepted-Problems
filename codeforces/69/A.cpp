#include<bits/stdc++.h> 
using namespace std; 
void solve(){
    int n;
    cin>>n; 
    int xs = 0, ys  = 0, zs = 0;
    while(n--){
        int x, y, z; cin>>x>>y>>z; 
        xs+=x;
        ys+=y;
        zs+=z; 
    }
    cout<<(xs==0 && ys==0 && zs==0 ? "YES\n" : "NO\n");
}
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
    cout.tie(NULL); 
    solve(); 
}