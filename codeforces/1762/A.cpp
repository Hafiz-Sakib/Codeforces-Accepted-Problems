/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
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
        vector<ll> v;
        ll n = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            v.push_back(p);
        }

        ll vecSum = accumulate(v.begin(), v.end(), 0);
        ll mini = LONG_LONG_MAX;
        if (vecSum & 1)
        {
            for (ll i = 0; i < n; i++)
            {
                ll cnt = 0;
                if (v[i] & 1)
                {
                    while (v[i] & 1)
                    {
                        v[i] = v[i] / 2;
                        cnt++;
                    }
                }
                else
                {
                    while (v[i] % 2 == 0)
                    {
                        v[i] = v[i] / 2;
                        cnt++;
                    }
                }
                mini = min(mini, cnt);
            }
        }
        else
        {
            mini = 0;
        }
        cout << mini << endl;
    }

    return 0;
}
