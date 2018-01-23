#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 int t,n;
 cin>>t;
 while(t--)
 {
  cin>>n;
  int *arr = new int[5];
  for(int i=0;i<n;i++)
  {
   cin>>s;
   if(s=="cakewalk")
    arr[0]++;
   if(s=="simple")
    arr[1]++;
   if(s=="easy")
    arr[2]++;
   if(s=="easy-medium" or s=="medium")
    arr[3]++;
   if(s=="medium-hard" or s=="hard")
    arr[4]++;
  }
  if(arr[0]>=1&&arr[1]>=1&&arr[2]>=1&&arr[3]>=1&&arr[4]>=1)
   cout<<"Yes\n";
  else 
   cout<<"No\n";
 }
return 0;
}
