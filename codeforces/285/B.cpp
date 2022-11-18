#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define space ' '
#define newline "\n"
int main()
{
    Boost;
        int n,s,t;
        cin>>n>>s>>t;
        vector<ll> p(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>p[i];
        }
        int count=0;
        int test=s;
        while(true)
        {
            if(test==t)
            {
                cout<<count<<endl;
                break;
            }
            test=p[test];
            if(test==s)
            {
                cout<<"-1"<<endl;
                break;
            }
            count++;
        }

    return 0;

}
