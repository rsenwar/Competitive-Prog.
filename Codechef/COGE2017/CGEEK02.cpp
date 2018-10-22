#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 int t;
 cin>>t;
 while(t--){
  cin>>s;
  int len = s.length();
  int c ;
  c=1;
  char ini = s[0];
  for(int i=1;i<len;i++)
   if(s[i]!=ini){
    ini = s[i];c++;}
  cout<<c/2<<endl;
 }
return 0;
}
