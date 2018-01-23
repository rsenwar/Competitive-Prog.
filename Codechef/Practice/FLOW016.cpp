#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,a,b,c;
	cin>>n;
	while(n--)
	{
	    cin>>a>>b;
	    cout<<__gcd(a,b)<<" "<<a*b/__gcd(a,b)<<endl;
	    
	}
	return 0;
}
