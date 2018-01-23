#include <bits/stdc++.h>
using namespace std;
int main()
{
 //cout<<s1.substr(2,8);
 int t,x,y;
 string str;
 cin>>t;
 while(t--)
 {
  int app = 0,bana = 0;char st[100001];scanf("%s",st);
  str=st;
  int len = str.length();
  for(int i=0;i<len;i++)
   if(str[i] == 'a') 
    app++;
   else
    bana++;//cout<<app<<" "<<bana<<endl;
  char apple[app+1],banana[bana+1];
  for(int i=0;i<app;i++)
   apple[i]='a';apple[app]='\0';
  for(int i=0;i<bana;i++)
   banana[i]='b';banana[bana]='\0';
  cin>>x>>y;
  string aps=apple,bans = banana;
  int s1 = app/x,s2 = bana/y;
  int r1 = app%x,r2 = bana%y;
  
  if(r1!=0)s1+=1;
  if(r2!=0)s2+=1;
  //cout<<s1<<" "<<s2<<" "<<app<<" "<<bana<<" "<<r1<<" "<<r2;
  
  if(s1==s2)
  {int ptr1=0,ptr2=0;
   for(int i=0;i<s1;i++)
   {//cout<<en(ptr1,x,app)<<" "<<en(ptr2,y,bana)<<endl;
    if(r1>=r2){
    if(ptr1<app)cout<<aps.substr(ptr1,x);ptr1+=x;//cout<<ptr1<<" ";//cout<<aps.substr(0,2);
    if(ptr2<bana)cout<<bans.substr(ptr2,y);ptr2+=y;//cout<<ptr2<<" ";
    }else{if(ptr2<bana)cout<<bans.substr(ptr2,y);ptr2+=y;
          if(ptr1<app)cout<<aps.substr(ptr1,x);ptr1+=x;//cout<<ptr1<<" ";//cout<<aps.substr(0,2);
          }
   }}
  else if(s1>s2)
  {int ptr1=0,ptr2=0;
   
   if(bana>=s1)
   {
    y = bana/(s1-1);
    for(int i=0;i<s1;i++)
    {     if(ptr1<app)cout<<aps.substr(ptr1,x);ptr1+=x;
        if(ptr2<bana)cout<<bans.substr(ptr2,y);ptr2+=y;
    }if(ptr2<bana)cout<<bans.substr(ptr2,(bana%(s1-1)));}
   
   else
   { y=1;
    for(int i=0;i<bana;i++)
    {
    if(ptr1<app)cout<<aps.substr(ptr1,x);ptr1+=x;
    if(ptr2<bana)cout<<bans.substr(ptr2,y);ptr2+=y;
    }
    int ap_r = app-bana*x;
    int l1 = ap_r/x,l2 = ap_r%x;
    if(l1==0){
    if(ptr1<app) cout<<aps.substr(ptr1,x);}
    else if(l2==0)
    {
     for(int i=0;i<l1-1;i++)
      cout<<aps.substr(0,x)<<'*';
     cout<<aps.substr(0,x);
    }
    else
    {
     for(int i=0;i<l1;i++)
      cout<<aps.substr(0,x)<<'*';
      cout<<aps.substr(0,l2);
    }
   }
  }
  else
  {
   int ptr1=0,ptr2=0; 
   
   if(app>=s2)
   {
    x = app/(s2-1);
    for(int i=0;i<s2;i++)
    {    if(ptr1<bana)cout<<bans.substr(ptr1,y);ptr1+=y;
         if(ptr2<app)cout<<aps.substr(ptr2,x);ptr2+=x;
    }if(ptr2<app)cout<<aps.substr(ptr2,(app%(s2-1)));}
   
   else
   { x=1;
    for(int i=0;i<app;i++)
    {
    if(ptr1<bana)cout<<bans.substr(ptr1,y);ptr1+=y;
    if(ptr2<app)cout<<aps.substr(ptr2,x);ptr2+=x;
    }
    int ba_r = bana-app*y;
    int l1 = ba_r/y,l2 = ba_r%y;
    if(l1==0){
    cout<<bans.substr(0,l2);}
    else if(l2==0)
    {
     for(int i=0;i<l1-1;i++)
      cout<<bans.substr(0,y)<<'*';
     cout<<bans.substr(0,y);
    }
    else
    {
     for(int i=0;i<l1;i++)
      cout<<bans.substr(0,y)<<'*';
      cout<<bans.substr(0,l2);
    }
   }
  }cout<<endl;
}
return 0;
}
