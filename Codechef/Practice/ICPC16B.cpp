#include<bits/stdc++.h>
using namespace std;
  
int main()
{
 int t,n,num;
 cin>>t;
 while(t--)
 {
  cin>>n;
  int oc=0,mc=0,zc=0;
  vector<int> vec;
  for(int i=0;i<n;i++)
  { 
  cin>>num;
  if(num==0)
   zc++;
  else if(num==1)
   oc++;
  else if(num==-1)
   mc++;
  else
   vec.push_back(num);
  }
  if(n==1)
   cout<<"yes";
  else if(vec.size()>1)
   cout<<"no";
  else
  {
   if(vec.size()==0)
   {
    if((mc==2&&zc==0&&oc==0)||(oc==0&&mc>1))
     cout<<"no";
    else 
     cout<<"yes";
   }
   else
   {
    if(mc>0)
     cout<<"no";
    else
     cout<<"yes"; 
   }
  }
 cout<<"\n";
 }
return 0;
}
