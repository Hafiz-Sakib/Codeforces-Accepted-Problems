#include<bits/stdc++.h>
using namespace std;
#define ll long long 




int main(){
   int n;
   cin>>n;
   string a,b;
   while(n--){
    cin>>a>>b;
    // if(a.size()>b.size()) cout<<">"<<endl;
    // else if(a.size()<b.size()) cout<<"<"<<endl;
    // else if(a.size()==b.size()){
    //   if(a[a.size()-1]<b[b.size()])cout<<">"<<endl;
    //   else if (a[a.size()-1]>b[b.size()])cout<<"<"<<endl;
    //   else cout<<"="<<endl;
    // }
    if(a[a.size()-1]==b[b.size()-1] && a[a.size()-1]=='S'){
      if(a.size()>b.size())cout<<"<"<<endl;
      else if(a.size()<b.size())cout<<">"<<endl;
      else cout<<"="<<endl;
    }


    else if(a[a.size()-1]==b[b.size()-1]){
      if(a.size()>b.size())cout<<">"<<endl;
      else if(a.size()<b.size())cout<<"<"<<endl;
      else cout<<"="<<endl;
    }
    else{
      if(a[a.size()-1]<b[b.size()-1])cout<<">"<<endl;
     else if(a[a.size()-1]>b[b.size()-1]) cout<<"<"<<endl;
    }

   }

    return 0;
}