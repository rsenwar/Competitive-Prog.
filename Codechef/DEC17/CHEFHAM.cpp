#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;
int main()
{
  int t,n,num;
  cin>>t;
  while(t--) {
    cin>>n;
    vector < pair<int,int> > arr;
    int *arr1 = new int[n];
    int *arr2 = new int[n];
    int c = 0,tw=0,*ha = new int[100001];
    for(int i=0;i<n;i++) {
      cin>>arr1[i];
      ha[arr1[i]]++;
      if(ha[arr1[i]]==2)
        tw++;
      arr.push_back(make_pair(arr1[i],i));
    }
    sort(arr.begin(),arr.end());
    if(tw!=0)
    for(int i=0;i<n;i++) {
      arr2[i] = arr[(i+2)%n].x;
    }
    else
    for(int i=0;i<n;i++) {
      arr2[i] = arr[(i+1)%n].x;
    }
    for(int i=0;i<n;i++) {
      arr[arr[i].y].x = arr2[i];
    }
    for(int i=0;i<n;i++)
      if(arr[i].x!=arr1[i])
        c++;
    cout<<c<<"\n";
    for(int i=0;i<n;i++)
      cout<<arr[i].x<<" ";
    cout<<"\n";
  }
return 0;
}
