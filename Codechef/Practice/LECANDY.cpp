#include<bits/stdc++.h>
using namespace std;
int main() {
 int t,n,c,num;
 cin>>t;
 while(t--)
 {
  int f = 0;
  cin>>n>>c;
  while(n--) 
  {
   cin>>num;
   c -= num;
   if(c<0)
    f = 1;
  } 
  if(f==1)
   cout<<"No\n";
  else
   cout<<"Yes\n";
 }
  
return 0;
}
