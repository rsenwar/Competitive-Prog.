#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
 int t,n;
 cin>>t;
 while(t--)
 {
  cin>>n;
  int *arr = new int[n];
  int *arr2 = new int[n]; 
 for(int i=0;i<n;i++)
  {
   cin>>arr[i];
   arr2[i] = arr[i];
  }
  sort(arr2,arr2+n);
  int x=arr2[n-1],y=arr2[n-2];
  int *c1 = new int[n];
  int *c2 = new int[n];
  for(int i=n-2;i>=0;i--)
  {
   if(arr[i+1]==x)
    c1[i] = c1[i+1]+1;
   else
    c1[i] = c1[i+1];
   if(arr[i+1]==y)
    c2[i] = c2[i] + c2[i+1] + 1;
   else
    c2[i] = c2[i+1];
  }
 int ans=0;
 for(int i=0;i<n;i++)
 {
  if(arr[i]==x)
   ans+=c2[i];
  else if(arr[i]==y)
   ans += c1[i];
 }
 double ans1 = ans,tot=(n*(n-1))/2;
 cout<<fixed<<setprecision(8)<<ans1/tot<<endl;
 }
return 0;
}
