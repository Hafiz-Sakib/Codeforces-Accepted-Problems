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

void Boom()
{
    ll n, k, i, j;
    cin >> n >> k;
    vector<ll> ans;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            ans.push_back(n / i);
        }
    }

    sort(ans.begin(), ans.end());

    (ans).erase(unique(ans.begin(), ans.end()), (ans).end());

    if (ans.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans[k - 1] << endl;
    }
}

int main()
{
    Boost;

    int t = 1;

    while (t--)
    {
        Boom();
    }

    return 0;
}
