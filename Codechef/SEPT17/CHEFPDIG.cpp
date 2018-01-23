#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--) 
  {
    int *arr = new int[10];
    char c;
    while((c=getchar())=='\n');
    while(c!='\n')
    {
      arr[c-'0']++;
      c = getchar();
    }
    for(int i=0;i<26;i++)
    {
      int l = (i+65)%10;
      int r = (i+65)/10;
      if(arr[l] >= 1 && arr[r] >= 1 && l!=r)
        cout<<(char)(i+65);
      else if(arr[l]>1 && l==r)
        cout<<(char)(i+65);
    }
    cout<<"\n";
  }
    
  return 0;
}
