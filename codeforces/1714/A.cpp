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

int main()
{
    Boost;
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int k = 0;
        int cnt = (60 * h) + m;
        vector<int> l;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (cnt > ((a * 60) + b))
            {
                k = (24 * 60) + ((a * 60) + b);
                k = abs(k - cnt);
                l.push_back(k);
            }
            else
            {
                l.push_back(((a * 60) + b) - cnt);
            }
        }
        int g = l[0];
        for (int i = 0; i < l.size(); i++)
        {
            if (g > l[i])
                g = l[i];
        }
        cout << g / 60 << " " << g % 60 << endl;
    }
    return 0;
}