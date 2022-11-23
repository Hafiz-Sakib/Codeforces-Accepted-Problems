/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        vector<int> arr(n, 0);
        vector<int> cntArr(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            cntArr[arr[i]] += 1;
        }
        if (n == 1)
            cout << 1 << "\n";
        else
        {
            int cnt = 0;
            while (arr.size() > 2)
            {
                bool done = false;
                int index = 0;
                int maxCnt = 0;
                for (int i = 0; i < arr.size(); ++i)
                    if ((arr[i + 1] != arr[i - 1] && i > 0 && i < arr.size() - 1) || (arr[i + 1] != arr[arr.size() - 1] && i == 0) || (arr[0] != arr[i - 1] && i == arr.size() - 1) && cntArr[arr[i]] > maxCnt)
                    {
                        index = i;
                        done = true;
                        maxCnt = cntArr[arr[i]];
                    }
                if (done == true)
                    cnt += 1;
                cntArr[arr[index]] -= 1;
                arr.erase(arr.begin() + index);
            }
            if (arr[0] == arr[1])
                cnt += 1;
            else
                cnt += 2;
            cout << cnt << "\n";
        }
    }
    return 0;
}