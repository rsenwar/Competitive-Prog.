#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t,n,p,num;
 cin>>t;
 while(t--)
 {
  int c=0,h=0;
  cin>>n>>p;
  for(int i=0;i<n;i++)
  {
   cin>>num;
   if((p/2)<=num)
    c++;
   if((p/10)>=num)
    h++;
  }
  if(c==1&&h==2)
   cout<<"yes\n";
  else
   cout<<"no\n";
 }
return 0;
}
