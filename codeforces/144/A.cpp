#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,c=INT_MIN,d=INT_MAX,e,l=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        c=max(arr[i],c);
        d=min(arr[i],d);
    }
    for(int i=0;i<n;i++){
        if(c==arr[i]){
           e=i;
           break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(d!=arr[i]){
            l++;
        }
        else break;
    }
    int j = (n-l)-1;
    if(j<e) cout<<l+(e-1)<<endl;
    else cout<<l+e<<endl;
    return 0;
}