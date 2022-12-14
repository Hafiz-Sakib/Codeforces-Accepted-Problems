/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
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
        ll num, c = 0, cnt = 0, res;
        cin >> num;
        vector<ll> vec(num);
        map<ll, ll> m;
        for (int i = 0; i < num; i++)
        {
            cin >> vec[i];
            m[vec[i]]++;
        }

        sort(vec.begin(), vec.end());

        if (vec[0] != vec[num - 1])
        {
            res = (m[vec[0]] * m[vec[num - 1]]) * 2;
        }
        else
        {
            res = ((num * (num - 1)) / 2) * 2;
        }
        cout << res << endl;
    }

    return 0;
}