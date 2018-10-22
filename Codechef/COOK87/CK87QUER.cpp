#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main()
{
 int t;long long y;
 cin>>t;
 while(t--) 
 {
  cin>>y;
  long long total  = 0;
  for(int i=1;i<=700;i++)
  {
   long long l = y-i;
   if(l>0)
   {
   int ans = sqrt(l);
   total += ans;
   }
   else break;
 }
 
  cout<<total<<endl;
 }
return 0;
}
