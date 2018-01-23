#include <iostream>
using namespace std;
int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    int s = 0;
	    s = a%10;
	    a /= 10;
	    while(a>9)
	    {
	        a /= 10;
	    }
	    s += a;
	    cout<<s<<endl;
	}
	return 0;
}
