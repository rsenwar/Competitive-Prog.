#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t,n,k,s;
 cin>>t;
 while(t--)
 {
  cin>>n>>k;
  int *arr = new int[200002];
  for(int i=0;i<n;i++)
  {
   cin>>s;
   arr[s] = 1;
  }
  int ctr=0,f=-1;
  for(int i=0;i<200002;i++)
  {
   if(arr[i]==0)
   {
    if(ctr==k)
    {
     f = i;
     break;
    }
   ctr++;
   }
  }
  cout<<f<<"\n";
 }
return 0;
}
