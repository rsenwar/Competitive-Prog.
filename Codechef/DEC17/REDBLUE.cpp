#include <bits/stdc++.h>
#define loop(i,t) for(ll i=0;i<t;i++)
#define f first
#define s second
using namespace std;
typedef long long ll;
ll xd,yd,xi,xii,yi,yii;
ll calc(ll x,ll y) {
  yd = yii - yi;
  xd = xii - xi;
  ll ans = yd*x - y*xd + yi*xd - xi*yd;
  if(ans<0) return -1;
  if(ans>0) return 1;
  return 0;
}
int main() {
  ll t, n, m,x,y;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    vector<pair<ll, ll> > red;
    vector<pair<ll, ll> > blue;
    loop(i,n) {
      cin>>x>>y;
      red.push_back(make_pair(x,y));
    }
    loop(i,m) {
      cin>>x>>y;
      blue.push_back(make_pair(x,y));
    }
    ll points = INT_MAX;
    for(ll i=0;i<n;i++) {
      for(ll j=i+1;j<n;j++) {
        xi = red[i].f;
        xii = red[j].f;
        yi = red[i].s;
        yii = red[j].s;
        ll rcp=0,bcp=0,bcn=0,rcn=0;
        for(ll k=0;k<n;k++) {
          if(calc(red[k].f,red[k].s)==1)
            rcp++;
          else if(calc(red[k].f,red[k].s)==-1)
              rcn++;
        }
        for(ll k=0;k<m;k++) {
          if(calc(blue[k].f,blue[k].s)==1)
            bcp++;
          else if(calc(blue[k].f,blue[k].s)==-1)
            bcn++;
        }
        if(bcp+rcn<bcn+rcp) {
          if(points>bcp+rcn)
            points = bcp+rcn;
        }
        else {
          if(points>bcn+rcp)
            points = bcn+rcp;
        }
      }
    }
    for(ll i=0;i<m;i++) {
      for(ll j=i+1;j<m;j++) {
        xi = blue[i].f;
        xii = blue[j].f;
        yi = blue[i].s;
        yii = blue[j].s;
        ll rcp=0,bcp=0,bcn=0,rcn=0;
        for(ll k=0;k<n;k++) {
          if(calc(red[k].f,red[k].s)==1)
            rcp++;
          else if(calc(red[k].f,red[k].s)==-1)
              rcn++;
        }
        for(ll k=0;k<m;k++) {
          if(calc(blue[k].f,blue[k].s)==1)
            bcp++;
          else if(calc(blue[k].f,blue[k].s)==-1)
            bcn++;
        }
        if(bcp+rcn<bcn+rcp) {
          if(points>bcp+rcn)
            points = bcp+rcn;
        }
        else {
          if(points>bcn+rcp)
            points = bcn+rcp;
        }
      }
    }
    for(ll i=0;i<n;i++) {
      xi = red[i].f;
      yi = red[i].s;
      for(ll j=0;j<m;j++) {
        xii = blue[j].f;
        yii = blue[j].s;
        ll rcp=0,bcp=0,bcn=0,rcn=0;
        for(ll k=0;k<n;k++) {
          if(calc(red[k].f,red[k].s)==1)
            rcp++;
          else if(calc(red[k].f,red[k].s)==-1)
              rcn++;
        }
        for(ll k=0;k<m;k++) {
          if(calc(blue[k].f,blue[k].s)==1)
            bcp++;
          else if(calc(blue[k].f,blue[k].s)==-1)
            bcn++;
        }
        if(bcp+rcn<bcn+rcp) {
          if(points>bcp+rcn)
            points = bcp+rcn;
        }
        else {
          if(points>bcn+rcp)
            points = bcn+rcp;
        }
      }
    }
    cout<<points<<endl;
  }
  return 0;
}
