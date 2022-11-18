#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    long long n,m,sum=0;cin>>n>>m;
    long long arr[m];
    for(int i=0;i<m;i++) cin>>arr[i];
    sum += abs(1-arr[0]);
    for(int i=1;i<m;i++){
        if(arr[i]<arr[i-1]) sum += (n-arr[i-1])+abs(0-arr[i]);
        else if(arr[i]>arr[i-1]) sum += (arr[i]-arr[i-1]);
    }
    cout<<sum<<endl;
    return 0;
}