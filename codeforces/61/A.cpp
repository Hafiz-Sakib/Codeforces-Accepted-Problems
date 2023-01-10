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
    string s, p, r = "";
    cin >> s >> p;

    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == p[i])
        {
            r += '0';
        }
        else
        {
            r += '1';
        }
    }
    cout << r << endl;
}

int main()
{
    Boost;

    int t = 1;
    //   cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
