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
    string s, r = "";
    cin >> s;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            r += '0';
        }
        else
        {
            if (s[i + 1] == '.')
            {
                r += '1';
                i++;
            }
            else
            {
                r += '2';
                i++;
            }
        }
    }
    cout << r << endl;
}

int main()
{
    Boost;

    Boom();

    return 0;
}
