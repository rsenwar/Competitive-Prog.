#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int getMid(int s, int e) {  return s + (e -s)/2;  }
ll getSumUtil(ll *st, int ss, int se, int qs, int qe, int si)
{
    if (qs <= ss && qe >= se)
        return st[si];
    if (se < qs || ss > qe)
        return 0;
    int mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}
ll getSum(ll *st, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
ll constructSTUtil(ll arr[], int ss, int se, ll *st, int si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
ll *constructST(ll arr[], int n)
{
    int x = (int)(ceil(log2(n))); 
    int max_size = 2*(int)pow(2, x) - 1; 
    ll *st = new ll[max_size];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}
int main() 
{
 int t,n,q,num,v1,v2,c1,c2;
 cin>>t;
 while(t--)
 {
  cin>>n>>q;
  int *size = new int[n];
  ll *sum = new ll[n];
  int **arr = new int*[n];
  for(int i=0;i<n;i++)
  {
   cin>>num;
   size[i] = num;
   arr[i] = new int[num];
   for(int j=0;j<num;j++) 
   {
    cin>>arr[i][j];
    sum[i] += arr[i][j];
   }
  }
 int **conn = new int*[n];
 for(int i=0;i<n;i++)
  conn[i] = new int[3];
 for(int i=0;i<n;i++){
 cin>>conn[i][0]>>conn[i][1]>>conn[i][2];conn[i][0]--,conn[i][1]--;}
 ll *dist = new ll[n];
 ll dis=0,p1,p2;
 for(int i=0;i<n;i++)
 {
  dist[i] = conn[i][2];dis=0;
  p1 = min(conn[(n+i-1)%n][1],conn[i][0]),p2 = max(conn[(n+i-1)%n][1],conn[i][0]);
  for(int j=p1;j<p2;j++)
   dis += arr[i][j];
  dis = min(sum[i]-dis,dis);
  dist[i] += dis;
 }
 ll *ST = constructST(dist,n);
 while(q--)
 {
  cin>>v1>>c1>>v2>>c2;v1--,v2--,c1--,c2--;
  ll mic1_l = 0,mic2_r=0,mic2_l=0,mic1_r = 0,dist1 = 0,dist2 = 0;
  if(c1>c2){int tem = c1;c1 = c2,c2 = tem;tem = v1,v1 = v2,v2 = tem;}
  
  int p1_l = conn[(n+c1-1)%n][1],p1_r = conn[c1][0];
//mic1_left
  for(int i=min(p1_l,v1);i<max(p1_l,v1);i++)
   mic1_l += arr[c1][i];
  mic1_l = min(mic1_l,sum[c1]-mic1_l);
//mic1_right
 for(int i=min(p1_r,v1);i<max(p1_r,v1);i++)
  mic1_r += arr[c1][i];
 mic1_r = min(mic1_r,sum[c1]-mic1_r);
 mic1_r += conn[c1][2]; 
 
  int p2_l = conn[(c2+n-1)%n][1];
  int p2_r = conn[c2][0];
//mic2_left 
 for(int i=min(p2_l,v2);i<max(p2_l,v2);i++)
   mic2_l += arr[c2][i];
  mic2_l = min(mic2_l,sum[c2]-mic2_l);
//mic2_right
 for(int i=min(p2_r,v2);i<max(p2_r,v2);i++)
  mic2_r += arr[c2][i];
  mic2_r = min(mic2_r,sum[c2]-mic2_r);
  mic2_r += conn[c2][2]; 
 
  if(c2>c1+1)
   dist1 = getSum(ST,n,c1+1,c2-1);
  dist1 += mic1_r + mic2_l;
 
  if(c1>0)
   dist2 += getSum(ST,n,0,c1-1);
  if(c2<n-1)
   dist2 += getSum(ST,n,c2+1,n-1);
  dist2 += mic1_l+mic2_r;
 
  (dist1<dist2)?cout<<dist1<<endl:cout<<dist2<<endl;
  }
 }
return 0;
}
