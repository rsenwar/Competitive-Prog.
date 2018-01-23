#include <bits/stdc++.h>
#define MOD 1000000007
#define loop(i,n) for(int i=0;i<n;i++)
#define vi vector <int>
#define mp make_pair
#define pb push_back
#define vit vector <int> :: iterator
#define vii vector < pair<int,int> >
using namespace std;
int main()
{
 int t;long long y;
 cin>>t;
 while(t--) 
 {
  cin>>y;
  long long total  = 0;
  for(int i=1;i<=700;i++)
  {
   long long l = y-i;
   if(l>0){
   int ans = sqrt(l);
   total += ans;}else break;
 }
 
  cout<<total<<endl;
 }
return 0;
}
