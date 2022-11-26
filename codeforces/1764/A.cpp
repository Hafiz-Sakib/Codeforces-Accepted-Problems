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
    int tstcase = 0;
    cin >> tstcase;
    while (tstcase--)
    {
        {
            int n;
            cin >> n;
            set<int> st;
            int mx = 0, l = 1, r = 1;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                st.insert(x);
                if (i + 1 - st.size() > mx)
                {
                    mx = i + 1 - st.size();
                    r = i + 1;
                }
            }
            cout << l << " " << r << "\n";
        }
    }
    return 0;
}