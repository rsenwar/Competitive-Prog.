#include<bits/stdc++.h>
using namespace std;
int main()
{
 int tests,n,m;
 scanf("%d",&tests);
 while(tests--)
 {
  scanf("%d %d",&n,&m);
  bool **arr = new bool*[n];
  for(int i=0;i<n;i++)
   arr[i] = new bool[m];
  for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
   {
    char ch;
    cin>>ch;
    if(ch=='R')
     arr[i][j]=true;
    else
     arr[i][j]=false;
   }
  int sum1 = 0,sum2=0;
  for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
   {
    if((i+j)%2==0&&arr[i][j]==false)
     sum1 += 3;
    if((i+j)%2!=0&&arr[i][j]==true)
     sum1 += 5;
   }
  for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
   {
    if((i+j)%2==0&&arr[i][j]==true)
     sum2 += 5;
    if((i+j)%2!=0&&arr[i][j]==false)
     sum2 += 3;
   }
  printf("%d\n",min(sum1,sum2));
 }
return 0;
}
