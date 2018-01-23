#include<bits/stdc++.h>
using namespace std;
int n;
int find_p(int r,int n)
{
 return (n+r-1)%n;
}
int main()
{
 int num,t;
 cin>>t;
 while(t--)
 {
  cin>>n;
  vector <int> vec_max;
  vector <int> vec_min;
  int **arr = new int*[n];
 // int maxx=0,min=INT_MIN;
  int *size = new int[n];
  int **max_min = new int*[n]; 
  int **pt = new int*[n];
  for(int i=0;i<n;i++)
  {
   cin>>num;
   size[i] = num;
   arr[i] = new int[num];
   pt[i] = new int[2];
   max_min[i] = new int[2];
   max_min[i][0] = 0,max_min[i][1] = INT_MAX;
   for(int j=0;j<num;j++)
   {
    cin>>arr[i][j];
    if(arr[i][j]>max_min[i][0])
    {
     pt[i][0] = j;
     max_min[i][0] = arr[i][j];}
    if(arr[i][j]<max_min[i][1]){
     max_min[i][1] = arr[i][j];pt[i][0] = j;}
   }
     
  }
 /* for(int j=0;j<size[n-1];j++)
  {
   if(arr[n-1][j]>maxx)
    maxx = arr[n-1][j];
   if(arr[n=1][j]<minn)
    minn = arr[n-1][j];
  }
  for(int j=0;j<size[n-1];j++)
  {
   if(arr[n-1][j]==maxx)
    vec_max.push_back(j);
   if(arr[n-1][j]==minn)
    vec_min.push_back(j);
  }
  for(int j=0;j<size[n-2];j++)
  {
   if(arr[n-2][j]>maxx1)
    maxx1 = arr[n-2][j];
   if(arr[n-2][j]<minn1)
    minn1 = arr[n-2][j];
  }
  for(int j=0;j<size[n-2];j++)
  {
   if(arr[n-2][j]==maxx1)
    vec_max1.push_back(j);
   if(arr[n-2][j]==minn1)
    vec_min1.push_back(j);
  }*/
  long long ans=0;
   int maxx = 0,ptr=0;
   if(abs(max_min[n-1][1]-max_min[n-2][0])>maxx)
    maxx = abs(max_min[n-1][1]-max_min[n-2][0]),ptr=pt[n-2][0];
   if(abs(max_min[n-1][1]-max_min[n-2][1])>maxx)
    maxx = abs(max_min[n-1][1]-max_min[n-2][1]),ptr=pt[n-2][1];
   if(abs(max_min[n-1][0]-max_min[n-2][0])>maxx)
    maxx = abs(max_min[n-1][0]-max_min[n-2][0]),ptr=pt[n-2][0];
   if(abs(max_min[n-1][0]-max_min[n-2][1])>maxx)
    maxx = abs(max_min[n-1][0]-max_min[n-2][1]),ptr=pt[n-2][1];
   ans+=(n-1)*maxx;//cout<<maxx<<" ";
  for(int i=n-2;i>0;i--)
  {int pt1;maxx=0;
   if(abs(arr[i][find_p(ptr,size[i])]-max_min[i-1][0])>maxx)
    maxx = abs(arr[i][find_p(ptr,size[i])]-max_min[i-1][0]),pt1=pt[i-1][0];
   if(abs(arr[i][find_p(ptr,size[i])]-max_min[i-1][1])>maxx)
    maxx = abs(arr[i][find_p(ptr,size[i])]-max_min[i-1][1]),pt1 = pt[i-1][1];//cout<<maxx<<" ";
   ans += (i)*maxx;ptr=pt1;
  }
 cout<<ans<<endl;
 }
return 0;
}
