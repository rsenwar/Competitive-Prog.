#include <bits/stdc++.h>
using namespace std;
int main() {
    double n,a,b,c;
	cin>>n;
	while(n--)
	{
	    cin>>a;
	    double hr=0,da=0;
	    if(a<1500)
	    {
	        hr = a/10;
	        da = a*9;
	        da /= 10;
	    }
	    else
	    {
	        hr = 500;
	        da = a*98;
	        da /= 100;
	    }
	    cout<<fixed<<setprecision(9)<<hr+a+da<<endl;
	}
	return 0;
}
