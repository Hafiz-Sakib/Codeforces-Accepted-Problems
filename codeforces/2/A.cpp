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
}

int main()
{
    Boost;
    int a2 = 0;
    int n;
    cin >> n;
    map<string, int> mp;
    vector<pair<string, int>> v;
    while (n--)
    {
        string s;
        int x;
        cin >> s >> x;
        v.push_back({s, x});
        mp[s] += x;
    }
    for (auto el : mp)
        a2 = max(a2, el.second);
    set<string> st;
    for (auto el : mp)
        if (el.second == a2)
            st.insert(el.first);

    mp.clear();
    for (auto el : v)
    {
        mp[el.first] += el.second;
        if (mp[el.first] >= a2 && st.find(el.first) != st.end())
        {
            cout << el.first << endl;
            return 0;
        }
    }

    return 0;
}
