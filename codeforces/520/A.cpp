#include<bits/stdc++.h> 
using namespace std; 
#define forn(i, n) for(int i = 0; i<int(n); i++)
int arr[26]; 
void solve(){
    int n; cin>>n; 
    string s; cin >> s; 
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    bool flag = true; 
    forn(i, n){int x = s[i] - 'a'; arr[x]++;}
    forn(i, 26){
        if(arr[i]==0){
            flag = false; 
            break; 
        }
    }
    cout<<(flag==true ? "YES\n" : "NO\n"); 
     
}
int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
    cout.tie(NULL); 
    solve(); 
}