#include <iostream>
using namespace std;
int main() {
    int t;
    int n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(abs(m-n)<k)
			cout<<0<<"\n";
		else
			cout<<abs(m-n)-k<<"\n";
    }
	return 0;
}
