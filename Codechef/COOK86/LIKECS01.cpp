#include<bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin>>t;
 string s;
 while(t--) {
 cin>>s;
 int *arr = new int[26];
 int l = s.length();
 for(int i=0;i<l;i++) {
  arr[s[i]-'a']++;
 }
 int f = 0;
 for(int i=0;i<26;i++)
  if(arr[i]>1){
   f = 1;break;}
 if(f==0||s.length()==1||s.length()==2)
  cout<<"no\n";
 else
  cout<<"yes\n";
 }
return 0;
}
