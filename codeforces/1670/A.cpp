// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

typedef vector<ll> vi;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vpii;
typedef vector<pair<string, ll>> vpsi;
typedef pair<ll, ll> pii;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef set<ll> si;
typedef set<string> ss;

#define pb push_back
#define mp make_pair
#define in insert
#define fi first
#define se second
#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"


#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.e




#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");
const double eps = 1e-12;

#define Boost                         \
     ios_base::sync_with_stdio(false); \
     cin.tie(NULL);                    \
     cout.tie(NULL)

void Boom()
{

int n,i,j;

cin>>n;

vi v(n);

for(i=0; i<n; i++)cin>>v[i];

if(is_sorted(all(v))){

cout<<"YES"<<endl;
return;

}

i=0,j=n-1;

while(i<j){

if(v[i]>0){

if(v[j]<0){

v[i++]*=-1;

v[j--]*=-1;

}

else j--;

}

else i++;

}

if(is_sorted(all(v)))cout<<"YES"<<endl;

else cout<<"NO"<<endl;




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