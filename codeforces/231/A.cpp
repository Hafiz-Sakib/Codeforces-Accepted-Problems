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

    int p, cnt = 0;
    cin >> p;
    while (p--)
    {
        vector<int> v;
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int vecSum = accumulate(v.begin(), v.end(), 0);
        v.clear();
        if (vecSum >= 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
