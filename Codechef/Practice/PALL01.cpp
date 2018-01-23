#include <bits/stdc++.h>
using namespace std;
bool isPal(int x)
{
    vector <int> vec;
    while(x!=0)
    {
        vec.push_back(x%10);
        x /= 10;
    }
    for(int i=0,j=vec.size()-1;i<=j;i++,j--)
        if(vec[i]!=vec[j])
            return false;
    return true;
}
int main() {
	long long t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    if(isPal(a))
	        cout<<"wins\n";
	    else
	        cout<<"losses\n";
	}
	return 0;
}
