/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        int a = 0, b = 0, i = 0;
        cin >> s;
        for (auto u : s)
        {
            if (i < 3)
            {
                int p = u - '0';
                a += p;
                i++;
            }
            else
            {
                int p = u - '0';
                b += p;
            }
        }
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
