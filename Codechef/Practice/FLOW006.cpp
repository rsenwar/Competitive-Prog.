#include <iostream>
using namespace std;
int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    int s = 0;
	    while(a!=0)
	    {
	        s += (a%10);
	        a /= 10;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
