#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long LL;
LL dp[1025][109]={};
vector < int > vec[109];
int toint(const string &s) { stringstream ss; ss << s; int x; ss >> x; return x; }
LL find_ways(int mask,int k,int n)
{
 if(k==101)
 { 
  if(mask==((1<<n) - 1))
   return dp[mask][k] = 1ll;
  else
  return dp[mask][k] = 0ll;
 }
 if(dp[mask][k]!=-1)
  return dp[mask][k];
 LL ans = 0;
 ans += find_ways(mask,k+1,n);
 for(int i=0;i<vec[k].size();i++)
 {
  if((mask)&(1<<vec[k][i]))continue;
  ans += find_ways((mask)|(1<<vec[k][i]),k+1,n);
  if(ans>=MOD) ans -= MOD;
 }
 return dp[mask][k]=ans;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  memset(dp,-1,sizeof(dp));
  int n;
  string ss,temp;
  cin>>n; 
  getchar();
  for(int i=0;i<=100;i++)
   vec[i].clear();
  for(int i=0;i<n;i++)
  {
   getline(cin,ss);
   stringstream s (ss);
   while(s>>temp)
    vec[(toint(temp))].push_back(i);
  }
  for(int i=0;i<100;i++)
   sort(vec[i].begin(),vec[i].end());
  cout<<find_ways(0,1,n)<<endl;
 }
return 0;
}
