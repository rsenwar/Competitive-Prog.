#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,num,min,ptr;
  cin>>t;
  while(t--) 
  {
    cin>>n;
    if(n%2==0)
    {
      for(int i=1;i<n;i+=2)
        cout<<i+1<<" "<<i<<" ";
      cout<<"\n";
    }
    else if(n!=1)
    { int i;
      for(i=1;i<n-3;i+=2)
        cout<<i+1<<" "<<i<<" ";
      cout<<i+1<<" "<<i+2<<" "<<i<<"\n";
    }
    else cout<<1<<"\n";
  }
  return 0;
}
