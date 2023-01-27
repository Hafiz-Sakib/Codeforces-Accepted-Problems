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
    string PI = "3141592653589793238462643383279";
    string s;
    cin >> s;
    ll cnt = 0;
    for (ll i = 0; i < min(PI.size(), PI.size()); i++)
    {
        if (PI[i] == s[i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << cnt << endl;
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
