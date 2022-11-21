#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string x = "Timru";
        int n;
        cin >> n;
        string s;
        cin >> s;
        // sort(x.begin(), x.end());
        sort(s.begin(), s.end());
        cout << (x == s ? "YES" : "NO") << '\n';
        // cout << x << ' '<< s << endl;
    }
    return 0;
}