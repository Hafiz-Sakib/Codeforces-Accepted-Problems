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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll left = 0, right = n - 1, res = n;
    while (left <= right)
    {
        if (((s[left] == '1') && (s[right] == '0')) || ((s[left] == '0') && (s[right] == '1')))
        {
            res -= 2;
            left++;
            right--;
        }
        else
        {
            cout << res << endl;
            return;
        }
    }
    cout << res << endl;
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