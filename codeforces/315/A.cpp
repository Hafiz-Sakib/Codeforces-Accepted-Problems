/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        bool found = false;

        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                continue;
            }
            if (v[j].second == v[i].first)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    Boost;

    Boom();

    return 0;
}
