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
 int n,k,t;
 cin>>t;
 while(t--)
 {
 cin>>n>>k;
 int *arr = new int[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
 sort(arr,arr+n);
 cout<<arr[(n+k)/2]<<endl;
 }
return 0;
}
