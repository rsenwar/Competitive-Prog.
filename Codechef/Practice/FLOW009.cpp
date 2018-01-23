#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    double s=0;
	    if(a>1000){
	        s = ((double)a*b)*9;
	        s /= 10;}
	    else
	        s = a*b;
	    cout<<fixed<<setprecision(6)<<s<<endl;
	}
	return 0;
}
