#include <bits/stdc++.h>
#define MOD 1000000007
#define loop(i,n) for(int i=0;i<n;i++)
#define mp make_pair
#define pb push_back
#define vii vector <pair<int,int> >
#define vit vector <int> :: iterator
#define viit vecotor <pair<int,int> > :: iterator
#define vi vector <int>
using namespace std;
int main()
{
 int t,n;
 cin>>t;
 while(t--)
 {
  cin>>n;
 // vi adj[n];
  int size = 0;
  int *hash1 = new int[750001];
  int *arr = new int[n];
  loop(i,n)
  {
   cin>>arr[i];
  }
  sort(arr,arr+n);
  loop(i,n)
  {
   hash1[arr[i]] = 1;
  }
  for(int i=0;i<n;i++)
  {
   for(int j=arr[i]*2;j<=750000;j+=arr[i])if(hash1[j]>0)
     hash1[j] = ((hash1[arr[i]]%MOD)+(hash1[j]%MOD))%MOD;
  size = ((size%MOD)+(hash1[arr[i]]%MOD))%MOD;
 }
 cout<<size<<endl;
 }
 return 0;
}
