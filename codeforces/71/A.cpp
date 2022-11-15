#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
        string s;
        cin >> s;
        int size = s.size();
        if (size > 10)
        {
            cout << s[0] << (size - 2) << s[size - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}