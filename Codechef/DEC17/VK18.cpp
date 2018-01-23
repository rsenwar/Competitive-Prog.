#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll su[1000005],su_val[2000005];
ll calc(ll x)
{
    ll so=0,se=0;
    bool f=true;
    while(x!=0)
    {
   	int dig = x%10;
        if(dig%2==0)
            se+=dig;
        else
            so+=dig;
        x /= 10;
    }
    return abs(so-se);
}
void init()
{
    for(int i=0;i<=2000000;i++)
    	su_val[i] = 0;
    for(int i=1;i<=1000000;i++)
    	su[i] = 0;
    for(int i=1;i<=2000000;i++)
    {
        su_val[i] = calc(i) + su_val[i-1];
    }
    su[1] = 2;
    for(int i=2;i<=1000000;i++)
    {
        su[i] = su[i-1] + 2*(su_val[2*i-1] - su_val[i]) + su_val[2*i] - su_val[2*i-1]; 
    }
}
int main()
{
    ll tests,n;
    scanf("%lld",&tests);
    init();
    while(tests--)
    {
        scanf("%lld",&n);
        printf("%lld\n",su[n]);
    }
return 0;
}
