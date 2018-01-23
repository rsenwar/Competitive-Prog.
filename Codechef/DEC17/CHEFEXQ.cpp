#include<bits/stdc++.h>
using namespace std;
#define MAXN 100000
#define SQRSIZE  317
int arr[MAXN],arr_val[MAXN],n;
int xup[SQRSIZE];
int blk_sz;
int **mp;
void update(int idx, int val)
{
    int bn = idx / blk_sz,up=arr_val[idx]^val;
    arr_val[idx] = val;
    xup[bn] ^= up;
    for(int i=idx;i<(bn+1)*blk_sz&&i<n;i++) {
      mp[bn][arr[i]]--;
      arr[i] ^= up;
      mp[bn][arr[i]]++;
    }
}
int query(int r,int k)
{
    int sum = 0,l=0,x = k;
    while (l+blk_sz <= r)
    {
        sum += mp[l/blk_sz][x];
        x ^= xup[l/blk_sz];
        l += blk_sz;
    }
    while (l<=r)
    {
        if(arr[l]==x)
          sum++;
        l++;
    }
    return sum;
}
void preprocess()
{
    int blk_idx = -1;
    blk_sz = sqrt(n);
    for (int i=0; i<n; i++)
    {
        if (i%blk_sz == 0)
        {
            blk_idx++;
        }
        mp[blk_idx][arr[i]]++;
    }
}
int main() {
  int q,m,k,qry;
  cin>>n>>q;
  mp = new int*[317];
  for(int i=0;i<317;i++) {
    mp[i] = new int[1000001];
  }
  cin>>arr[0];arr_val[0] = arr[0];
  for(int i=1;i<n;i++) {
    cin>>arr[i];
    arr_val[i] = arr[i];
    arr[i] ^= arr[i-1];
  }
  preprocess();
  while(q--) {
    cin>>qry;
    if(qry==1) {
      cin>>m>>k;
    update(m-1,k);
    }
    else {
      cin>>m>>k;
      cout<<query(m-1,k)<<endl;
    }
  }
  return 0;
}
