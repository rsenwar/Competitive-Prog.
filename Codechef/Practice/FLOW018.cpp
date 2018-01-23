#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,a,b,c;
	cin>>n;
	while(n--)
	{
	    cin>>a;
	    if(a==0)a=1;
	    for(int i=a-1;i>=1;i--)
	        a *= i;
	    cout<<a<<endl;
	}
	return 0;
}
