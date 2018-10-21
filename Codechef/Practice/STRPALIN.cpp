#include <bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    long long n,c;
	cin>>n;
	while(n--)
	{
		int arr[26];
	    cin>>a>>b;
	    for(int i=0;i<a.size();i++)
	        arr[a[i]-'a']++;
	    int f = 0;
	    for(int i=0;i<b.size();i++)
	        if(arr[b[i]-'a']!=0)
	        {
	            f = 1;
	            break;
	        }
	    if(f==0)
	        cout<<"No\n";
	    else
	        cout<<"Yes\n";
	}
	return 0;
}
