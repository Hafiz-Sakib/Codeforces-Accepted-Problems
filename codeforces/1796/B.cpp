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
    string s, p;
    cin >> s >> p;
    if (s.size() == 1 && p.size() == 1)
    {
        if (s == p)
        {
            yes;
            cout << s << endl;
            return;
        }
        no;
        return;
    }
    if ((s[0] == p[0]) || (s[s.size() - 1] == p[p.size() - 1]))
    {
        yes;
        if (s[0] == p[0])
        {
            cout << s[0] << '*' << endl;
        }
        else
        {
            cout << '*' << s[s.size() - 1] << endl;
        }
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < p.size(); j++)
        {
            if (s[i] == p[j])
            {
                if (i < (s.size() - 1) && j < (p.size() - 1))
                {
                    if (s[i + 1] == p[j + 1])
                    {
                        yes;
                        cout << '*' << s[i] << s[i + 1] << '*' << endl;
                        return;
                    }
                }
            }
        }
    }
    no;
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
