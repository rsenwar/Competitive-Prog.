#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;
vector <ll> adj[300001];
void dfs(vector <ll> adj[],ll st,ll par,ll dis,ll *arr,ll k,ll a,ll b) {
  for(int i=0;i<adj[st].size();i++) {
    if(adj[st][i]==par) continue;
    if(dis+1<=k&&dis==0) {
      arr[adj[st][i]] = (arr[adj[st][i]] + b)%mod;
      dfs(adj,adj[st][i],st,dis+1,arr,k,a,b);
    }
    else if(dis+1<=k) {
      arr[adj[st][i]] += (a+b)%mod;
      dfs(adj,adj[st][i],st,dis+1,arr,k,b,(a+b)%mod);
    }
  }
}
int main() {
  ll t,n,q,v,k,a,b,x,y,qry;
  cin>>t;
  while(t--) {
    for(int i=0;i<=300000;i++)
      adj[i].clear();
    ll *arr = new ll[300001];
    scanf("%lld %lld",&n,&q);
    for(int i=1;i<n;i++) {
      scanf("%lld %lld",&x,&y);
      adj[x].push_back(y);
      adj[y].push_back(x);
    }
    while(q--) {
    scanf("%lld",&qry);
    if(qry==1) {
      scanf("%lld %lld %lld %lld",&v,&k,&a,&b);
    /*  ll *fib = new ll[k+1];
      fib[0] = a;fib[1] = b;
      for(int i=2;i<=k;i++) {
        fib[i] = (fib[i-1]%mod + fib[i-2]%mod)%mod;
      }*/
      arr[v] = (arr[v] + a)%mod;
      dfs(adj,v,v,0,arr,k,a,b);
    }
    else {
      scanf("%lld",&v);
      printf("%lld\n",arr[v]%mod);
    }
  }
  }
  return 0;
}
