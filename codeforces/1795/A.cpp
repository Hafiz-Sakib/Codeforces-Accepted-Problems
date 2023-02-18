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
    int a, b, ok = 1;
    cin >> a >> b;
    string s, p;
    cin >> s >> p;
    reverse(p.begin(), p.end());
    s += p;
    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        cnt += (s[i] == s[i + 1]);
    }
    cout << (cnt <= 1 ? "YES" : "NO") << endl;
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
