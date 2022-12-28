#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast(){
cin.tie(0);
cout.sync_with_stdio(NULL);
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        for(int i=n-2;i>=0;i--){
            arr[n-1]*=arr[i];
            arr[i]=1;
        }
        long long sum=(n-1)+arr[n-1];
        //cout<<sum;
        sum*=2022;
        cout<<sum<<endl;

    }
    return 0;
}