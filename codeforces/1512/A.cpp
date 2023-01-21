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
typedef pair<int, int> pi;
#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    int n;
    cin >> n;
    map<int, pi> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x].first++;
        mp[x].second = i;
    }
    for (auto u : mp)
    {
        if (u.second.first == 1)
        {
            cout << u.second.second << endl;
        }
        // cout << u.first << " " << u.second.first << " " << u.second.second << endl;
    }
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
