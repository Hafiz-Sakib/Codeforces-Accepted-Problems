#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,ans,ok=1;cin>>n;
    double maxi=0,m;cin>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(ceil(arr[i]/m) >= maxi){
            maxi = ceil(arr[i]/m);
            ans = i;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}