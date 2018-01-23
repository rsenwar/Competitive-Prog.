#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t,n,q,a,b,c;
 char qry;
 cin>>t;
 while(t--)
 {
  cin>>n>>q;
  int *arr = new int[n+1];
  int *next_max = new int[n+1];
  for(int i=1;i<=n;i++)
   cin>>arr[i];
  for(int i=1;i<=n;i++)
   for(int j=i+1;j<=n;j++)
    if(arr[j]>arr[i])
    {
     next_max[i] = j;
     break;
    }
  while(q--)
  {
   cin>>qry;
   if(qry=='+')
   {
    cin>>a>>b;
    arr[a] += b;
   // for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
     for(int i=1;i<a;i++)
     {
      if(next_max[i]>a&&arr[i]<arr[a])
       next_max[i]=a;
      else if(next_max[i]==0&&arr[i]<arr[a])
       next_max[i]=a;
     }int f1=0;
     if(next_max[a]!=0){
     for(int i=a+1;i<=n;i++)
      if(arr[i]>arr[a]){f1=1;
       next_max[a]=i;break;}
      if(f1==0)next_max[a]=0;}
  /* for(int i=1;i<=n;i++){cout<<"h";
   for(int j=i+1;j<=n;j++)
    if(arr[j]>arr[i])
    {
     next_max[i] = j;
     break;
    }}for(int i=1;i<=n;i++)cout<<next_max[i]<<" ";cout<<endl;*/
   }
   else if(qry=='?')
   {
    cin>>a>>b>>c;
    int i=a,count=0,f=0;
    while(1)
    {
     if(arr[i]>=c){
      count++;//cout<<i<<" "<<j<<endl;
     break;
      }
     if(arr[i]>=b){
      count++;//cout<<i<<" "<<j<<endl;
       }
    if((i=next_max[i])==0){f=1;break;}
    }
    cout<<count<<endl;
   }
  }
 }
return 0;
}
