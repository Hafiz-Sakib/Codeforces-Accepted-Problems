#include<bits/stdc++.h> 
using namespace std; 
#define forn(i, n) for(int i = 0; i<int(n); i++)

void solve(){
    string p; cin>>p; 
    bool flag = false; 
    int n = p.length(); 
    forn(i, n){
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9') {flag = true; break;}
    }
    cout<<(flag==true ? "YES\n" : "NO\n");
}
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
    cout.tie(NULL); 
    solve(); 
}