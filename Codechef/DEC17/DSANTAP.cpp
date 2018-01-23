#include<bits/stdc++.h>
using namespace std;
int main() {
  int t,n,g,b,x,y;
  cin>>t;
  while(t--) {
    cin>>n>>g>>b>>x>>y;
    int *p = new int[g];
    for(int i=0;i<g;i++)
      cin>>p[i];
    int *xi = new int[n];
    int *yi = new int[n];
    int *ki = new int[n];
    int *li = new int[n];
    for(int i=0;i<n;i++) {
      cin>>xi[i]>>yi[i]>>ki[i]>>li[i];
    }
    for(int i=0;i<n;i++) {
        cout<<2<<" "<<li[i]<<endl;
        cout<<1<<" "<<i+1<<endl;
        cout<<3<<" "<<li[i]<<endl;
        cout<<2<<" "<<ki[i]<<endl;
        cout<<1<<" "<<0<<endl;
        cout<<3<<" "<<ki[i]<<endl;
    }
    cout<<0<<endl;
  }
  return 0;
}
