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
    string s, p;
    cin >> s >> p;
    vector<char> v;
    if (s.size() != p.size())
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != p[i])
        {
            v.push_back(s[i]), v.push_back(p[i]);
        }
    }
    if (v.size() > 4)
    {
        cout << "NO" << endl;
        return;
    }
    if ((v[1] == v[2] && v[0] == v[3]))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Boost;

    Boom();

    return 0;
}
