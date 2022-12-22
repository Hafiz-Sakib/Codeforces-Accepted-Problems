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
    string s, m = "hello";
    cin >> s;
    ll j = 0, cnt = 0, i;
    if (s == "hlelo")
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == m[j])
            {
                j++;
                cnt++;
            }
        }
    }

    if (cnt != 5)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    Boost;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
