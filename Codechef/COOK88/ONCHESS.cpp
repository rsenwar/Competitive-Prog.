#include<bits/stdc++.h>
#define loop(i,t) for(int i=0;i<t;i++)
#define MOD 1000000007
#define vector <int> vi
#define push_back pb
typedef long long ll;
using namespace std;
int main()
{
 int t,n;
 cin>>t;
 while(t--)
 {
  cin>>n;
  int **arr = new int*[n];
  bool *vis = new bool[n];
  bool *wait = new bool[n];
  for(int i=0;i<n;i++)
  {
   arr[i] = new int[6];
  }
  for(int i=0;i<n;i++)
  {
   cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
   string s;
   cin>>s;
   if(s.compare("rated")==0)
    arr[i][4]=1;
   else
    arr[i][4]=2;
   cin>>s;
   if(s.compare("random")==0)
    arr[i][5]=3;
   else if(s.compare("white")==0)
    arr[i][5]=1;
   else
    arr[i][5]=2;
  }
  for(int i=0;i<n;i++)
  {
   int f=0,ans=0,f1=0;
   for(int j=0;j<i;j++)
   {
    if(!vis[j]&&(f1==0||wait[j]))
    {
     if((arr[i][0]>=arr[j][1]&&arr[i][0]<=arr[j][2])&&(arr[j][0]>=arr[i][1]&&arr[j][0]<=arr[i][2])
        &&(arr[i][4]==arr[j][4])&&(arr[i][3]==arr[j][3])&&
        ((arr[i][5]==3&&arr[j][5]==3)||(arr[i][5]==1&&arr[j][5]==2)||(arr[i][5]==2&&arr[j][5]==1)))
       {f=1;
        ans=j+1;f1=1;
        if(wait[j])
         break;
       }
    }   
   }
   if(f==0){wait[i]=true;
    cout<<"wait\n";}
   else{vis[ans-1]=true;vis[i]=true;
    cout<<ans<<endl;}
  }
 }
return 0;
}
