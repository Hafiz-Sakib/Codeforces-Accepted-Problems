#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int a[26];
    for(int i=0;i<26;i++)
    {
        cin>>a[i];
    }
    int x=*max_element(a,a+26);
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        ans+=a[(int)s[i]-97]*(i+1);
    }
    for(int i=1;i<=k;i++)
    {
        ans+=x*(i+s.size());
    }
    cout<<ans<<endl;
}