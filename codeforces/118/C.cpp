#include <bits/stdc++.h> 
  
 using namespace std; 
  
 class node 
 { 
 public: 
     int val; 
     string ss; 
 }; 
  
 int main() 
 { 
     int n, k; 
     string s, ans, tmp; 
     cin >> n >> k >> s; 
     int i, cn[10] = {0}; 
     for (i = 0; i < n; i++) 
     { 
         int x = s[i] - '0'; 
         cn[x]++; 
     } 
     int j, mn = 1e8, tm, an; 
     node aa[10]; 
     for (i = 0; i < 10; i++) 
     { 
         tm = k; 
         int cnt = 0; 
  
         tm = k; 
         mn = 1; 
         tmp = s; 
         an = i; 
         tm -= cn[an]; 
         bool fl = false; 
         while (tm > 0) 
         { 
             for (int ii = 0; ii < n; ii++) 
             { 
                 int x = tmp[ii] - '0'; 
                 x = x - an; 
                 if (x == mn) 
                 { 
                     tmp[ii] = '0' + an; 
                     tm--; 
                     cnt += mn; 
                     if (tm == 0) 
                     { 
                         fl = true; 
                         break; 
                     } 
                 } 
             } 
             if (fl) 
                 break; 
             for (int ii = n - 1; ii >= 0; ii--) 
             { 
                 int x = tmp[ii] - '0'; 
                 x = an - x; 
                 if (x == mn) 
                 { 
                     tmp[ii] = '0' + an; 
                     tm--; 
                     cnt += mn; 
                     if (tm == 0) 
                     { 
                         break; 
                     } 
                 } 
             } 
             mn++; 
         } 
  
         aa[i].ss = tmp; 
         aa[i].val = cnt; 
     } 
  
     sort(aa, aa + 10, [](node x, node y) 
          { 
              if(x.val == y.val) 
                 return x.ss < y.ss; 
              else 
                 return x.val < y.val; }); 
  
     cout << aa[0].val << "\n"; 
  
     cout << aa[0].ss << "\n"; 
 }