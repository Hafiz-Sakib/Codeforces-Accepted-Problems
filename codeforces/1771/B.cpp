/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
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

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n + 1, 1);
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            if (x == y)
            {
                continue;
            }
            if (x > y)
            {
                arr[x] = max(arr[x], y + 1);
            }
            else
            {
                arr[y] = max(arr[y], x + 1);
            }
        }
        long long out = 0;
        for (ll i = 1; i <= n; i++)
        {
            arr[i] = max(arr[i], arr[i - 1]);
            out += (long long)(i - arr[i] + 1);
        }
        cout << out << "\n";
    }

    return 0;
}