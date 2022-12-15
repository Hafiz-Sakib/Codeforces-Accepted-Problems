/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (auto a : v)
        {
            cout << a << " ";
        }
        for (auto &x : v)
        {
            cin >> x;
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int val = 0;
                for (int k = 0; k < m; k++)
                {
                    val += (abs(v[i][k] - v[j][k]));
                }
                ans = min(ans, val);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
