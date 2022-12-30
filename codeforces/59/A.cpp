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
    string s, p = "";
    cin >> s;
    ll a = 0, b = 0;
    for (auto u : s)
    {
        if ((int)u < 92)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if (a > b)
    {
        for (auto u : s)
        {
            char c;
            c = toupper(u);
            p += c;
        }
    }
    else
    {
        for (auto u : s)
        {
            char c;
            c = tolower(u);
            p += c;
        }
    }

    cout << p << endl;
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
