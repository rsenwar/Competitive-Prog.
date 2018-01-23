#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,num,min,ptr;
  cin>>t;
  while(t--) 
  {
    min = INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>num;
      if(num<min)
      {
        min = num;
        ptr = i;
      }
    }
   cout<<ptr+1<<"\n";
  }
  return 0;
}
