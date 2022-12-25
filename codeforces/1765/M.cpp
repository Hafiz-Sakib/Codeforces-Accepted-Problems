/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int T;
inline int sqrtt(int x){
    double x_double=x*1.0;
    int rt=ceil(sqrtl(x_double));
    return rt;
}
inline int sd(int x){
    if(!(x&1)) return 2;
    for(int i=3;i<=sqrtt(x);i+=2) if(!(x%i)) return i;
    return x;
}
inline void solve(){
    int n;
    // (n/gf(n)-1)*gf(n)
    cin>>n;
    int d=sd(n);
    if(d==n){
        cout<<1<<" "<<d-1<<"\n";
        return;
    }
    int g=n/d;
    cout<<g<<" "<<(d-1)*g<<"\n";
}
int main()
{   
    cin>>T;
    while(T--) solve();
   

    return 0;
}