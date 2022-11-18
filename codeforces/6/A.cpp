#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int arr[4];
    for(int i=0;i<4;i++) cin>>arr[i];
    sort(arr,arr+4);
    if((arr[0]+arr[1])>arr[2] || (arr[0]+arr[1])>arr[3] || (arr[1]+arr[2])>arr[3]) cout<<"TRIANGLE"<<endl;
    else if((arr[0]+arr[1])==arr[2] || (arr[0]+arr[1])==arr[3] || (arr[1]+arr[2])==arr[3]) cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
}