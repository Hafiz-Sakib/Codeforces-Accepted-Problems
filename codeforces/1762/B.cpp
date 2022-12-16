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
        int n;
        cin >> n;
        
        vector<vector<int>> v;
        for (int i = 0; i < n; ++i)

        {
            int a;
            cin >> a;
            v.push_back({a, i + 1});
        }
        sort(v.begin(), v.end());

        cout << n - 1 << endl;
        for (int i = 1; i < n; ++i)

        {
            int p = (v[i][0]) % v[i - 1][0];
            if (p == 0)

            {
                cout << v[i][1] << " " << 0 << endl;
                continue;
            }
            v[i][0] = v[i][0] + v[i - 1][0] - p;
            cout << v[i][1] << " " << v[i - 1][0] - p << endl;
        }
    }

    return 0;
}