#include <iostream>
using namespace std;
int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    int s = 0;
	    s += a/100;
	    a %= 100;
	    s += a/50;
	    a %= 50;
	    s += a/10;
	    a %= 10;
	    s += a/5;
	    a %= 5;
	    s += a/2;
	    a %= 2;
	    s += a;
	    cout<<s<<endl;
	}
	return 0;
}
