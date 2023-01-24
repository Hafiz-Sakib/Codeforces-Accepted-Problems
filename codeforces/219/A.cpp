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
    ll n;
    cin >> n;
    string s, r = "";
    cin >> s;
    map<char, int> m;
    for (auto u : s)
    {
        m[u]++;
    }
    for (auto u : m)
    {
        int a = u.second;
        if (a % n != 0)
        {
            cout << -1 << endl;
            return;
        }
    }
    for (auto u : m)
    {
        char c = u.first;
        int a = u.second;
        for (int i = 0; i < a / n; i++)
        {
            // cout << c << " ";
            r += c;
        }
    }
    while (n--)
    {
        cout << r;
    }
}

int main()
{
    Boost;

    Boom();

    return 0;
}
