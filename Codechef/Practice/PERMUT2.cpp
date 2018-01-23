#include <bits/stdc++.h>
using namespace std;
int sti(string s)
{
    int t=0;
    for(int i=0;i<s.length();i++)
    {
         t = t*10 + (s[i]-'0');
    }
    return t;
}
int main() {
    int t,a,b,c;
	string ss;
	while(getline(cin,ss))
	{
	    a = sti(ss);
	    if(a==0)break;
	    int *arr = new int[a+1];
	    map <int,int> mp;
	    for(int i=1;i<=a;i++)
        {
            cin>>arr[i];
            mp[arr[i]] = i;
        }
        int f = 0;
        for(int i=1;i<=a;i++)
        {
            if(arr[i]!=mp[i])
            {
                f = 1;
                break;
            }
        }
        if(f==1)
            cout<<"not ambiguous\n";
        else 
            cout<<"ambiguous\n";
        getline(cin,ss);
	}
	return 0;
}
