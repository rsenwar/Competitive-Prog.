#include <iostream>
using namespace std;
int s;
void rev_n(int n)
{
    if(n==0)
        return;
    s = s*10 + (n%10);
    rev_n(n/10);
}
int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    s=0;
	    rev_n(a);
	    cout<<s<<endl;
	}
	return 0;
}
