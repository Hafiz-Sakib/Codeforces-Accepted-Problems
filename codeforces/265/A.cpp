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
    string s, t;
    cin >> s >> t;
    int pos = 1, k = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[k])
        {
            pos++;
            k++;
        }
    }
    cout << pos << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
