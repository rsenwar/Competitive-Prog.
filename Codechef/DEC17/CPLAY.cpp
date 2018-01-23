#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str;
 while(getline(cin,str))
 {
  int ptr1=0,ptr2=0,f=0;
  for(int i=0;i<10;i++)
  {
   if(i%2==0)
   {
    if(str[i]=='1')
      ptr1++;
    if(ptr1>ptr2+5-(i/2))
    {
     f=1;
     cout<<"TEAM-A "<<i+1<<"\n";
     break;
    }
    if(ptr2>ptr1+5-(i+2)/2)
    {
     f=1;
     cout<<"TEAM-B "<<i+1<<"\n";
     break;
    }
   }
   else
   {
    if(str[i]=='1')
     ptr2++;
    if(ptr1>ptr2+5-(i+1)/2)
    {
     f=1;
     cout<<"TEAM-A "<<i+1<<"\n";
     break;
    }
    if(ptr2>ptr1+5-(i+1)/2)
    {
     f=1;
     cout<<"TEAM-B "<<i+1<<"\n";
     break;
    }
   }
  }
  if(f==0)
  for(int i=10;i<20;i++)
  {
   if(i%2==0)
   {
    if(str[i]=='1')
      ptr1++;
   }
   else
   {
    if(str[i]=='1')
     ptr2++;
    if(ptr1>ptr2)
    {
     f=1;
     cout<<"TEAM-A "<<i+1<<"\n";
     break;
    }
    if(ptr2>ptr1)
    {
     f=1;
     cout<<"TEAM-B "<<i+1<<"\n";
     break;
    }
   }
  } 
  if(f==0)
   cout<<"TIE\n";
 }
return 0;
}
