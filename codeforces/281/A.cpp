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
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            s[i] = (towupper(s[i]));
        }
    }
    cout << s << endl;

    return 0;
}