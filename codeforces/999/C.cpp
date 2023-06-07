#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,i,a[200]={0},b[200]={0},sum=0;
  string s;
    cin>>n>>k;
   cin>>s;
   for(i=0; i<n; i++)
   {
       a[s[i]]=a[s[i]]+1;
   }
   for(i=97; i<=122; i++)
   {
       if(a[i]<=k)
       {
           b[i]=sum+a[i];
           k=k-a[i];
       }
       else if(a[i]>k)
       {
           b[i]=sum+k;
           k=0;
       }
   }
   for(i=0; i<n; i++)
   {
       if(b[s[i]]>=1)
       {
           b[s[i]]=b[s[i]]-1;
       }
       else if(b[s[i]]<=0)
       {
           cout<<s[i];
       }
   }

}