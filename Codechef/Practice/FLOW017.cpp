#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,a[3],b,c;
	cin>>n;
	while(n--)
	{
	    cin>>a[0]>>a[1]>>a[2];
	    sort(a,a+3);
	    cout<<a[1]<<endl;
	}
	return 0;
}
