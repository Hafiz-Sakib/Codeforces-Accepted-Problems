#include<bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int n,cnt = 0,sum = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    sum = sum/2;
    sort(arr,arr+n);
    int sum1=0;
    for(int i=n-1;i>=0;i--){
        sum1 += arr[i];
        cnt++;
        if(sum1 > sum){
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}