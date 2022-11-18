#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        int count=0;

        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=i;j<n&&cnt<=100;j++,cnt++)
            {
                mp[s[j]]++;
                
                int temp=0;
                for(auto x:mp)
                {
                    if(x.second>temp)
                    {
                        temp=x.second;
                    }
                }
                if(mp.size()>=temp)
                {
                    count++;
                }

            }
            mp.clear();
        }
        cout<<count<<endl;
    }
}