#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,a[100009];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    p=0;
    i=1;
    for(; i<=n; )
    {
        if((a[i]-p)<=0)
        {
            break;
        }
        i++;
        p++;
          if(i==(n+1))
        {
            i=1;
        }
    }
    cout<<i;
}