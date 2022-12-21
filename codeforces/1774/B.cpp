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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m);
    for (int &i : v)
    {
        cin >> i;
    }
    sort(v.rbegin(), v.rend());
    bool fl = 1;
    int div = n / k;
    int md = n % k;
    for (int i = 0; i < m; i++)
    {
        int cc = div;
        if (i < md)
        {
            cc++;
        }
        if (v[i] > cc)
        {
            fl = 0;
        }
    }
    if (fl)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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