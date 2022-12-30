#include<bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        int a[n],i;
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        string s;
        for(int i=0;i<m;i++) {
            s.append("B");
        }
        map<int,int> cnt;
        for(int i=0;i<n;i++) {
            cnt[a[i]]++;
            if(cnt[a[i]]==1) {
                if(a[i]>(m/2))
                a[i] = m+1-a[i];
            }
            if(cnt[a[i]]==2) {
                if(a[i]<=(m/2))
                a[i] = m+1-a[i];
                
            }
            
            if(s[a[i]-1]!='A') {
                s[a[i]-1]='A';
            }
            else {
                s[m-a[i]]='A';
            }
        }
        cout << s << endl;
    }
    return 0;
}