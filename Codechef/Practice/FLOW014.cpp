#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
	cin>>n;
	while(n--)
	{
	    float c;
	    int h,tw,g;
	    bool f1,f2,f3;
	    cin>>h>>c>>tw;
        f1=h>50;    f2=10*c<7;   f3=tw>5600;
        if(f1&f2&f3)
            g=10;
        else if(f1&f2)
            g=9;
        else if(f2&f3)
            g=8;
        else if(f1&f3)
            g=7;
        else if(f1|f2|f3)
            g=6;
        else if(!(f1&f2&f3))
            g=5;
        cout<<g<<"\n";
	}
	return 0;
}
