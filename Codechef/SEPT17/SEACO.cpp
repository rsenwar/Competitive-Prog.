#include <bits/stdc++.h>
using namespace std;
int arr[11],typ[11],lef[11],rig[11];
void execute(int type,int l,int r)
{
  if(type == 1)
   for(int i=l;i<=r;i++)
     arr[i]++;
  else
    for(int i=l;i<=r;i++)
      execute(typ[i],lef[i],rig[i]);
}
int main()
{
  int t;
  cin>>t;
  while(t--) 
  {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<11;i++)
      arr[i] = typ[i] = lef[i] = rig[i] = 0;
    for(int i=1;i<=m;i++)
    {
      cin>>typ[i]>>lef[i]>>rig[i];
      execute(typ[i],lef[i],rig[i]);
    }
    for(int i=1;i<=n;i++)
      cout<<arr[i]<<" ";
    cout<<"\n";
  }
    
  return 0;
}
