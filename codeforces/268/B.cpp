#include"bits/stdc++.h"
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    FAST_IO;
    int t;cin>>t;
    int sum=t;
    for(int i=1;i<t;i++){
        sum += i*(t-i);
    }
    cout<<sum<<endl;
    return 0;
}