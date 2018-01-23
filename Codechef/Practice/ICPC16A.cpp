#include<bits/stdc++.h>
using namespace std;
  
int main()
{
 int t,x1,x2,y1,y2;
 cin>>t;
 while(t--)
 {
  cin>>x1>>y1>>x2>>y2;
  if(x1>x2&&y1==y2)
   cout<<"left";
  else if(y1>y2&&x1==x2)
   cout<<"down";
  else if(x1<x2&&y1==y2)
   cout<<"right";
  else if(y1<y2&&x1==x2)
   cout<<"up";
  else
   cout<<"sad";
  cout<<"\n";   
 }
return 0;
}
