#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
/**
 *   Problem-10, Codeforces Submission: 
 *      
 */

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr),cout.tie(nullptr);
    ll n[4][4]{};
    bool lights[4][4]{};
    memset (n, 0, sizeof(n[0][0]) * 4 * 4);
    memset (lights, 1, sizeof(lights[0][0]) * 4 * 4);
    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            cin >>  n[i][j];
        }
    }
    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            bool status = n[i][j]%2;
            lights[i][j] ^= n[i][j]%2;
            if(i+1 <= 3) lights[i+1][j] ^= status;
            if(i-1 >= 1) lights[i-1][j] ^= status;
            if(j+1 <= 3) lights[i][j+1] ^= status;
            if(j-1 >= 1) lights[i][j-1] ^= status;
        }
    }
    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            cout << lights[i][j];
        }
        cout << endl;
    }
}